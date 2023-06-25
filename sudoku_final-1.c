#include <stdio.h>
#include <windows.h>
#include <time.h>

void input();

int n,g,lvl,hints,sqroot;

void colour(char s[100],int code){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), code);
	printf("%s",s);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);	
}

void bgcolour(char s[100],int code1,int code2){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), code1|code2 );
	printf("%s",s);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 );
}

void board(int grid[n][n],int xvals[g],int yvals[g]){
	int i,j;
	colour("",15);
	
	for (i = 0; i <= n; i++){
		if (i == 0){
			printf("\n\t\t\t\t");
			for (j = 1; j <= n; j++){
				if (j == 1)
					printf("    %d", j);
				else
					printf("   %d", j);
			}
		}
		else{
			printf("\n  \t\t\t\t  ");
			for (j = 1; j <= n; j++){
				if ( (((i-1)%sqroot) == 0) && ((i-1) != 0)){
					colour("+---",15);
				}
				else
					colour("+---",1);
			}
			printf("+");
			printf("\n\t\t\t\t%d ", i);

			for (j = 1; j <= n; j++){
				if ( (((j-1)%sqroot) == 0) && ((j-1) != 0)){
				colour("|",15);
			}
				else
					colour("|",1);	

				if (grid[i-1][j-1] != 0){
					if(randclr(i,j,xvals,yvals)){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14|0x0020);
						printf(" %d ", grid[i-1][j-1]);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				}
				else{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14|0x0040);
						printf(" %d ", grid[i-1][j-1]);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);					
				}
			}
				else
					bgcolour("   ",15,0x0020);
		}
			colour("|",1);

			if (i == n){
				printf("\n  \t\t\t\t  ");
				for (j = 1; j <= n; j++){
					colour("+---",1);
				}
				colour("+",1);
				printf("\n");
			}
		}
	}
}

void info(){
	printf("\n\t  ");
	printf("\n  ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15|0x0010);
	printf("    %dx%d SUDOKU     ",n,n);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 );
	printf("\n\n  ");
	colour("   LEVEL: ",14);
	printf("");
	if (lvl==1){
		printf("Easy   ");
	}
	else if (lvl==2){
		printf("Medium ");
	}
	else if (lvl==3){
		printf("Hard   ");
	}
	printf("\t\t\t\t\t");
	colour("Hints Left: ",14);
	printf("%d",hints);
	printf("\n\n");
}
int randclr(int n1,int n2,int xvals[g],int yvals[g]){
	int i;
	for (i=0;i<g;i++){
		if ((n1-1)==xvals[i] && (n2-1)==yvals[i]){
			return 1;
		}
	}
	return 0;
}

int randchk(int r, int c,int soln[n][n]){
	int i, j, k;
	for (i=0;i<n;i++){
		if ((i==r));
		else if (soln[r][c] == soln[i][c])
			return 1;
		if ((i==c));
		else if (soln[r][c] == soln[r][i])
			return 1;
	}
	int row = r/sqroot;
	int col = c/sqroot;

	for(j=row*sqroot; j<(row+1)*sqroot; j++)
	{
		for(k=col*sqroot; k<(col+1)*sqroot; k++)
		{
			if (r==j && c==k);

			else if (soln[r][c] == soln[j][k])
				return 1;
		}
	}
	return 0;
}

void display(int grid[n][n],int soln[n][n],int xvals[g],int yvals[g]){
	info();
	board(grid,xvals,yvals);
	while(1){
    	input(grid,soln,xvals,yvals);	
	}	
}

int random(int grid[n][n]){	
	time_t t;
	srand((unsigned)time(&t));
	int soln[n][n];
	int i,j,k,flag;

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			soln[i][j] = grid[i][j];

	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			if (soln[i][j] != 0){
				if (randchk(i,j,soln) == 1)
					return -1;
			}
			else{
				for (k = 1; k <= n; k++){
					soln[i][j] = k;
					flag = randchk(i,j,soln);
					if (flag == 0){
						random(soln);
					}
				}
				return 0;
			}
		}
	}
	
	for (i = 0; i < n; i++){
		for (j = 0; j<n; j++){
			grid[i][j] = soln[i][j];
		}
	}
	
  	int xvals[g],yvals[g];
  	for(i=0;i<g;i++){
		int p=rand()%n;
    	int q=rand()%n;
    	grid[p][q]=0;
    	xvals[i]=p;
    	yvals[i]=q;
	}
	display(grid,soln,xvals,yvals);	
}

void check(int n1,int n2, int n3,int grid[n][n],int soln[n][n],int xvals[g],int yvals[g]){
	int i,j,flag1=-1,flag2=-1,flag3=-1,flag4=1,flag5=1,flag6=0,flag7=1;
	if(n3==-2){
		system("cls");
		info();
		board(soln,xvals,yvals);
		colour("\n\n\t\t\t\t-> You Decided to Quit The Game.\n\n\t\t\t\t\t-> Thanks For Playing.\n",15);
		getch();
		exit(0);
	}
	for(i=1;i<n+1;i++){
		for(j=1;j<n+1;j++){
			if(i==n1 && j==n2){
				flag1=1;
				break;
			}
		}
	}
	for (i=0;i<g;i++){
		if ((n1-1)==xvals[i] && (n2-1)==yvals[i]){
			flag2=1;
			break;
		}
	}
	if(n3!=-1){
		for(i=0;i<n+1;i++){
			if(i==n3){
				flag3=1;
				break;
			}
		}
	}
	
    int r = (n1-1)-((n1-1)%sqroot);
    int c = (n2-1)-((n2-1)%sqroot);

    for(i=0;i<sqroot;i++){
        for(j=0;j<sqroot;j++){
        	if (grid[r+i][c+j] !=0){
            	if(grid[r+i][c+j]==n3){
                	flag4=-1;
                	break;
            	}
        	}
        }
	}
	
	for (i=0;i<n;i++){
		if(grid[i][n2-1] != 0){
			if (grid[i][n2-1]==n3){
				flag5=-1;
				break;
			}	
		}
	}
	
	for (j=0;j<n;j++){
		if(grid[n1-1][j] != 0){
			if (grid[n1-1][j]==n3){
				flag5=-1;
				break;
			}
		}
	}
	
	if(n3==-1){
		flag3=1;
		if(hints<=0)
			flag6=-1;
		else{
			if(flag1==-1)
			flag6=-1;
			else if(flag1==1 && flag2==-1)
			flag6=-1;
			else{
				flag6=1;
				hints--;			
			}
		}
	}
	char error[100];
	if (flag1==-1){
		strcpy(error,"INVALID POSITION");
		flag7=-1;		
	}
	else if (flag1==1 && flag2==-1){
		strcpy(error,"THIS POSITION CANNOT BE CHANGED");
		flag7=-1;		
	}
	else if(flag1==1 && flag2==1 && flag3==-1){
		strcpy(error,"INVALID VALUE");
		flag7=-1;		
	}
	else if(flag1==1 && flag2==1 && flag3==1 && flag4==-1){
		strcpy(error,"NOT ACCEPTED IN SUB GRID");
		flag7=-1;		
	}
	else if(flag1==1 && flag2==1 && flag3==1 && flag4==1 && flag5==-1){
		strcpy(error,"NOT ACCEPTED ALONG ROW AND COLUMN");
		flag7=-1;		
	}
	else if(flag1==1 && flag2==1 && flag3==1 && flag4==1 && flag5==1 && flag6==-1){
		strcpy(error,"NO HINTS LEFT");
		flag7=-1;
	}
	
	if (flag7==-1){
		system("cls");
		info();
		board(grid,xvals,yvals);
		printf("\n\n\t");
		colour(" Warning !!! ",4);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
		printf("%s",error);
		printf("\a");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		input(grid,soln,xvals,yvals);
	}
	else{
		if (flag6==1){
			grid[n1-1][n2-1]=soln[n1-1][n2-1];
		}
		else{
			grid[n1-1][n2-1]=n3;
		}
	}
}

void input(int grid[n][n],int soln[n][n],int xvals[g],int yvals[g]){
	int i,j,n1,n2,n3,count=0;
	printf("\n\n\t\t");
	colour("Enter Position: ",6);
	scanf("%d,%d,%d",&n1,&n2);
	printf("\n\t\t");
	colour("Enter Value: ",6);
	scanf("%d",&n3);
	check(n1,n2,n3,grid,soln,xvals,yvals);
	system("cls");
	info();
	board(grid,xvals,yvals);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(grid[i][j]==soln[i][j]){
				count++;
			}
		}
		if(count==n*n){
			colour("\n\n\t\t\t\t-> Good Job!!! You Solved the Sudoku.\n\n\t\t\t\t\t-> Thanks For Playing.\n",14);
			getch();	
			exit(0);
		}
	}
}

int chk1=0,chk2=0;
void size(){
	printf("\n\n\n\t\t\t\t");
	bgcolour("                            ",15,0x0016);
	printf("\n\t\t\t\t");
	bgcolour("    THE CLASSICAL SUDOKU    ",15,0x0016);
	printf("\n\t\t\t\t");
	bgcolour("                            ",15,0x0016);
	printf("\n\n\n\n\t\t");
	colour("   -> Please Choose A Sudoku Size :",14);
	printf("\n\n\n\n\t\t\t\t");
	colour("# Hit 1 for a 4X4 Sudoku\n",2);
	printf("\n\t\t\t\t");
	colour("# Hit 2 for a 9X9 Sudoku",2);
	printf("\n\n\t\t\t\t");
	int input=getch();
	
	if(input==49){
		n=4;sqroot=2;chk1=1;
	}
	else if(input==50){
		n=9;sqroot=3;chk1=1;hints=6;
	}
	else{
		system("cls");
		printf("\a");
		bgcolour("Warning: You Hit A Wrong Key. Be Careful !!!",15,0x0040);
		size();
	}
}

void level(){
	printf("\n\n\n\t\t\t\t");
	bgcolour("                            ",15,0x0016);
	printf("\n\t\t\t\t");
	bgcolour("    THE CLASSICAL SUDOKU    ",15,0x0016);
	printf("\n\t\t\t\t");
	bgcolour("                            ",15,0x0016);
	printf("\n\n\n\n\t\t");
	colour("   -> Please A Select Difficulty Level :",14);
	printf("\n\n\n\n\t\t\t\t");
	colour("# Hit 1 for Easy\n",2);
	printf("\n\t\t\t\t");
	colour("# Hit 2 for Medium",2);
	printf("\n\n\t\t\t\t");
	colour("# Hit 3 for Hard",2);
	printf("\n\n\t\t\t\t");
	int input=getch();
	
  	if(n==4){
  		if (input==49){			
  			hints=2;g=6;chk2=1;lvl=1;
		  }
		else if(input==50){
			hints=3;g=10;chk2=1;lvl=2;
		}
		else if(input==51){
			hints=3;g=14;chk2=1;lvl=3;
		}
		else{
			system("cls");
			printf("\a");
			bgcolour("Warning: You Hit A Wrong Key. Be Careful !!!",15,0x0040);
			level();
		}
	}
	
  	else if(n==9){
  		if (input==49){
		  	g=30;chk2=1;lvl=1;
		  }
		else if(input==50){
			g=50;chk2=1;lvl=2;
		}
		else if(input==51){
			g=70;chk2=1;lvl=3;
		}
		else{
			system("cls");
			bgcolour("Warning: You Hit A Wrong Key. Be Careful !!!",15,0x0040);
			level();
			printf("\a");
		}
	}
    system("cls");
}

int main(){
	while (chk1==0){	
		size();		
	}
	system("cls");

	while (chk2==0){
		level();
	}
	system("cls");
	
	printf("\n\n\n\t\t\t");
    bgcolour("  SOME INSTRUCTIONS BEFORE YOU BEGIN:  ",15,0x0040);
    printf("\n\n\n\n");
    colour("   1. A Number must not repeat in a Row, Column, or the Sub-Grid.\n\n",14);
    colour("   2. You are NOT allowed to alter the pre-filled cell numbers.\n\n",14);
    colour("   3. If you need to Clear a previously filled value, Input the Value as 0.\n\n",14);
    colour("   3. If you want a Hint, enter the desired position and Input the Value as -1.\n\n",14);
    colour("   5. If you want to Quit the game mid-way and want the Solution, Input the Value as -2.\n\n\n\n",14);
	printf("\t\t\t\t");
    colour("GOOD LUCK !",2);
    printf("\n\n\t\t\t\t\t");
    colour("Hit any Key to Continue ",3);
    getch();
    system("cls");
    
	int i,j,grid[n][n];

	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			grid[i][j] = 0;
		}
	}

	time_t t;
	srand((unsigned)time(&t));
	for(i=0;i<n;i++){
		if((i%sqroot)==0){
			grid[i][i]=(rand() %n) + 1;
		}
	}
	
	random(grid);
	
return 0;
}

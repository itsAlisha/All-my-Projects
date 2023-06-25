#include <stdio.h>
#include <windows.h>
#include <stdbool.h> 
#include <time.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <MMsystem.h>
int n;
void colour(char s[100],int code){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), code);
	printf("%s",s);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
}
int left(int n){
     bool arr[5]={0}; 
     arr[n]=1;
    time_t t;
    int lower=1;
    int upper=4;
     srand((unsigned)time(&t));
     int i;
	 for(i=0;i<n;i++){
        
  int r = (rand() %(upper - lower + 1)) + lower;
      if(!arr[r]){
            return r;}
            else{
                arr[r]=1;
                i--;
            }
}}

void first(){
 
    colour("**************************************************************************************\n",9);
    colour("   Deviyon aur sajjano, chaliye hum aur aap milkar khelte hain Kaun Banega Crorepati\n",14);
    colour("            By : Alisha  Lavisha  Preetkamal \n",14);
    colour("****************************************************************************************\n",9);
   //PlaySound(TEXT("kbc.wav"),NULL,SND_SYNC);
    }

void question(int n){
	
	Play :{
	char file[52][1000];
    
    int i,j,p=0;
    FILE *fptr = NULL;
    fptr = fopen("kbc.txt", "r");
    while(fgets(file[p], 1000, fptr)) 
	{
        file[p][strlen(file[p]) - 1] = '\0';
        p++;
    }
    char questions[22][1000];
    char options[22][1000];
    char flip[4][1000];
    char optionf[4][1000];
    
    for(i=0;i<22;i++){
    	for(j=0;j<1000;j++)
    	questions[i][j]=file[i][j];
	}
    for(i=0;i<22;i++){
    	for(j=0;j<1000;j++)
    	options[i][j]=file[i+22][j];
	}
    for(i=0;i<4;i++){
    	for(j=0;j<1000;j++)
    	flip[i][j]=file[i+44][j];
	}
    for(i=0;i<4;i++){
    	for(j=0;j<1000;j++)
    	optionf[i][j]=file[i+48][j];
	}

    
    int answers[23]={2,1,1,3,3,2,3,1,4,1,1,4,2,1,4,2,3,2,4,2,2,3};
    int option1[23]={2,89,90,2,2,15,2,92,2,92,90,5,7,88,6,3,3,5,4,5,10,5};
    int option2[23]={90,5,4,2,4,78,2,1,4,1,4,4,80,2,4,80,2,85,4,87,80,5};
    int option3[23]={4,4,2,95,89,4,95,4,5,4,2,1,5,5,5,7,90,5,1,4,5,80};
    int option4[23]={4,2,4,1,5,3,1,3,89,3,4,90,8,5,85,10,5,5,89,4,5,10};

    int ansf[5]={4,4,2,3};
    int guess,guess2,flipans,ch;
    int count=1;
    int half=1;
    int audi=1;
    int call=1;
    int diff=1;
    int times;
    if(n<=5){
        times=1;
    }
    else if(n<=10){
        times=2;
    }
    else if(n<=15){
        times=3;
    }
    else{
        times=4;
    }
    int choice,choose,lifeline,life;
    int arr[100];
    for(i=0;i<100;i++){
        arr[i]=0;
    }
    time_t t; 
     srand((unsigned)time(&t)); 
     int total=0;
     colour("\n------**************************************************-----",9);
     colour("\nAapka pehla prashn aapke computer screen par ye raha : \n\n",14);
     
    for(i=0;i<n;i++){
    
        int r=rand()%21;
     
        if(arr[r]==0){
        arr[r]=1;
        printf("Q %d. %s \n",i+1,questions[r]);
         printf("%s\n",options[r]);
         corr :{
       colour("Press 1 if you know the answer and if you want to use the lifeline you press 0 : ",13);
       scanf("%d",&choice);
       choose=choice;
       if(choose==1){
               printf("Jawab dijiye Option 1,2,3,4 : "); 
       
	 scanf("%d",&guess2);
	 guess=guess2;
	 system("cls");
     if(guess!=answers[r]){
        colour("\nAfsos, ye galat jawab hai \n",14);
        colour("*******************************************************\n",13);
    }
    else if(guess==answers[r]){
    	system("cls");
        printf("\nSahi jawab, Aapko milte hain %d rupayee \n",(i+1)*50000);   
        total+=(i+1)*50000;
        colour("*******************************************************\n",13);
    }
     }
     //count=0;
     else if(choose==0){
        if(count<=times){
        colour("Now choose the lifelines you want to choose \n",9);
        printf("Now you can press\n 1 for 50-50\n 2 for Audience Poll\n 3 for Expert Advice\n 4 for Flip the Question\n");
      Again: {scanf("%d",&lifeline);
        int m=left(answers[r]);
        life=lifeline;
        switch(life){
            case 1:
            if(half<=1){
            half++;
            count++;
            printf("So you choose the 50-50 so the options remaining are \nOption %d and Option %d\n",answers[r],m);
            printf("Jawab dijiye Option : " );
            scanf("%d",&guess2);
            guess=guess2;
            if(guess!=answers[r]){
            	system("cls");
            colour("\nAfsos, ye galat jawab hai \n",14);
            colour("*******************************************************\n",13);
            }
         else if(guess==answers[r]){
         	system("cls");
           printf("\nSahi jawab, Aapko milte hain %d rupayee \n",(i+1)*50000);   
           total+=(i+1)*50000;
           colour("*******************************************************\n",13);
           }}
           else{
            colour("\n****You have already used this lifeline****Choose another****\n",14);
            colour("Now choose the lifelines you want to choose \n",9);
             printf("Now you can press\n 2 for Audience Poll\n 3 for Expert Advice\n 4 for Flip the Question\n");
            goto Again;

           }
            break;
        
        case 2:
        if(audi<=1){
        audi++;
        count++;
        printf("So you choose the audience poll \n");
        colour("Toh janta ka jawab yeh rha \n",10);
        printf("Option 1: %d percent\nOption 2: %d percent\nOption 3: %d percent\nOption 4: %d percent\n",option1[r],option2[r],option3[r],option4[r]);
        printf("\nJawab dijiye Option : " );
            scanf("%d",&guess2);
            guess=guess2;
              if(guess!=answers[r]){
              	system("cls");
            colour("\nAfsos, ye galat jawab hai \n",14);
            colour("*******************************************************\n",13);
            }
         else if(guess==answers[r]){
         	system("cls");
           printf("\nSahi jawab, Aapko milte hain %d rupayee \n",(i+1)*50000);   
           total+=(i+1)*50000;
           colour("*******************************************************\n",13);
           }}
           else{
            colour("\n****You have already used this lifeline****Choose another****\n",14);
            colour("Now choose the lifelines you want to choose \n",9);
            printf("Now you can press\n 1 for 50-50\n 3 for Expert Advice\n 4 for Flip the Question\n");
             goto Again;
           }
        break;
        case 3:
        if(call<=1){
            call++;
            count++;
        printf("So the expert gives %d as answer",answers[r]);
         printf("\nJawab dijiye Option : " );
            scanf("%d",&guess2);
            guess=guess2;
              if(guess!=answers[r]){
              	system("cls");
            colour("\nAfsos, ye galat jawab hai \n",14);
            colour("*******************************************************\n",13);
            }
         else if(guess==answers[r]){
         	system("cls");
           printf("\nSahi jawab, Aapko milte hain %d rupayee \n",(i+1)*50000);   
           total+=(i+1)*50000;
           colour("*******************************************************\n",13);
           }}
           else{
            colour("\n****You have already used this lifeline****Choose another****\n",14);
            colour("Now choose the lifelines you want to choose \n",9);
             printf("Now you can press\n 1 for 50-50\n 2 for Audience Poll\n 4 for Flip the Question\n");
             goto Again;
           }
            break;
        case 4:
        if(diff<=1){
        diff++;
        count++;
        printf("\nSo you choose to flip the question\n");
        printf("You can have a choice for type of question you would like to have\n");
        printf("Press\n1 for Sports and Games\n2 for Entertainment\n3 for Heritage and History\n4 for Books and Authors\n");
        scanf("%d",&ch);
        colour("Prashn aapki screen pr yeh raha\n",14);
        printf("Q %d. %s \n",i+1,flip[ch-1]);
         printf("%s\n",optionf[ch-1]);
        printf("\nJawab dijiye Option 1,2,3,4 : "); 
        scanf("%d",&flipans);
        if(flipans==ansf[ch-1]){
        	system("cls");
         printf("\nSahi jawab, Aapko milte hain %d rupayee \n",(i+1)*50000);   
        total+=(i+1)*50000;
        colour("*******************************************************\n",13);
     }
     else if(flipans!=ansf[ch-1]){
     	system("cls");
        colour("\nAfsos, ye galat jawab hai \n",14);
        colour("*******************************************************\n",13); 
     }}
     else{
            colour("\n****You have already used this lifeline****Choose another****\n",14);
            colour("Now choose the lifelines you want to choose \n",9);
             printf("Now you can press\n 1 for 50-50\n 2 for Audience Poll\n 3 for Expert Advice\n");
             goto Again;
           }
        break;
          }}}
          else{
            colour("\n ******You have crossed your limit of lifelines******\n",14);
            printf("\nJawab dijiye Option 1,2,3,4 : " );
            scanf("%d",&guess2);
            guess=guess2;
              if(guess!=answers[r]){
            colour("\nAfsos, ye galat jawab hai \n",14);
            colour("*******************************************************\n",13);
            }
         else if(guess==answers[r]){
           printf("\nSahi jawab, Aapko milte hain %d Rupayee \n",(i+1)*50000);   
           total+=(i+1)*50000;
           colour("*******************************************************\n",13);
           }
          }
          }
else
{    printf("*****Enter Correct Input*****\n");
	goto corr;
}}
  //  colour("\n************************************************************\n",13);
    if(i+1<n){
        colour("\nAgla prashn aapke computer screen par ye raha :\n\n\a",14);
        }
         } 
    else{
        
      i--; 
    }}
	
	printf("Bhout Bhout dhanyavaad apka khelne ke liye, Apki kul dhanraashi hui : %d rupayee",total);
	int num;
	colour("\n\nPRESS 1 TO PLAY AGAIN OR PRESS 0 TO EXIT\n : ",14);
	scanf("%d",&num);
	printf("\n");
	if(num==1)
	{
		system("cls");
	 first();
    //int n;
    printf("\nEnter the number of ques you want to solve : ");
    scanf("%d",&n);  
    system("cls");
		goto Play;
	}
	else 
	{
	    colour("\n******Thanks for playing the game******\n",14);
		exit(0);
	} 
	}}
	struct details {
	char Name[50];
	int age;
	}*d;
int main() {
	first();
		int p,entry,age;
	char name[20];
	printf("\nPress 1 if you want to play the game : ");
        scanf("%d",&p);
         entry =p;
         printf("\n");
        if(entry==1){
        	system("cls");
        	 
            colour("-----****************** SO LETS GET STARTED***********************-----\n",9);
             printf(" Some instructions might be helpful before you start : \n1. The choice of choosing Questions is upto you.You can select maximum 0f 20 Questions.\n2. For every correct answer, you will win an amount of 50000 which keeps on icreasing by 5000 every next Question you win.\n3. For every incorrect answer you win 0 Rupees.\n4. Incase you need help, you can choose a LifeLine out of : Audience Poll, Expert Advice, Flip the Question, 50-50.\n5. To select a LifeLine, enter 0. A LifeLine can be used once every 5 Questions.\n\n");
          printf("We wish you GOOD LUCK :\n\n");
        printf("So enter your details \n");
        d=(struct details*)malloc(sizeof(struct details));
           printf("Enter your name :\n");
            scanf("%s",d->Name);
           printf("Enter your age :\n");
           scanf("%d",&d->age);
           
              int n;
              colour("\n-----***********************************************************-----\n",9);
              printf("So %s lets begin\n",d->Name);
   Ques:{ printf("Enter the number of ques you want to solve : ");
    scanf("%d",&n);
    if(n<=20){
    	system("cls");
 		question(n); 
        }
        else{
            colour("You can solve maximum upto 20 questions\n",4);
            goto Ques;
        }}}
        else{
            printf("So you dont want to play the game");
        }
    
  
   
    return 0;
}

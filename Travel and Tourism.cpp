#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
class Bill;
class Traveller
{
	protected :
    string name;
    string gender;
    long long int mobile;
    string state;
    public:
     int number;
    Traveller(string a, string b, long long c, string d, int n){
		name=a;
		gender=b;
		mobile=c;
		state=d;
        number=n;
		}
           friend Bill operator *(Bill, Traveller);
           friend void print_receipt(Bill*, Traveller*);
};
class Destination 
{
    protected:
    int destination;
    int price;
    int days;
    string dest;
    public:
    void display(){
			cout<<"1. GOA  Price : Rs 9,000 - 3 Nights/4 Days per person"<<endl;
				cout<<"Price : Rs 12,000 - 5 Nights / 6 Days per person"<<endl;
				cout<<"Price : Rs 21,200 - 7 Nights / 8 Days per person"<<endl;
				cout<<"Inclusion : Sightseeing, Meals, Car, Hotels"<<endl<<endl;
                cout<< "2. AGRA  Price : Rs 15,000 - 3 Nights/4 Days per person"<<endl;
				cout<<"Price : Rs 17,000 - 5 Nights / 6 Days per person"<<endl;
				cout<<"Price : Rs 28,200 - 7 Nights / 8 Days per person"<<endl;
				cout<<"Inclusion : Sightseeing, Meals, Car, Hotels"<<endl<<endl; 
                cout<<"3. RAJASTHAN Price : Rs 7,500 - 3 Nights/4 Days per person"<<endl;
				cout<<"Price : Rs 10,000 - 5 Nights / 6 Days per person"<<endl;
				cout<<"Price : Rs 26,000 - 7 Nights / 8 Days per person"<<endl;
				cout<<"Inclusion : Sightseeing, Meals, Car, Hotels"<<endl<<endl;
                cout<<"4. DELHI Price : Rs 8,000 - 3 Nights/4 Days per person"<<endl;
				cout<<"Price : Rs 15,000 - 5 Nights / 6 Days per person"<<endl;
				cout<<"Price : Rs 21,200 - 7 Nights / 8 Days per person"<<endl;
				cout<<"Inclusion : Sightseeing, Meals, Car, Hotels"<<endl<<endl;
                cout<<"5. COORG Price : Rs 10,000 - 3 Nights/4 Days per person"<<endl;
				cout<<"Price : Rs 20,000 - 5 Nights / 6 Days per person"<<endl;
				cout<<"Price : Rs 25,00 - 7 Nights / 8 Days per person"<<endl;
				cout<<"Inclusion : Sightseeing, Meals, Car, Hotels"<<endl<<endl;
			cout<<"6. KULLU MANALI Price : Rs 8,000 - 3 Nights/4 Days per person"<<endl;
				cout<<"Price : Rs 12,000 - 5 Nights / 6 Days per person"<<endl;
				cout<<"Price : Rs 21,200 - 7 Nights / 8 Days per person"<<endl;
				cout<<"Inclusion : Sightseeing, Meals, Car, Hotels"<<endl<<endl;
            cout<<"7. LEH LADAKH Price : Rs 9,000 - 3 Nights/4 Days per person"<<endl;
				cout<<"Price : Rs 17,000 - 5 Nights / 6 Days per person"<<endl;
				cout<<"Price : Rs 26,200 - 7 Nights / 8 Days per person"<<endl;
				cout<<"Inclusion : Sightseeing, Meals, Car, Hotels"<<endl<<endl;
            cout<<"8. KERALA  Price : Rs 8,500 - 3 Nights/4 Days per person"<<endl;
				cout<<"Price : Rs 11,000 - 5 Nights / 6 Days per person"<<endl;
				cout<<"Price : Rs 24,200 - 7 Nights / 8 Days per person"<<endl;
				cout<<"Inclusion : Sightseeing, Meals, Car, Hotels"<<endl<<endl;
            cout<<"9. MCLEODGANJ  Price : Rs 8,000 - 3 Nights/4 Days per person"<<endl;
				cout<<"Price : Rs 10,000 - 5 Nights / 6 Days per person"<<endl;
				cout<<"Price : Rs 15,200 - 7 Nights / 8 Days per person"<<endl;
				cout<<"Inclusion : Sightseeing, Meals, Car, Hotels"<<endl<<endl;
            cout<<"10. LAKSHADWEEP Price : Rs 9,500 - 3 Nights/4 Days per person"<<endl;
				cout<<"Price : Rs 12,000 - 5 Nights / 6 Days per person"<<endl;
				cout<<"Price : Rs 20,200 - 7 Nights / 8 Days per person"<<endl;
				cout<<"Inclusion : Sightseeing, Meals, Car, Hotels"<<endl<<endl;
    }
    void set_dest()
    {
        cout<<"Enter choice: ";
        cin>>destination;
        cout<<"Enter number of days to stay(4, 6 and 8 are available in scheme): ";
        cin>>days;
        switch(destination)
        {
            case 1:
            dest="Goa";
        if(days==4)
        {
            price=9000;
        }
        if(days==6)
        {
            price=12000;
        }
        if(days==8)
        {
            price=21000;
        }
            break;

            case 2:
            dest="Agra";
            if(days==4)
        {
            price=15000;
        }
        if(days==6)
        {
            price=17000;
        }
        if(days==8)
        {
            price=28000;
        }
            break;

            case 3:
            dest="Rajasthan";
            if(days==4)
        {
            price=7500;
        }
        if(days==6)
        {
            price=10000;
        }
        if(days==8)
        {
            price=26000;
        }
            break;

            case 4:
            dest="Delhi";
            if(days==4)
        {
            price=8000;
        }
        if(days==6)
        {
            price=15000;
        }
        if(days==8)
        {
            price=21000;
        }
            break;

            case 5:
            dest="COORG";
            if(days==4)
        {
            price=10000;
        }
        if(days==6)
        {
            price=20000;
        }
        if(days==8)
        {
            price=25000;
        }
            break;

            case 6:
            dest="Kullu Manali";
            if(days==4)
        {
            price=8000;
        }
        if(days==6)
        {
            price=12000;
        }
        if(days==8)
        {
            price=21000;
        }
            break;

            case 7:
            dest="Leh Ladakh";
            if(days==4)
        {
            price=9000;
        }
        if(days==6)
        {
            price=17000;
        }
        if(days==8)
        {
            price=26000;
        }
            break;

            case 8:
            dest="Kerela";
            if(days==4)
        {
            price=8500;
        }
        if(days==6)
        {
            price=11000;
        }
        if(days==8)
        {
            price=24000;
        }
            break;

            case 9:
            dest="Mcleodganj";
            if(days==4)
        {
            price=8000;
        }
        if(days==6)
        {
            price=10000;
        }
        if(days==8)
        {
            price=15000;
        }
            break;

            case 10:
            dest="Lakshadweep";
            if(days==4)
        {
            price=9500;
        }
        if(days==6)
        {
            price=12000;
        }
        if(days==8)
        {
            price=20000;
        }
            break;

            default:
            break;
        }
    }
};
class Transport: public Destination
{
    protected:
    int fair;
    int mode;
    string Mode;
    public:
    void transdisplay(){
			cout<<"Transport Facilities available : "<<endl;
			cout<<"1. FLIGHT         2. TRAIN          3. BUS"<<endl<<endl;
		}
        void booking(){
			cout<<"Select the mode of Transport you are comfortable with : "<<endl; 
			cin>>mode;
			switch (mode){
			case 1 :
				{
                    Mode="Flight";
					if(destination==1||destination==3||destination==5)
					{cout<<"Flight Cost : Rs 13511 per person";
					fair=13511;}
					else if(destination==6||destination==8||destination==10)
					{cout<<"Flight Cost : Rs 8674 per person";
					fair=8674;}
					else if(destination==2||destination==4)
					{cout<<"Flight Cost : Rs 7242 per person";
					fair=7242;}
					break;
				}
				case 2 :
				{
                    Mode="Train";
					if(destination==1||destination==3||destination==5){
					cout<<"Train Ticket Price : Rs 2240 per person";
					fair=2240;}
					else if(destination==6||destination==8||destination==10){
					cout<<"Train Ticket Price : Rs 3705 per person";
					fair=3705;}
					else if(destination==2||destination==4){
					cout<<"Train Ticket Price : Rs 1245 per person";
					fair=1245;}
					break;
				}
				case 3 :
				{
                    Mode="Bus";
					if(destination==1||destination==3||destination==5){
					cout<<"Bus Fare : 930 per person";
					fair=930;}
					else if(destination==2||destination==4||destination==9){
					cout<<"Bus Fare : 1484 per person";
					fair=1484;}
					else if(destination==2||destination==4||destination==9){
					cout<<"Bus Fare : 1500 per person";
					fair=1500;}
					break;
				}
			} 
		}
};
class Discount: public Transport
{
    protected:
    int disc=0;
    public:
    void show_schemes()
    {
        cout<<endl<<"1. ~~~~~~~~~~~ Family, Discount = 10% ~~~~~~~~~~~"<<endl;
        cout<<endl<<"2. ~~~~~~~~~~~ 1st Booking, Discount = 15% ~~~~~~~~~~~"<<endl;
        cout<<endl<<"3. ~~~~~~~~~~~ Along Spouse, Discount = 7% ~~~~~~~~~~~"<<endl;
        cout<<endl<<"4. ~~~~~~~~~~~ Diwali Scheme, Discount = 11% ~~~~~~~~~~~"<<endl;
        cout<<"Press 0 to continue"<<endl;
    }
    void add_scheme()
    {
        int choice;
        while(true)
        {
        cout<<"Enter the scheme to add: ";
        cin>>choice;
        if(choice==0)
        {break;}
            switch(choice)
            {
                case 1:
                disc+=10;
                break;

                case 2:
                disc+=15;
                break;

                case 3:
                disc+=7;
                break;
                
                case 4:
                disc+=11;
                break;

               default:
               break; 
            }
        }
    }
};
class Bill: public Discount
{
    int final_amt;
    public:
   friend Bill operator *(Bill, Traveller);
   friend void print_receipt(Bill*, Traveller*);
};
Bill operator *(Bill bl, Traveller tr)
{
    bl.final_amt=tr.number*((bl.price+bl.fair)-(bl.disc*(bl.price+bl.fair)/100));
    return bl;
}
   void print_receipt(Bill* bill, Traveller* trav){   
    int c;
    cout<<endl<<endl<<setw(55)<<"TRAVEL AGENCY INVOICE"<<endl;
    cout<<setw(50)<<"INVOICE NUMBER : "<<c<<endl;
    cout<<endl<<"Dear "<<trav->name<<","<<endl;
  	cout<<"We are glad to inform you that your booking is successful and is as follows : "<<endl<<endl;
   	cout<<"Name : "<<trav->name<<setw(50)<<"Hotel Charges : INR "<<bill->price*trav->number<<endl;
   	cout<<"Homestate : "<<trav->state<<setw(50)<<"Transport Charges : INR "<<bill->fair*trav->number<<endl;
   	cout<<"Phone no. : "<<trav->mobile<<setw(40)<<"Discount Applied : "<<bill->disc<<"%"<<endl;
   	cout<<"Destination : "<<bill->dest<<setw(35)<<"Subtotal : INR "<<bill->final_amt<<endl<<"No. of Travellers : "<<trav->number<<endl<<"Means of Transport : "<<bill->Mode<<endl<<"No. of Days : "<<bill->days<<endl;
   }
int main()
{
    string name, state, gender;
    long long int mob;
    int num;
    cout<<"1. ~~~~~~~~~~~ WELCOME TO TRAVEL BOOKING SYSTEM ~~~~~~~~~~~"<<endl<<endl;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your gender: ";
    cin>>gender;
    cout<<"Enter your contact: ";
    cin>>mob;
    cout<<"Enter your state: ";
    cin>>state;
    cout<<"Enter number of travellers: ";
    cin>>num;
    Traveller obj(name, gender, mob, state, num);
    cout<<endl;
    Bill bill;
    cout<<" ~~~~~~~~~~~ AVAILABLE PLACES TO VISIT ~~~~~~~~~~~"<<endl<<endl;
    bill.display();
    bill.set_dest();
    cout<<endl<<endl<<"~~~~~~~~~~~ TRANSPORT ~~~~~~~~~~~"<<endl<<endl;
    bill.transdisplay();
    bill.booking();
    cout<<endl<<" ~~~~~~~~~~~ DISCOUNT SCHEMES ~~~~~~~~~~~"<<endl<<endl;
    bill.show_schemes();
    bill.add_scheme();
    bill=bill*obj;
    print_receipt(&bill,&obj);
    return 0;
}


#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;



void mainMenu();  //global declaration as used many times

class Manage{
public:
	Manage()
	{
		mainMenu();
	}
};

class Details{
public:
	static string name, gender;
	int numb, age;
	string add;
	static int cId;
	char arr[100];

	void info()
	{
		cout<<"\nEnter the customer id:"<<endl;
		cin>>cId;
		cout<<"\nEnter your name"<<endl;
		cin>>name;
		cout<<"\nEnter your age"<<endl;
		cin>>age;
		cout<<"\nEnter your address"<<endl;
		cin>>add;
		cout<<"\nEnter your gender"<<endl;
		cin>>gender;
		cout<<"Your details are saved with us \n"<<endl;
	}
};

int Details::cId;
string Details::name;
string Details::gender;

class regist{
public:
	static int choice;
	int choice1;
	int back;
	static float charges;

	void flights()
	{
		string flightsN[]={"Dubai", "Canada", "UK", "USA", "Australia", "Europe"};

		for(int a=0; a<6; a++)
			cout<<(a+1)<<" .flight to "<<flightsN[a]<<endl;

		cout<<"\n Welcome to the Airlines"<<endl;
		cout<<"Press the number of the country of which you want to book the flight"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				cout<<"_____________Welcome to Dubai Emirates____________"<<endl;
				cout<<"Your comfort is our Priority. Enjoy the journey"<<endl;
				cout<<"Following are the flights \n"<<endl;

				cout<<"1. DUB-498"<<endl;
				cout<<"\t08-01-2022 8:00AM 10hrs Rs. 14000"<<endl;
				cout<<"2. DUB-658"<<endl;
				cout<<"\t09-01-2022 8:00AM 12hrs Rs. 10000"<<endl;
				cout<<"3. DUB-998"<<endl;
				cout<<"\t10-01-2022 8:00AM 11hrs Rs. 9000"<<endl;

				cout<<"\n Select the flight you want to book:";
				cin>>choice1;

				if(choice1==1)
				{
					charges=14000;
					cout<<"\nYou have successfully booked your flight DUB-498"<<endl;
					cout<<"You can go back to menu and display the ticket"<<endl;
				}
				else if(choice1==2)
				{
					charges=10000;
					cout<<"\nYou have successfully booked your flight DUB-658"<<endl;
					cout<<"You can go back to menu and display the ticket"<<endl;	
				}else if(choice1==3)
				{
					charges=9000;
					cout<<"\nYou have successfully booked your flight DUB-998"<<endl;
					cout<<"You can go back to menu and display the ticket"<<endl;
				}else{
					cout<<"Invalid Input, shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press any key to go back to the main menu"<<endl;
				cin>>back;
				if(back==1)
						mainMenu();
				else
						mainMenu();
			}
			case 2:
			{
				cout<<"_____________Welcome to Canada Airways____________"<<endl;
				cout<<"Your comfort is our Priority. Enjoy the journey"<<endl;
				cout<<"Following are the flights \n"<<endl;

				cout<<"1. CAN-948"<<endl;
				cout<<"\t08-01-2022 8:00AM 10hrs Rs. 14000"<<endl;
				cout<<"2. CAN-568"<<endl;
				cout<<"\t09-01-2022 8:00AM 12hrs Rs. 10000"<<endl;
				cout<<"3. CAN-899"<<endl;
				cout<<"\t10-01-2022 8:00AM 11hrs Rs. 9000"<<endl;

				cout<<"\n Select the flight you want to book:";
				cin>>choice1;

				if(choice1==1)
				{
					charges=14000;
					cout<<"\nYou have successfully booked your flight CAN-948"<<endl;
					cout<<"You can go back to menu and display the ticket"<<endl;
				}
				else if(choice1==2)
				{
					charges=10000;
					cout<<"\nYou have successfully booked your flight CAN-568"<<endl;
					cout<<"You can go back to menu and display the ticket"<<endl;	
				}else if(choice1==3)
				{
					charges=9000;
					cout<<"\nYou have successfully booked your flight CAN-899"<<endl;
					cout<<"You can go back to menu and display the ticket"<<endl;
				}else{
					cout<<"Invalid Input, shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press any key to go back to the main menu"<<endl;
				cin>>back;
				if(back==1)
						mainMenu();
				else
						mainMenu();
			}
			case 3:
			{
				cout<<"_____________Welcome to UK AIRWAYS____________"<<endl;
				cout<<"Your comfort is our Priority. Enjoy the journey"<<endl;
				cout<<"Following are the flights \n"<<endl;

				cout<<"1. UK-498"<<endl;
				cout<<"\t08-01-2022 8:00AM 10hrs Rs. 14000"<<endl;
				cout<<"2. UK-658"<<endl;
				cout<<"\t09-01-2022 8:00AM 12hrs Rs. 10000"<<endl;
				
				cout<<"\n Select the flight you want to book:";
				cin>>choice1;

				if(choice1==1)
				{
					charges=14000;
					cout<<"\nYou have successfully booked your flight UK-498"<<endl;
					cout<<"You can go back to menu and display the ticket"<<endl;
				}
				else if(choice1==2)
				{
					charges=10000;
					cout<<"\nYou have successfully booked your flight UK-658"<<endl;
					cout<<"You can go back to menu and display the ticket"<<endl;	
				}else{
					cout<<"Invalid Input, shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press any key to go back to the main menu"<<endl;
				cin>>back;
				if(back==1)
						mainMenu();
				else
						mainMenu();
			}	
			case 4:
			{
				cout<<"_____________Welcome to USA AIRWAYS____________"<<endl;
				cout<<"Your comfort is our Priority. Enjoy the journey"<<endl;
				cout<<"Following are the flights \n"<<endl;

				cout<<"1. US-498"<<endl;
				cout<<"\t08-01-2022 8:00AM 10hrs Rs. 14000"<<endl;
				

				cout<<"\n Select the flight you want to book:";
				cin>>choice1;

				if(choice1==1)
				{
					charges=14000;
					cout<<"\nYou have successfully booked your flight US-498"<<endl;
					cout<<"You can go back to menu and display the ticket"<<endl;
				}
				
				else{
					cout<<"Invalid Input, shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press any key to go back to the main menu"<<endl;
				cin>>back;
				if(back==1)
						mainMenu();
				else
						mainMenu();
			}
			case 5:
			{
				cout<<"_____________Welcome to Australian Airlines____________"<<endl;
				cout<<"Your comfort is our Priority. Enjoy the journey"<<endl;
				cout<<"Following are the flights \n"<<endl;

				cout<<"1. AUS-498"<<endl;
				cout<<"\t08-01-2022 8:00AM 10hrs Rs. 14000"<<endl;
				cout<<"2. AUS-658"<<endl;
				cout<<"\t09-01-2022 8:00AM 12hrs Rs. 10000"<<endl;
				cout<<"3. AUS-998"<<endl;
				cout<<"\t10-01-2022 8:00AM 11hrs Rs. 9000"<<endl;

				cout<<"\n Select the flight you want to book:";
				cin>>choice1;

				if(choice1==1)
				{
					charges=14000;
					cout<<"\nYou have successfully booked your flight AUS-498"<<endl;
					cout<<"You can go back to menu and display the ticket"<<endl;
				}
				else if(choice1==2)
				{
					charges=10000;
					cout<<"\nYou have successfully booked your flight AUS-658"<<endl;
					cout<<"You can go back to menu and display the ticket"<<endl;	
				}else if(choice1==3)
				{
					charges=9000;
					cout<<"\nYou have successfully booked your flight AUS-998"<<endl;
					cout<<"You can go back to menu and display the ticket"<<endl;
				}else{
					cout<<"Invalid Input, shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press any key to go back to the main menu"<<endl;
				cin>>back;
				if(back==1)
						mainMenu();
				else
						mainMenu();
			}
			case 6:
			{
				cout<<"_____________Welcome to European Airlines____________"<<endl;
				cout<<"Your comfort is our Priority. Enjoy the journey"<<endl;
				cout<<"Following are the flights \n"<<endl;

				cout<<"1. EUR-498"<<endl;
				cout<<"\t08-01-2022 8:00AM 10hrs Rs. 14000"<<endl;
				cout<<"2. EUR-658"<<endl;
				cout<<"\t09-01-2022 8:00AM 12hrs Rs. 10000"<<endl;
				cout<<"3. EUR-998"<<endl;
				cout<<"\t10-01-2022 8:00AM 11hrs Rs. 9000"<<endl;

				cout<<"\n Select the flight you want to book:";
				cin>>choice1;

				if(choice1==1)
				{
					charges=14000;
					cout<<"\nYou have successfully booked your flight EUR-498"<<endl;
					cout<<"You can go back to menu and display the ticket"<<endl;
				}
				else if(choice1==2)
				{
					charges=10000;
					cout<<"\nYou have successfully booked your flight EUR-658"<<endl;
					cout<<"You can go back to menu and display the ticket"<<endl;	
				}else if(choice1==3)
				{
					charges=9000;
					cout<<"\nYou have successfully booked your flight EUR-998"<<endl;
					cout<<"You can go back to menu and display the ticket"<<endl;
				}else{
					cout<<"Invalid Input, shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press any key to go back to the main menu"<<endl;
				cin>>back;
				if(back==1)
						mainMenu();
				else
						mainMenu();
			}
			default:
			{
				cout<<"Invalid input, shifting to the main menu"<<endl;
				mainMenu();
				break;
			}
		}

	}

};

float regist::charges;
int regist::choice;

class ticket : public regist, Details
{
public:
	void bill()
	{
		string dest;
		ofstream outf("records.txt");
		{
			outf<<"________________PP Airlines____________"<<endl;
			outf<<"_______________Ticket________________"<<endl;
			outf<<"_____________________________________"<<endl;

			outf<<"Customer Id:"<<Details::cId<<endl;
			outf<<"Name:"<<Details::name<<endl;
			outf<<"Gender:"<<Details::gender<<endl;
			outf<<"\tDescription"<<endl<<endl;
			if(regist::choice==1)
				dest="Dubai";
			else if(regist::choice==2)
				dest="Canada";
			else if(regist::choice==3)
				dest="UK";
			else if(regist::choice==4)
				dest="USA";
			else if(regist::choice==5)
				dest="Australia";
			else if(regist::choice==6)
				dest="Europe";

			outf<<"Destination\t\t"<<dest<<endl;
			outf<<"Flight cost\t\t"<<regist::charges<<endl;
		}
		outf.close();

	}
	void disbill()
	{
		ifstream ifs("records.txt"); //read from the file
		{
			if(!ifs)
					cout<<"File error"<<endl;
			while(!ifs.eof())
			{
				ifs.getline(arr,100);
				cout<<arr<<endl;
			}
		}
		ifs.close();
	}
};

void mainMenu(){
	int lchoice, schoice, back;

	cout<<"\t_________________PP Airlines_________________"<<endl;
	cout<<"\t_________________Main Menu___________________"<<endl;
	cout<<"\t_____________________________________________"<<endl;

	cout<<"\t\t\t\t\t\t\t\t\t\t"<<endl;

	cout<<"\t\t Press 1 to add customer Details \t"<<endl;
	cout<<"\t\t Press 2 for flight resgistrations \t"<<endl;
	cout<<"\t\t Press 3 for Ticket and charges   \t"<<endl;
	cout<<"\t\t Press 4 to Exit \t"<<endl;
	cout<<"\t____________________________________________"<<endl;

	cout<<"Enter the choice: ";
	cin>>lchoice;

	Details d;
	regist r;
	ticket t;

	switch(lchoice)
	{
		case 1:
		{
			cout<<"___________Customers_________\n"<<endl;
			d.info();
			cout<<" Press any key to go back to the main menu";
			cin>>back;
			if(back==1)
			
				mainMenu();
			else	
				mainMenu();
			break;
		}
		case 2:
		{
			cout<<"__________Book a flight using this system__________\n"<<endl;
			r.flights();
			break;
		}
		case 3:
		{
			cout<<"__________Get your ticket_______"<<endl;
			t.bill();
			cout<<"Your ticket is printed, you can collect it \n"<<endl;
			cout<<"Press 1 to display your ticket";
			cin>>back;
			if(back==1)
			{
				t.disbill();
				cout<<"Press any key to go back to main menu"<<endl;
				cin>>back;
				if(back==1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}
			}
			else
				mainMenu();
			break;
		}
		case 4:
		{
		cout<<"\n\n\n______Thank You______"<<endl;
		break;	
		}
		default:
		{
			cout<<"Invalid input, Please try again \n"<<endl;
			mainMenu();
			break;
		}
	}
}
int main()
 {
	Manage Mobj;
	return 0;
}

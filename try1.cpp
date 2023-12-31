#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;

struct patient
{
    long long ID;
	string firstname;
	string lastname;
	int age;
	char blood[5];
	char gender;
    patient*next;
};
class linkedqueue
{
	patient *head,*last;
	public:
	linkedqueue() //constructor
	{
		head=NULL;
		last=NULL;
	}
    patient input();
    void departmentname();
    void newrecord();
    void viewrecord();
    void editrecord();
    
    char departmentname[50];
};

//display in each section/function/class
banner(){
	std::cout<<"\n\n\t\t\t\t\t\t=================================="<<endl;
	std::cout<<"\t\t\t\t\t\t  |--Patient Management System--|"<<endl;
	std::cout<<"\t\t\t\t\t\t=================================="<<endl;

}
//display: please enter to continue
next(){
   
	cout<<"\n\n\n\t\t\t\t\t Press";
	 Sleep(644);
	cout<<" enter";
	 Sleep(644);
	cout<<" to";
	 Sleep(644);
	cout<<" continue";
	
	
		for(int i=1;i<=4;i++){
			Sleep(844);     //delays the next output by one second
			cout<<" .";
		}
}

void linkedqueue::newrecord(){
	cout<<"okay";
}
    void linkedqueue::viewrecord(){
    	string st2;
	ifstream in("hello.txt");
	for(int i=1;i<=8;i++){
		getline(in,st2);
			cout<<st2<<endl;};
	}
    void linkedqueue::editrecord(){
    	cout<<"okay";
	}
//to view record by nurse
viewrecordn(){
		string st2;
	ifstream in("hello.txt");
	for(int i=1;i<=8;i++){
		getline(in,st2);
			cout<<st2<<endl;}
			
		}
		
//to create new record
/*createrecord{
string name;
	string lv, gen, na, dr, age, ph;
	
	std::cout<<"Enter the patient's name: ";
	std::cin>>name;
	std::cout<<"\nLast visited: ";
	std::cin>>lv;
	std::cout<<"\nAge: ";
	std::cin>>age;
	std::cout<<"\nGendre: ";
	std::cin>>gen;
	std::cout<<"\nNext Appointment: ";
	std::cin>>na;
	std::cout<<"\nDoctor appointed: ";
	std::cin>>dr;
	
	ofstream out;
	out.open("hello.txt", ios::app);
	out<<name;
	out<<gen;
	out.close();
	cout<<name;
}*/
int readnumber()
{
   char b[20];
   cin.getline(b, sizeof(b));
   return atoi(b);
}



void departmentmenu (linkedqueue * q){                    //nurse
	banner();
	 int choice = 0, success;
    patient p;
    while(choice=!5){
	std::cout<<"\n\n\t\t\t\tThis page is for nurse."<<endl;
	cout<<"\t\t\t\tPress 1 to create a new record."<<endl;
	cout<<"\t\t\t\tPress 2 to view a records."<<endl;
	cout<<"\t\t\t\tPress 3 to edit records."<<endl;
	cout<<"\t\t\t\tPress 4 to view all the data."<<endl;
	cout<<"\t\t\t\tPress 5 to exit."<<endl;
	/*cin>>p;*/
			cout<<"\n   Please enter your choice : ";
	choice=readnumber();
	switch (choice)
	{
	  case 1:	q->newrecord();
				cout << "\n   Press any key";
	    	
	 			break;

      case 2:	q->viewrecord();
	    		cout << "\n   Press any key";
	    		
				break;

      case 3:	q->editrecord();
	 			cout<<"\n   Press any key";
     			
	      		break;
	      		
	   case 4: 	Sleep(600);
		        system("CLS");
	            q->viewrecord();
	            break;
	               		

      case 5:	system("cls");
	 		
	 			cout<<"\n   Press any key";
	 		
				break;
	 }
}


	/*if (p=4){
		Sleep(600);
		system("CLS"); 
	viewrecordn();*/
}






signup(){
	banner();    //function call
	std::cout<<"\n\n\t\t\t\t\t\t\t ------------------";
	std::cout<<"\n\t\t\t\t\t\t\t   ||--Sign Up--||";
	std::cout<<"\n\t\t\t\t\t\t\t ------------------";
	string username, password; int a;
	std::cout<<"\n\n\t\t\t\t\t\t------------------------------------";
	std::cout<<"\n\n\t\t\t\t\t\t Enter Username: ";
	std::cin>>username;
	std::cout<<"\n\t\t\t\t\t\t Enter password: ";
	std::cin>>password;
	again:                              //again here
	std::cout<<"\n\t\t\t\t\t\t Profession:";
	std::cout<<"\n\t\t\t\t\t\t Press 1 for Nurse and 2 for Doctor: ";
	std::cin>>a;
	std::cout<<"\n\n\t\t\t\t\t\t------------------------------------";
	        if(a!=1&&a!=2){                                                           //error message for selection of profession
			std::cout<<"\n\n\t\t\t\t\t\t  Error! Input 1 or 2"<<endl;
				std::cout<<"\n\t\t\t\t\t\t------------------------------------";
			Sleep(3000);
	        goto again;
			}
			else if(a==1||a==2){
			goto start;
		}
		
	
		std::cout<<"\n\n\t\t\t\t\t\t Your id is creating please wait";
	for(int i=0;i<=4;i++){
		Sleep(500);
		std::cout<<".";
	}
	std::cout<<"\n\n\t\t\t\t Your id is created successfully.";
	start:          //if anything incorrect will clear screen and start again
	system("CLS");
	banner();
	std::cout<<"\n\n\t\t\t\t\t\t\t ------------------";
    std::cout<<"\n\t\t\t\t\t\t\t       Log In";
    std::cout<<"\n\t\t\t\t\t\t\t ------------------";
	string username1, password1;
	std::cout<<"\n\n\t\t\t\t Username: ";
	std::cin>>username1;
	std::cout<<"\n\n\t\t\t\t Password: ";
	std::cin>>password1;
	
		
	
if(username1==username && password1==password){
	system("CLS");
	goto options;
}
else if(username1!=username && password1!=password){
	std::cout<<"\n\n\t\t\t\t User not registered";	
		Sleep(3000);
	goto start;
}
else if(username1!=username){
	std::cout<<"\n\n\t\t\t\t Username incorrect. Please Try Again!";
	Sleep(3000);
	goto start;
}
else if(password1!=password){
	std::cout<<"\n\n\t\t\t\t Password incorrect. Please Try Again!";
		Sleep(3000);
	goto start;
}
int i, choice = 0;
	linkedqueue departments[2];

	while(choice!=3)
	{
		strcpy(departments[0].departmentname,"Nurse\n");
		strcpy(departments[1].departmentname,"Doctor\n");
		
		system("cls");
		cout<<"\n  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
		cout<<"\n  |-- HOSPITAL MANAGEMENT SYSTEM --|";
		cout<<"\n  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n";
		cout<<"   Main Menu\n\n";
		for (i = 0; i < 4; i++)
		{
			cout<<"   "<<(i+1)<<": "<<departments[i].departmentname;
		}
		cout<<"   5: Exit";
		cout<<"\n\n   Please enter your choice : ";
		choice=readnumber();
		if(choice>=1 && choice<=2)
		{
			departmentmenu(&departments[choice-1]);
		}

	}
	if(choice==3)
	cout<<"\n\t\tThank you! \n";
	exit(0);

	  }

int main()
{
  
	banner();       //function call
	std::cout<<"\n\t\t\t\t\t\t\t A project by:"<<endl;
	std::cout<<"\n\t\t\t\t\t\t\t Susmita Sharma"<<endl;
		std::cout<<"\n\t\t\t\t\t\t\t Sushant Shrestha"<<endl;
			std::cout<<"\n\t\t\t\t\t\t\t Sitasma Thapa"<<endl;
			next();                          //function call
		std::cin.ignore();     //helps ignore the sleep fucntion
	system("cls");   //clears the screen
	signup();            //function call
			  
		
}


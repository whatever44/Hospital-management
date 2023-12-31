#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<fstream>
#include<sstream>
#include<vector>



/*
#define username_MIN 8
#if username_MIN < 8
#error username should be of more than 7 charater.
#end if


#define password_MIN 8
#if password_MIN < 8
#error Password should be of more than 8 character.
#end if*/

using namespace std;

class patient
{
	public:
    long long ID;
	string firstname;
	string lastname;
	int age;
	char blood[5];
	char gender;
    patient*next;
};

//creating linked list
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
    void nurse();
    void count();
    void update();
    /*void insertatbeg();   //create record->insert record    Search record   Count patients    Update Record  Delete record  Show all record
    void getpatientout();
    void listofpatients();
    int search(int);
    char departmentname[50];*/
};

object(){

linkedqueue obj;

}


//display in each section/function/class
void banner(){
	std::cout<<"\n\n\t\t\t\t\t\t=================================="<<endl;
	std::cout<<"\t\t\t\t\t\t  |--Patient Management System--|"<<endl;
	std::cout<<"\t\t\t\t\t\t=================================="<<endl;

}
//display: please enter to continue
void next(){
   
	cout<<"\n\n\n\t\t\t\t\t Press";
	 Sleep(444);
	cout<<" enter";
	 Sleep(444);
	cout<<" to";
	 Sleep(444);
	cout<<" continue";
	
	
		for(int i=1;i<=4;i++){
			Sleep(644);     //delays the next output by one second
			cout<<" .";
		}
}
//to view record by nurse
void viewrecordn(){
	string st2;
	
	ifstream inFile("hello.txt");
	for(int i=1;i<=50;i++){
		getline(inFile,st2);
			cout<<st2<<endl;}
			}
		 


 nurse(linkedqueue * q){
	p:
		system("CLS");
	banner();
	int c;
	std::cout<<"\n\n\t\t\t\tThis page is for nurse."<<endl;
	cout<<"\t\t\t\tPress 1 to create a new record."<<endl;
	cout<<"\t\t\t\tPress 2 to Search records."<<endl;
	cout<<"\t\t\t\tPress 3 to count patients."<<endl;
	cout<<"\t\t\t\tPress 4 to view duty list."<<endl;
	cout<<"\t\t\t\tPress 5 to update record."<<endl;
	cout<<"\t\t\t\tPress 6 to delete record."<<endl;
	cout<<"\t\t\t\tPress 7 to show all record"<<endl;
	cout<<"\t\t\t\tPress 8 to exit."
	cin>>c;
	switch(c)
	{
		case 1:
			system("CLS");
			break;
		case 2:
		    system("CLS");
			break;
	    case 3:
		    system("CLS");
			break;
		case 4:
		    system("CLS");
			break;
		case 5:
		    system("CLS");
			break;
		case 6:
		    system("CLS");
			break;
		case 7:
		    system("CLS");
			break;
		case 8:
		    exit(0);
			default:
			"\n\n\n\t\t\tInvalid Choice"						
	}
	getch();
	goto p;
	}


}

void doctor(){
	std::cout<<"This place is for Doctor."<<endl;
}




void signup(){
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
	std::cout<<"\n\t\t\t\t\t\t Press 1 for Doctor\n\t\t\t\t\t\t Press 2 for Nurse: ";
	std::cin>>a;
	std::cout<<"\n\n\t\t\t\t\t\t------------------------------------";
	        if(a==0 || a>3){                                                           //error message for selection of profession
			std::cout<<"\n\n\t\t\t\t\t\t  Error! Input 1, 2 or 3"<<endl;
				std::cout<<"\n\t\t\t\t\t\t------------------------------------";
			Sleep(3000);
	        goto again;
			}
			else if(a<=3){
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
} // Should not let the user know which one is incorrrect.
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
  options:
		
		linkedqueue q;

		if(a==1){ // Doctor
		 
		}
		else if(a==2){ // Nurse
			nurse(&q);
			//doctor();
		}
		
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


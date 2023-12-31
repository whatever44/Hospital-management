#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<fstream>
#include<sstream>
#include<string.h>
#include<conio.h>


using namespace std;
//display in each section/function/class
void banner()
{
	std::cout<<"\n\n\t\t\t\t\t\t=================================="<<endl;
	std::cout<<"\t\t\t\t\t\t  |--Patient Management System--|"<<endl;
	std::cout<<"\t\t\t\t\t\t=================================="<<endl;

}

struct patient
{
    int ID;
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
	/*patient *head,*last;
	public:
	linkedqueue() //constructor
	{
		head=NULL;
		last=NULL;
	}*/
	public:
	patient *head= NULL;
    patient input();
    void nurse();
    void insert()
	{
	    cin.ignore();
	    system("CLS");
		banner();
		int id;
		string fn, ln;
		int ag;
		char gender;
		char bloodgroup[5];
		cout<<"\n\t\t\t\tEnter Patient ID: ";
		cin>>id;
		std::cout<<"\n\t\t\t\tEnter the first name : ";
		cin>>fn;
		cout<<"\n\t\t\t\tEnter the last name : ";
		cin>>ln;
		cout<<"\n\t\t\t\tEnter the age : ";
		cin>>ag;
		cout<<"\n\t\t\t\tEnter gender (m/f) : ";
		cin>>gender;
		cout<<"\n\t\t\t\tEnter Blood group: ";
		cin>>bloodgroup[5];
		Sleep(600);
		patient *new_node = new patient;
		new_node-> ID =id;
		new_node-> firstname= fn;
		new_node-> lastname= ln;
		new_node->age=ag;
		new_node-> blood[5] = bloodgroup[5];
		new_node-> gender= gender;
		new_node-> next= NULL;
		if(head==NULL){
			head=new_node;
		}
		else
		{
			patient *ptr=head; //finds last node of the linked list
		     while(ptr->next != NULL){
		     	ptr=ptr->next;
			 }
			 ptr->next=new_node;
		}
		cout<<"/n/t/t/t/tNew Patient added successfully...."<<endl;

    Sleep(1229);
	}

	void search()
	{cin.ignore();
		system("CLS");
	banner();
	if(head==NULL)
	{
		cout<<"\n\n\t\t\t\tLinked List is Empty...."<<endl;
	}
	else
	{
		int id, found=0;
		cout<<"\n\n\t\t\t\tEnter Patient ID for search: "<<endl;
		cin>>id;
		patient *ptr=head;
		while(ptr!=NULL){
			if(id==ptr->ID)
			{
				cout<<"\n\t\t\t\tId:"<<ptr -> ID;
            cout<<"\n\t\t\t\tFirstname:"<<ptr -> firstname;
            cout<<"\n\t\t\t\tLastname:"<<ptr -> lastname;
            cout<<"\n\t\t\t\tAge:"<<ptr -> age;
            cout<<"\n\t\t\t\tBlood:"<<ptr -> blood;
            cout<<"\n\t\t\t\tGender:"<<ptr -> gender;
            cin.ignore();
            found++;
			}
			ptr=ptr->next;
		}
		if(found==0)
		{
			cout<<"\n\n\t\t\t\tPatient not found. Invalid ID. Input correct id!";
			Sleep(1224);
		}
	}
}


void Del()
{
    cin.ignore();
	system("CLS");
	banner();
  if(head == NULL)
  {
    cout<<"Linked List is Empty..."<<endl;
  }
  else
   {
    int a,found=0;
    cout<<"Enter Id For Deletion:"<<endl;
    cin>>a;
    if(a == head -> ID)
    {
        patient *ptr=head;
        head = head ->next;
        cout<<"/n/n/t/t/t/t||Record Deleted Successfully.....||"<<endl;
        Sleep(1224);
        cin.ignore();
		        found++;
        delete ptr;
    }
    else
    {
        patient *pre = head;
        patient *ptr = head ->next;
        while(ptr != NULL)
        {
            if(a = ptr ->ID)
            {
                pre -> next = ptr -> next;
                cout<<"Record Deleted Successfully"<<endl;
                found++;
                delete ptr;
                break;
            }
            pre = ptr;
            ptr = ptr -> next;
        }

    }
    if(found == 0)
    {
        cout<<"\n Delete Id no."<<a<<"Not Found";
    }
   }
}

void update()
{
    cin.ignore();
	system("CLS");
	banner();
	if(head==NULL)
	{
		cout<<"\n\n\t\t\t\tLinked List is Empty...."<<endl;
	}
	else
	{
		int id, found=0;
		cout<<"\n\n\t\t\t\tEnter Patient ID to update: "<<endl;
		cin>>id;
		patient *ptr=head;
		while(ptr!=NULL){
			if(id==ptr->ID)
			{

		std::cout<<"\n\t\t\t\tEnter the first name : "<<endl;
		cin>>ptr->firstname;
		cout<<"\n\t\t\t\tEnter the last name : "<<endl;
		cin>>ptr->lastname;
		cout<<"\n\t\t\t\tEnter the age : "<<endl;
		cin>>ptr->age;
		cout<<"\n\t\t\t\tEnter gender (m/f) : "<<endl;
		cin>>ptr->gender;
		cout<<"\n\t\t\t\tEnter Blood group: "<<endl;
		cin>>ptr->blood[5];
		cout<<"\n\t\t\t\tRecord Updated Successfully:"<<endl;
		Sleep(1444);
		             found++;
			}
			ptr=ptr->next;
		}
		if(found==0)
		{
			cout<<"\n\n\t\t\t\tPatient not found. Invalid ID!"<<endl;
		}
	}
}

	void showall()

{


    cin.ignore();
	system("CLS");
	banner();
    if(head == NULL)
    {
        cout<<"Linked List is Empty.."<<endl;
    }
    else
    {
        patient *ptr = head;
        while(ptr != NULL)
        {
        	cout<<"\n"<<endl;
            cout<<"\n\t\t\t\tId:"<<ptr -> ID;
            cout<<"\n\t\t\t\tFirstname:"<<ptr -> firstname;
            cout<<"\n\t\t\t\tLastname:"<<ptr -> lastname;
            cout<<"\n\t\t\t\tAge:"<<ptr -> age;
            cout<<"\n\t\t\t\tBlood:"<<ptr -> blood;
            cout<<"\n\t\t\t\tGender:"<<ptr -> gender;
            ptr = ptr ->next;
        }
    }
}

};

//display: please enter to continue
void next()
{

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
void viewrecordn()
{system("CLS");
	string st2;

	ifstream inFile("hello.txt");
	for(int i=1;i<=50;i++){
		getline(inFile,st2);
			cout<<st2<<endl;}
			cin.ignore();


}


void nurse(linkedqueue * q)
{
	linkedqueue obj;
	p:
		system("CLS");
	banner();
	int choice;
	std::cout<<"\n\n\t\t\t\t||This page is for Nurse."<<endl;
	cout<<"\t\t\t\tPress 1 to create a new record."<<endl;
	cout<<"\t\t\t\tPress 2 to Search record."<<endl;
	cout<<"\t\t\t\tPress 3 to Delete records."<<endl;
	cout<<"\t\t\t\tPress 4 to view duty list."<<endl;
	cout<<"\t\t\t\tPress 5 to Update record."<<endl;
	cout<<"\t\t\t\tPress 6 to Show all records."<<endl;
	cout<<"\t\t\t\tPress 7 to exit."<<endl;
	cout<<"\n\n\n\t\t\t\tEnter Your Choice:"<<endl;
	cin>>choice;
			switch (choice)
			{
			case 1:
				obj.insert();
				break;
			case 2:
					obj.search();
					break;
			case 3:
						obj.Del();
						break;
			case 4:
							viewrecordn();
							break;
			case 5:
				obj.update();
				break;
				case 6:
					obj.showall();
					break;
					case 7:
				exit(0);
				break;
			default:
				cout<<"invalid choice....!!!";
				Sleep(1224);
			}
			getchar();
			goto p;
}

void doctor(){
	std::cout<<"\n\t\t\t\t||This place is for Doctor.||"<<endl;
	linkedqueue obj;
			p:
			system("cls");
			banner();
			int choice;
		std::cout<<"\n\n\t\t\t\t||This page is for Doctor."<<endl;
	cout<<"\t\t\t\tPress 1 to create a new record."<<endl;
	cout<<"\t\t\t\tPress 2 to Search record."<<endl;
	cout<<"\t\t\t\tPress 3 to Delete records."<<endl;
	cout<<"\t\t\t\tPress 4 to view duty list."<<endl;
	cout<<"\t\t\t\tPress 5 to Update record."<<endl;
	cout<<"\t\t\t\tPress 6 to Show all records."<<endl;
	cout<<"\t\t\t\tPress 7 to exit."<<endl;

			cout<<"\n\n\n\t\t\t\tYour Choice: ";
			cin>>choice;
			switch (choice)
			{
			case 1:
				obj.insert();
				break;
			case 2:
					obj.search();
					break;
			case 3:
						obj.Del();
						break;
			case 4:
							viewrecordn();
							break;
			case 5:
				obj.update();
				break;
				case 6:
					obj.showall();
					break;
					case 7:
				exit(0);
				break;
			default:
				cout<<"invalid choice....!!!";
			}
			getchar();
			goto p;
}




void signup()
{
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

		if(a==1)
		{ // Doctor
			doctor();
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


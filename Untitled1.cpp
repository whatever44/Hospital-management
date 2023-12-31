#include<iostream>
#include<fstream>
int main
{
	string st2;
		ifstream inFile;
	
	ifstream infile("hello.txt");
	for(int i=1;i<=8;i++){
		getline(infile,st2);
			cout<<st2<<endl;}
}

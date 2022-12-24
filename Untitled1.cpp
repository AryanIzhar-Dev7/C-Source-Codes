#include <iostream>
#include<string>
#include <fstream>
using namespace std;

struct student {
	string id, name,email,dept,number;
	
};
int main(){
	ifstream myfile("stud.txt");
	string str;
	while(getline(myfile, str)){
	
	cout<<str;
	}
getline(myfile, str[1]);
cout << str[0] << endl;
cout << str[1];
string a ;
	while ( a != 0){
	
	getline(stud,a).
	cout <<a;

}




	ifstream in(abdullah)
	in>>variable;
	string str;
	getline(in,str);
	cout<<str;
	ofstream stud("Abdullah.txt", ios::app);
	{
	
	student s1;
	char reply ='a';
	while (reply!='n'){
		
	cout << " Enter your name ";
	getline(cin,s1.name);
	cout << " Enter your id ";
	getline(cin,s1.id);
	cout << " Enter your email ";
	getline(cin,s1.email);
	cout << " Enter your department ";
	getline(cin,s1.dept);
	cout << " Enter your number ";
	getline(cin,s1.number);
	
	stud<<s1.name<<"/t"<<s1.id<<"\t"<<s1.email<<"\t"<<s1.dept<<"\t"<<s1.number;




	
	cout << " do you want to enter new record?  (y/n) ";
	cin>> reply;
	}
	
	myfile<<  "your name is   "<<s1.name<<endl;
	stud.close();
}
	system("color 0A");
	return 0;

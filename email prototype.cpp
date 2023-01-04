#include<iostream>
#include<string>
using namespace std;
int main(){
string email="ar@gmail.com", password="bankai", email1,password1;
char input;
do {
	cout<<"Enter the Your Email  : ";
getline(cin,email1);

if (email1==email){
	
	cout<<"Enter Your Password : ";
	getline(cin,password1);
	if (password1==password){
		cout<<"Wel Come : "<<endl;
	}
}
else {
	cout<<"Email is not Found "<<endl;
}

cout<<"Do You want to Enter Email Again y/n"<<endl;
cin>>input;
}
while (input!='n');
return 0;
}


#include<iostream>
using namespace std;
int main(){
string date;
cout<<"Enter the date :";
getline(cin,date);

cout<<date.substr(0,2)<<endl;
cout<<date.substr(3,2)<<endl;
cout<<date.substr(6,4)<<endl;


return 0;
}


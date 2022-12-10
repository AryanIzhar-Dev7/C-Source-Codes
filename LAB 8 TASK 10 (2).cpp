#include<iostream>
#include<string>
using namespace std;
int main () {
	int size=0;
	cout<<"Enter the number of students..";
	cin>>size;
	string name[size]={};
	int english[size]={}, ict[size]={}, math[size]={}, programing[size]={},
	obtained[size]={};
	
	double percentage[size]={};
	char grade[size]={};
	for(int index=0; index<size; index++){
		cout<<"Enter the name of the student  "<<(index+1)<<".. ";
		cin>>name[index];	} 
	for(int index=0; index<size;index++){
		cout<<"Enter the english marks of student  "<<(index+1)<<".. ";
		cin>>english[index];
	}
	for(int index=0; index<size;index++){
		cout<<"Enter the math marks of student  "<<(index+1)<<".. ";
		cin>>math[index];
	}
	for(int index=0; index<size;index++){
		cout<<"Enter the programing mark of student  "<<(index+1)<<".. ";
		cin>>programing[index];
	}
	for(int index=0; index<size;index++){
		cout<<"Enter the ict marks of student  "<<(index+1)<<".. ";
		cin>>ict[index];
	}
 for(int index=0; index<size; index++){
 	obtained[index]= english[index]+math[index]+ict[index]+programing[index];
 }
for(int index=0; index<size; index++ ){
	percentage[index]=(obtained[index]*100)/400;
}
for(int index=0; index<size; index++){
	if (percentage[index]>= 80 && percentage[index] <=100){
		grade[index]='A';
	}
	else if (percentage[index]>= 70 && percentage[index] <=79){
		grade[index]='B';
	}
	else if (percentage[index]>= 60 && percentage[index] <=69){
		grade[index]='C';
	}
else if (percentage[index]< 60 ){
		grade[index]='F';
	} }
cout<<"================================================================================================"<<endl;
cout<<" Name\tEnglish\tMAth\tICt\tProgramming\tObtained\tPercentage\tGrade"<<endl;
cout<<"================================================================================================"<<endl;
for(int index=0; index<size; index++){
	cout<< name[index]<<"\t  "<<english[index]<<"\t  "<<math[index]<<"\t  "<<ict[index]<<"\t  "<<programing[index]<<"\t\t"<<obtained[index]<<"\t\t"<<percentage[index]<<"\t\t"<<grade[index];
	cout<<endl; }
return 0;}

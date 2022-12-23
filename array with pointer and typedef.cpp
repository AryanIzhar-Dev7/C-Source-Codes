#include<iostream>
using namespace std;

typedef int * aryan;
int main(){
int a[10];

for(int i=0; i<10; i++){
	cout<<"Enter the value of the array  : ";
	cin>>a[i];
	
}
 aryan p=a;//passing the address of the array 'a' to pointer 'p';
 
 for (int i=0; i<10; i++){
 	cout<<p[i]<<" \t";
 	
 }


return 0;
}


#include<iostream>
using namespace std;
int main () {
		int size=0,search=0;
	cout<<"Enter the size  of the Array  ";
	cin>>size;
	
	int array[size];
	
	for(int index=0; index<size; index++){
		cout<<"Enter the value Number "<<(index+1)<< " ";
		cin>>array[index];
	}

cout<<"Enter the value which you want to search .. ";
cin>>search;

for(int index=0; index<size; index++){
	
	if(search == array[index]){
		cout<<"The Value "<< search << " is Present on the Index "<<(index);
	}
}

}

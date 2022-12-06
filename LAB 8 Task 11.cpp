#include<iostream>
using namespace std;
int main () {
	int size=0,min=0;
	cout<<"Enter the size  of the Array  ";
	cin>>size;
	
	int array[size];
	
	for(int index=0; index<size; index++){
		cout<<"Enter the value Number "<<(index+1)<< " ";
		cin>>array[index];
	}

	min =array[0];
	
	for(int i=0; i<size; i++){
		if(array[i]<min){
			min=array[i];
		}
	}
	cout<<"The Smallest value is .. "<< min;
return 0;
}




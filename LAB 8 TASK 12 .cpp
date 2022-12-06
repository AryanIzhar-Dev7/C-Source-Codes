#include<iostream>
using namespace std;
int main () {
	int size=0,max=0;
	cout<<"Enter the size  of the Array  ";
	cin>>size;
	
	int array[size];
	
	for(int index=0; index<size; index++){
		cout<<"Enter the value Number "<<(index+1)<< " ";
		cin>>array[index];
	}
	
	max =array[0];
	
	for(int i=0; i<size; i++){
		if(array[i]>max){
			max=array[i];
		}
	}
cout<<"The Largest value is .. "<< max;
return 0;
}




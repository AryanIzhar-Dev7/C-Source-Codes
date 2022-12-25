#include<iostream>
using namespace std;
int main(){
	int array[6]={12,4,3,0,5,1};
cout<<"		 Unsorted array"<<endl<<endl;

for(int i=0; i<6; i++){
	cout<<array[i]<<" \t";
}

cout<<endl<<endl;

int temp;
for (int x=0; x<6; x++){
	for(int i=0; i<6; i++){
		if (array[i]>array[i+1]){
			temp=array[i];
			array[i]=array[i+1];
			array[i+1]=temp;
		}
	}
}
cout<<" 		Sorted Array"<<endl<<endl;
for(int i=0; i<6; i++){
	cout<<array[i]<<" \t";
}


return 0;
}


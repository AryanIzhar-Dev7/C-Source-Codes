#include<iostream>
using namespace std;
int main(){
int  array [3][3];
for(int i=0; i<3; i++){
	for(int x=0; x<3; x++){
		cout<<"Enter the values : ";
		cin>>array[i][x];
	}
}

for(int i=0; i<3; i++ ){
	for(int x=0; x<3; x++){
		cout<<array[i][x]<<"\t";
	}
cout<<endl;
}

int  array2 [3][3];
for(int i=0; i<3; i++){
	for(int x=0; x<3; x++){
		cout<<"Enter the values : ";
		cin>>array2[i][x];
	}
}

for(int i=0; i<3; i++ ){
	for(int x=0; x<3; x++){
		cout<<array2[i][x]<<"\t";
	}
cout<<endl;
}
int array3[3][3];
for(int i=0; i<3; i++){
	for(int x=0; x<3; x++){
		array3[i][x]=array[i][x]+array[i][x];
	}
}


for(int i=0; i<3; i++ ){
	for(int x=0; x<3; x++){
		cout<<array3[i][x]<<"\t";
	}
cout<<endl;
}




return 0;
}


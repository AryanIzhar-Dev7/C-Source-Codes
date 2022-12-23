//this program is just for the understanding of passing array indexed in function;
#include<iostream>
using namespace std;
int arg(int a);
int main(){
	int array[4]={32,54,66,12};
	
	cout<<arg(array[2]);



return 0;
}
int arg(int a){
	return a;
}

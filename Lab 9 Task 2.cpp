#include<iostream>
#include<iostream>
using namespace std;
struct product {
	string name;
	double model_number;
	double price;
};

void display(struct product detail[], int size);
int main(){
int size=10;
product detail[size];

for(int index=0; index<size; index++){
	cout<<"Enter the name of the product.. ";
	getline(cin,detail[index].name);
	
	cout<<"Enter the Model Number of the Product.. ";
	cin>> detail[index].model_number;
	
	cout<<"Enter the Price of the Product .. ";
	cin>> detail[index].price;
	cin.ignore();
}

display(detail,size);

return 0;
}

void display(struct product detail[], int size){
	
	for(int i=0; i<size; i++){
		cout<<"The Name of the product is .. "<<detail[i].name<<endl;
		
		cout<<"The Model number is .. "<<detail[i].model_number<<endl;
	
		cout<<"The Price of the Product is .. "<< detail[i].price<<endl;
	}
}

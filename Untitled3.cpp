#include<iostream>
using namespace std;

struct project{
	string name;
	double price;
	double tax;
	double gst;
};
project calc( project p);
void display(project p);

int main(){

project p;

for(int i=0; i<1; i++){
	cout<<"Enter the name of the product.. ";
	getline (cin,p.name);
	cout<<"enter the price of the product.. ";
	cin>>p.price;
}
//double x=detail.price;
p=calc(p);
display(p);
return 0;
}
project calc(project p){
	
	p.gst=p.price*.17;
	p.tax=p.price*0.1;
	return p;
}
void display( project p){
	cout<< "Name of the product is..  "<<p.name<<endl;
	cout<<"Price of the product is .. "<<p.price<<endl;
	cout<<"TAX of the product is .. "<<p.tax<<endl;
	cout<<"GST of the product is .. "<<p.gst<<endl;
}

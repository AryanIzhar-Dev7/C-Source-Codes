#include<iostream>
using namespace std;
int main(){

string input;
cout<<"Enter the word or ABC .. ";
getline(cin,input);

for(int i=0; i<input.length(); i++ ){
	if ((input[i]>='A' && input[i]<='Z') ||(input[i]>='a' && input[i]<='z') ){
		input[i]=input[i]+1;
	}
}

cout<<input;
return 0;
}


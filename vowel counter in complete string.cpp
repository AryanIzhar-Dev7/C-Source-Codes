#include<iostream>
using namespace std;
int main(){
string word;
cout<<"Enter the word.. ";
	getline(cin,word);
	

	int count=0;
	for(int i=0;i< word.length(); i++){
		
		if (word[i]=='a'||word[i]=='e'|| word[i]=='i'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
		count++;	
		}
	}
	
	cout<<"There are "<< count<<" Vowels in the word .. ";


return 0;
}


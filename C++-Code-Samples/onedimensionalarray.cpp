#include <iostream>

using namespace std;

int main(){
	
	int ages[5];
	
	for(int i=0; i < 5;i++){
		cout<<"Please enter age "<<(i+1)<<" : ";
		cin>>ages[i];
	}
	
	cout<<"Age number 5 = "<<ages[4]<<endl;
	
	return 0;
}

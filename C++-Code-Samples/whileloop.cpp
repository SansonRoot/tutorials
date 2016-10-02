#include <iostream>

using namespace std;

int main(){

	bool run = true;
	int a = 0;
	
	while(run){
		cout<<"a = "<<a<<endl;
		if(a > 100){
			break;
		}
		
		a += 2;	   
	}	
	
	cout<<"a = "<<a<<endl;
	/*
	while(a <= 100){
		cout<<"a = "<<a<<endl;
		a += 2;
	}
	
	cout<<"final a = "<<a<<endl;
	*/		
	return 0;
}

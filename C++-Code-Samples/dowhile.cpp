#include <iostream>

using namespace std;

int main(){
	
	int accountPin;
	string accountName;
	bool validPin;
	
	
	cout<<"Please enter your account name : ";
	cin>>accountName;
	
	do{
		cout<<"Please enter a FOUR DIGIT pin number : ";
		cin>>accountPin;
	
		if(accountPin < 1000 || accountPin > 9999){
			cout<<"\nInvalid Pin !"<<endl;
			validPin = false;
		}else{
			if(accountName == "Sanson"){
				
				cout<<"\nHello Sanson, This is your account and i will give you GHS 5000.00"<<endl;
			}else{
				cout<<"\nThere must be a mistake, this isnt your account !"<<endl;
			}
			validPin = true;
		}
	}while(!validPin);
	
	
	
	
	
	
	
	
	/*
	bool run = true;
	
	do{
		cout<<"Hello there i have executed without\nchecking"
	        <<"for the control expression";
        run = false;
	}while(run);
	
	*/
	
		
	return 0;
}

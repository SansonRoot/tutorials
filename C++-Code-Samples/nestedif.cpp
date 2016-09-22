#include <iostream>

using namespace std;

int main(){
	
	
	int accountPin;
	string accountName;
	
	cout<<"Please enter your account name : ";
	cin>>accountName;
	
	cout<<"Please enter a FOUR DIGIT pin number : ";
	cin>>accountPin;
	
	if(accountPin < 1000 || accountPin > 9999){
		cout<<"\nPlease enter a FOUR DIGIT PIN NUMBER !"<<endl;
	}else{
		if(accountName == "Sanson"){
			
			cout<<"\nHello Sanson, This is your account and i will give you GHS 5000.00"<<endl;
		}else{
			cout<<"\nThere must be a mistake, this isnt your account !"<<endl;
		}
	}
	
	
	return 0;
}

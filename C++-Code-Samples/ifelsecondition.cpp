#include <iostream>

using namespace std;

int main(){
	
	int age;
	string name;
	
	cout<<"Please enter your name : ";
	cin>>name;
	
	cout<<"Please enter your right age : ";
	cin>>age;
	
	if(age <= 0){
		
		cout<<"\nPlease enter a valid age !"<<endl;
		
	} else if( age < 18){
		
		cout<<"\nPlease Mr. "<<name<<" , you arent of age "<<endl;
		
	} else if( age >= 18){
		cout<<"\nWelcome Mr. "<<name<<" , what may we serve you...?"<<endl;
	}
	
	return 0;
}

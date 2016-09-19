#include <iostream>

using namespace std;

int main(){
	
	/* 
		Variables 
		
		data types
		========================
		
		int -----to hold integer values
		long --- longer integers
		long long ----
		float ---- for floating point decimals
		double --- for floating point decimals
		char --- for a single character 'A'
		string --- for an array of characters or words hello where
		bool --- for true or false
			
	*/
	
	int age(22) ; //int age = 22;
	string name;
	float money = 50.0;
	char grade = 'A';
	bool answer = true;
	
	name="Sanson";
	
	cout<<"My name is "<<name<<" , I am "<<age<<" years old, I have "<<money<<" and my grade is "<<grade<<endl;
	cout<<"Is that true ? "<<answer<<endl;
	
	
	return 0;
}

#include <iostream>

using namespace std;

int main(){
	
	bool answer1 = false;
	bool answer2 = true;
	bool answer3 = (32==(32/1.0));
	
	cout<< (answer1 || answer2)<<endl;
	cout<< (answer2 && answer3)<<endl;
	cout<< (answer2 || (answer3 && answer1))<<endl;
	cout<< (!answer1 && answer2 && !answer3)<<endl;
	
	
	return 0;
}

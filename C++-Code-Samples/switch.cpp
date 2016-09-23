#include <iostream>

using namespace std;

int main(){
	
	char grade;
	
	cout<<"Please enter your grade : ";
	cin>>grade;
	
	switch(grade){
		case 'A':
			cout<<"Excellent your are marvelous !"<<endl;
			break;
		case 'B':
			cout<<"Very good but can offer more "<<endl;
			break;
		case 'C':
			cout<<"Good you can do better "<<endl;
			break;
		case 'D':
			cout<<"Credit, you should sit up"<<endl;
			break;
		case 'E':
			cout<<"Passed, you narrowly made it. "<<endl;
			break;
		case 'F':
			cout<<"You really need to get out of your comfort zone\n and do real work !"<<endl;
			break;
		default:
			cout<<"You have entered an invalid grade "<<endl;
	}
	
	return 0;
}

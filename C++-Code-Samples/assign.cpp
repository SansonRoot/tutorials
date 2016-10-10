#include <iostream>
#include <cmath>

using namespace std;

int main(){
	/*
	NOTE : dont include the cout 
	and cin in your final submission
	since the question says they are 
	given and you dont have to collect
	them from the user
	
	
	
	Question 1
	==========
	int x,y;
	cout<<"Enter divident : ";
	cin>>x;
	cout<<"Enter divisor : ";
	cin>>y;
	
	cout<<"Quotient of x/y = "<<x/y<<"\n"
	    <<"Remainder of x/y = "<<x%y<<endl;
	 */ 
	
	//Question 2
	
	int length,width;
	cout<<"Enter length of rectangle : ";
	cin>>length;
	cout<<"Enter the width : ";
	cin>>width;
	
	int perimeter = 2 * (length + width);
	
	cout<<"Perimeter of Rectangle = "<<perimeter<<endl;
	

	       
	return 0;
}

#include <iostream>

using namespace std;

int main(){
	/*
	
	int a0,a1,a2,b0,b1,b2,aaron_counter(0),sanson_counter(0);
	
	cout<<"Enter three spaced integers for the first line : ";
	cin>>a0>>a1>>a2;
	
	cout<<"Enter three spaced integers for the second line : ";
	cin>>b0>>b1>>b2;
	
	if(a0 < b0){
		sanson_counter ++;
	}else if(a0 > b0){
		aaron_counter ++;
	}
	
	if(a1 < b1){
		sanson_counter ++;
	}else if(a1 > b1){
		aaron_counter ++;
	}
	
	if(a2 < b2){
		sanson_counter ++;
	}else if(a2 > b2){
		aaron_counter ++;
	}
	
	
	cout<<aaron_counter<<" "<<sanson_counter<<endl;
	*/
	
	
	int x1,v1,x2,v2;
	cout<<"Please enter the start location and rate for the kangaroos in\n"  
 		<<"the form x1 v1 x2 v2 ";
 	cin>>x1>>v1>>x2>>v2;
 	
 	/*
 	if x1 > x2 then print no
 	if (x2-x1) % (v2-v1) print no
 	*/
	
	if(x1 >= x2 || v2 >= v1 || (x2-x1) % (v2-v1)){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}
	
	
	return 0;
}

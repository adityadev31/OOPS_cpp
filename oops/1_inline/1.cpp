#include<iostream>
using namespace std;

class Square{
	private: 
		int x;
		
	public: 
		Square(int);                  //constructor
		int sq();                     // function
};

Square::Square(int a){
	x=a;
}
inline Square::sq(){
	return(x*x);
}



int main(){
	int a;
	cout<<"Enter any no. for square: \t";
	cin>>a;
	Square ob(a);                              // ob = object
	cout<<"result = "<<ob.sq();               // calling sq()
	return 0;
}

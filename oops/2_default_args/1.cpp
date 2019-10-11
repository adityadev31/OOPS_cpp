#include<iostream>
using namespace std;

class Calculator{
	public:
		int sum(int,int,int,int);
		int sub(int,int,int,int);
		int mul(int,int,int,int);
		int div(int,int,int,int);
		
};
Calculator::sum(int a=10,int b=0,int c=0,int d=0){
	return(a+b+c+d);
}
Calculator::sub(int a=10, int b=0, int c=0, int d=0){
	return(a-b-c-d);
}
Calculator::mul(int a=10,int b=0,int c=0,int d=0){
	return(a*b*c*d);
}
Calculator::div(int a=10,int b=0,int c=0,int d=0){
	return(a/b/c/d);
}


int main(){
	Calculator ob;
	cout<<"\nresult = "<<ob.sum(4,3,2,1);
	cout<<"\nresult = "<<ob.sub(4,3,2,1);
	cout<<"\nresult = "<<ob.mul(4,3,2,1);
	cout<<"\nresult = "<<ob.div(4,3,2,1);
	
	
	cout<<"\n\nresult = "<<ob.sum();
	cout<<"\nresult = "<<ob.sub();
	cout<<"\nresult = "<<ob.mul();
//	cout<<"\nresult = "<<ob.div();
	
	return 0;
}

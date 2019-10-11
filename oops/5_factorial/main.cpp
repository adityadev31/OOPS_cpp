#include<iostream>
using namespace std;

class Factorial{
	private: int x;
	public:
		int fact(int);
};

int Factorial::fact(int a){
	if(a == 0){
		return 1;
	}
	else if(a > 0){
		return(a*fact(a-1));
	}
}


int main(){
	int num;
	cout<<"Enter a number for factorial \t";
	cin>>num;
	Factorial ob;
	cout<<num<<"! = "<<ob.fact(num);
	return 0;
}

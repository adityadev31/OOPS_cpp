#include<iostream>
using namespace std;

inline float sum(float x, float y){
	return(x+y);
}

inline float sub(float x, float y){
	return(x-y);
}

inline float mul(float x, float y){
	return(x*y);
}

inline float div(float x, float y){
	return(x/y);
}

int main(){
	int a,b,opt;
	cout<<"Enter 1=sum\t2=sub\t3=mul\t4=div\t";
	cin>>opt;
	cout<<"\nEnter a\t";
	cin>>a;
	cout<<"Enter b\t";
	cin>>b;
	switch(opt){
		case 1: {
			cout<<"result = "<<sum(a,b);
			break;
		}
		case 2: {
			cout<<"result = "<<sub(a,b);
			break;
		}
		case 3: {
			cout<<"result = "<<mul(a,b);
			break;
		}
		case 4: {
			cout<<"result = "<<div(a,b);
			break;
		}
		return 0;
	}
}

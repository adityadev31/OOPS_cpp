#include<iostream>
using namespace std;

class B;
class A{
	private:
		int x;
	public:
		A(int); // constructor
		void showdata();
		friend void swaper(A &, B &);
};

A::A(int m){
	x = m;
}

void A::showdata(){
	cout<<" x = "<<x;
}


class B{
	private:
		int y;
	public:
		B(int); // constructor
		void showdata();
		friend void swaper(A &, B &);
};


B::B(int n){
	y = n;
}


void B::showdata(){
	cout<<" y = "<<y;
}

void swaper(A &a, B &b){
	int temp = a.x;
	a.x = b.y;
	b.y = temp;
}

int main(){
	A ob1(2), ob3(5);
	B ob2(7), ob4(9);
	ob1.showdata();
	ob2.showdata();
	swaper(ob1,ob2);
	cout<<endl<<"Swapped values \t";
	ob1.showdata();
	ob2.showdata();
	
	cout<<endl<<endl;
	
	ob3.showdata();
	ob4.showdata();
	swaper(ob3,ob4);
	cout<<endl<<"Swapped values \t";
	ob3.showdata();
	ob4.showdata();
	return 0;
}

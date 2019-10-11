#include<iostream>
using namespace std;
class Number{
	private:
		int x,y;
	public:
		void getdata();
		friend void sum(Number);   // sum = friend function   Number = class name
};

void Number::getdata(){
	cout<<"enter x = ";
	cin>>x;
	cout<<"enter y = ";
	cin>>y;
}

void sum(Number n1){             // n1 = object to fetch private members of the class
	cout<<"Sum of "<<n1.x<<" and "<<n1.y<<" = "<<n1.x + n1.y<<endl;
}

int main(){
	Number ob;
	ob.getdata();
	sum(ob);  // friend function must be called using class object in main
	return 0;
}


#include<iostream>
using namespace std;


class Minutes;
/*
	we have to declare the second class before first class coz 
	friend function will be used in the first(Hours) one and in that we will have to give second class
	as friend void finalTime(Hours , Minutes)  .... otherwise by seeing Minutes it will get confused

*/

class Hours{
	private:
		int hrs;
	public:
		void getdata();
		void showdata();
		friend void finalTime(Hours , Minutes);
};

void Hours::getdata(){
	cout<<"Enter hours \t";
	cin>>hrs;
}

void Hours::showdata(){
	cout<<hrs;
}


class Minutes{
	private:
		int min;
	public:
		void getdata();
		void showdata();
		friend void finalTime(Hours , Minutes);
};


void Minutes::getdata(){
	cout<<"Enter minutes \t";
	cin>>min;
}

void Minutes::showdata(){
	cout<<min;
}


void finalTime(Hours h , Minutes m){
	h.hrs = h.hrs + m.min/60;
	m.min = m.min%60;
	cout<<"Hours = "<<h.hrs<<"\t Min = "<<m.min<<endl;
}

int main(){
	Hours ob1;
	Minutes ob2;
	ob1.getdata();
	ob2.getdata();
	finalTime(ob1, ob2);
	
	// but actual values of hrs and min have not changed
	cout<<endl<<"Actually no change   hrs = ";
	ob1.showdata();
	cout<<"\t min = ";
	ob2.showdata();
	return 0;
}

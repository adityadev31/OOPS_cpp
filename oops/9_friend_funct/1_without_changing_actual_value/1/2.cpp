#include<iostream>
using namespace std;
class Time{
	private:
		int hour,min;
	public:
		void getdata();
		friend void finalTime(Time);
};

void Time::getdata(){
	cout<<"Enter Hours = ";
	cin>>hour;
	cout<<"Enter Minutes = ";
	cin>>min;
}

void finalTime(Time T){
	cout<<"Entered hours = "<<T.hour<<endl;
	cout<<"Entered minutes = "<<T.min<<endl;
	int finalHours = (T.hour + (T.min/60));
	int finalMin = T.min%60;
	cout<<"Final Time = "<<finalHours<<" hours \t "<<finalMin<<" min"<<endl;
}

int main(){
	Time ob;
	ob.getdata();
	finalTime(ob);
	return 0;
}

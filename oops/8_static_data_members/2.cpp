#include<iostream>
using namespace std;

class Shopkeeping{
	private:
		static int sno;
		int *array, size;
	public: 
		void incSerial(){ ++sno; }
		
		void add_items(int a){
			size = a;
			array = new int[size];
			for(int i=0; i<size; i++){
				cout<<"Enter item-"<<i+1<<"\t";
				cin>>array[i];
				incSerial();
			}
		}
		
		void show_details(){
			int i=0;
			while(i != size){ cout<<sno<<"\t"<<array[i]<<endl; i++; }
		}
};

int Shopkeeping::sno;

int main(){
	Shopkeeping ob1,ob2,ob3;
	ob1.add_items(5);
	ob2.add_items(3);
	ob1.show_details();
	ob2.show_details();
	return 0;
}

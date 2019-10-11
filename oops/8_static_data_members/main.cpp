#include<iostream>
using namespace std;

class mango{
	private: static int num;     //RULE-1 *** NOTE *** static always stats with = 0
	public:					     //RULE-2  function using static variable must be declared and defined inside te class
		void count(){
			cout<<++num<<endl;
		}
};

int mango::num;       //RULE-3 static memeber must be declared after class as   (int class :: static_member)

int main(){
	mango ob1,ob2;
	ob1.count();
	ob2.count();
	return 0;
}

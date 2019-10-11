#include<iostream>
using namespace std;

int a = 10;
int b = 50;

int mul(int x, int y){            // *** NOTE *** since mul is called last hence it ust be declared first
	return(x*y);
}


int sub(int x, int y){            //   then sub() is called hence it must be declared second
	return((x-y) * mul(x,y));
}


int sum(int x, int y){
	return((x+y) - sub(x,y));
}

int main(){
	cout<<sum(a,b);
	return 0;
}

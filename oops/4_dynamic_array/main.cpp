#include<iostream>
using namespace std;

int main(){
	int *a, i, size;                  // pointer for new array
	cout<<"We are making dynamic array"<<endl;
	cout<<"Enter the size of the array\t";
	cin>>size;
	a = new int[size];                   // initializing new array of desired size
	for(i=0;i<size;i++){
		cout<<"enter a["<<i<<"]\t";
		cin>>a[i];
	}
	
	cout<<"Showing the inputs"<<endl;
	
	for(i=0; i<size; i++){
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
	
	delete[] a;              // deleting the array   freeing the pointer
	
	return 0;
}

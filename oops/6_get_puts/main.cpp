#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
	char name[20], branch[20];
	cout<<"Enter your name : \t";
	gets(name);
	cout<<"Enter your branch : \t";
	gets(branch);
	cout<<"IMPUTS\n\n";
	cout<<"Name = ";
	puts(name);
	cout<<"Branch = ";
	puts(branch);
	return 0;
}

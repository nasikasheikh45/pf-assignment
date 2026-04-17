#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter atwo number:";
	cin>>a>>b;
	if(a>b)
	cout<<"larger:"<<a<<",smaller:"<<b;
	else if(b>a)
	cout<<"lager:"<<b<<",smaller:"<<a;
	else 
	cout<<"both numbers are equal";
	return 0;
}

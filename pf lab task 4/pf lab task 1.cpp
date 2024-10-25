#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a number";
	cin>>num;
	if(num>0){
	if(num>100){
	cout<<"the number is larger";
	}
	else{
	cout<<"the number is smaller";
	}
	
	}
	if(num<0){
	if(num<100){
	cout<<"the number is very small";
	}
	else{
	cout<<"the number is small and negative";
	}
	}
	else{
	cout<<"the number is zero";
	}
	return 0;
}


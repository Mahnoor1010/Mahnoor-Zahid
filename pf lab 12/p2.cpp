#include<iostream>
using namespace std;
int main()
{
int num1=5,num2=10;
int* ptr1=&num1;
int* ptr2=&num2;
cout<<"Before swapping"<<endl;
cout<<"num1="<<num1<<" num2="<<num2<<endl;
int temp=num1; 
*ptr1=*ptr2;   
*ptr2=temp;    
cout<<"After swapping"<<endl;
cout<<"num1="<<num1<<" num2="<<num2<<endl;
return 0;
}

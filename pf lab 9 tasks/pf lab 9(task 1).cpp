#include<iostream>
using namespace std;
int main()
{
int a[3];
cout<<"enter the number";
for(int i=0;i<3;i++)
cin>>a[i];
cout<<"in forward order"<<" ";
for(int i=0;i<3;i++)
cout<<a[i];
cout<<"\n in reverse order"<<" ";
for(int i=2;i>=0;i--)
cout<<a[i];

}

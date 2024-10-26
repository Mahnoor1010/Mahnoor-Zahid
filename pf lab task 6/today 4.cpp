#include<iostream>
using namespace std;
int main()
{
int choice=0;
while(choice!=3)
{
cout<<"\n menu: \n";
cout<<"1. print Hello \n";
cout<<"2. print World \n";
cout<<"3. Exit \n";
cout<<"enter your choice:";
cin>>choice;
if(choice==1)
{
cout<<"Hello \n";
}
else if(choice==2)
{
cout<<"World \n";
}
else if(choice==3)
{
cout<<"Exiting program...\n";
}
else
{
cout<<"Invalid choice. please try again \n";
}
return 0;
}
}

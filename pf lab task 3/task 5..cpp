#include<iostream>
using namespace std;
int main()
{
int marks1,marks2,marks3;
int average;
char grade;
cout<<"enter marks";
cin>>marks1>>marks2>>marks3;
average=(marks1+marks2+marks3)/3;
if(average>=90)
{
cout<<"\n the grade is A";
}
else if(average>=80)
{
cout<<"\n the grade is B";
}
else if(average>=70)
{
cout<<"\n the grade is C";
}
else if(average>=60)
{
cout<<"\n the grade is D";
}
else
{
cout<<"\n the grade is F";
}
return 0;
}

#include<iostream>
using namespace std;
int main()
{
int age;
cout<<"enter your age";
cin>>age;
if(age<0){
cout<<"invalid age";
}
if(age>0&&age<=12){
cout<<"child";
}
if(age>13&&age<=19){
if(age=13){
cout<<"just a teen";
}
cout<<"teenager";
}
if(age>20&&age<60){
cout<<"adult";
}
if(age>60){
cout<<"senior citizen";
}
return 0;
}


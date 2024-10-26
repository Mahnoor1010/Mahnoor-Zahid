#include<iostream>
using namespace std;
int main()
{
int N;
int sum = 0;
cout<<"enter a positive integer N:";
cin>>N;
if(N<1)
{
cout<<"enter a positive integer greater than 0."<<endl;
}
for(int i=1;i<=N;i++)
{
sum+=i*i;
}
cout<<"The sum of squares of the first " << N << " natural number is:" << sum << endl;
return 0;
}

#include <iostream>
using namespace std;
int main() {
    int i, number;
    cout<<"Enter a number:"<<endl;
    cin>>number;
    cout<<"Multiplication table for a number you entered"<<endl;
    for(i=1;i<=10;i++)
    {
    cout<<number<<"*"<<i<<"="<<i*number<<endl;
    }
    return 0;
}


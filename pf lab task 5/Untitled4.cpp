#include <iostream>
using namespace std;
int main() {
    int number, sum=0;
    int i = 1;
    cout<<"Enter a positive integer:";
    cin>>number;
    while(i<=number) {
        if (i%2!=0) {
            sum+=i;
        }
        i++;
    }
    cout<<"Sum of odd numbers between 1 and "<<number<<": "<<sum<<endl;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int number, sum=0;
    cout<<"Enter numbers (negative to stop): "<<endl;
    while(number>=0) {
        cin>>number;
        if(number>=0){
        sum+=number;
        }

    }
cout<<"sum of non-negative numbers: " <<sum<<endl;
    return 0;
}

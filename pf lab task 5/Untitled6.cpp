#include <iostream>
using namespace std;
int main() {
    double Balance;
    double withdraw;
    cout<<"Enter initial balance: ";
    cin>>Balance;
    while (Balance>0) {
        cout<<"Enter withdraw amount (0 to exit):";
    cin >> withdraw;
        if(withdraw>Balance){
        cout<<"insufficient balance:";
        cout<<endl;
    }
    if(withdraw==0){
     cout<<"thank you for using our ATM. Goodbye!";
     break;
    }
    Balance-=withdraw;
    cout<<"withdraw Successful "<<endl;
    cout<<"remaining balance: "<<Balance<<endl;
    }
    return 0;
}

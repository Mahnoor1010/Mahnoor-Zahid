#include<iostream>
using namespace std;
int main(){
char op;
double amount, finalamount;
cout<< "choose an operation (D - Deposit, W - Withdraw, T - Transfer):";
cin>> op;
cout<< "enter the amount:";
cin>> amount;
switch (op){
case'd':
finalamount = amount - (0.5/100 * amount); // 0.5% charges
cout<< "Deposit successful. Final amount after charges: "<< finalamount << endl;
break;
case 'w':
finalamount = amount - (1.5/100 * amount); // 1.5% charges
cout<< "Withdrawal successful. Final amount after charges: "<< finalamount << endl;
break;
case't':
finalamount = amount -(2.5/100 * amount); // 2.5% charges
cout<< "trensfer successful. final amount after charges: "<< finalamount << endl;
break;
default:
cout<< "invalaid op."<<endl;
}
return 0; 


}



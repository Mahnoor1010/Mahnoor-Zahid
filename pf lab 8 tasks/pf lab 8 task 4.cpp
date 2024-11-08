#include <iostream>
using namespace std;
int main() 
{
int number,fac=1;
cout << "Enter a positive integer: ";
cin >> number;
 if (number < 0) 
{
cout << "there is no factorial for negative numbers!" << endl;
}

for (int i = 1; i <= number; i++) 
{
for (int j = 1; j <= 1; j++) {
fac *= i;
}
}
cout << "Factorial of " << number << " is " << fac << endl;
return 0;
}

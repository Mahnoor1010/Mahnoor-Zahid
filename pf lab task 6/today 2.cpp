#include <iostream>
using namespace std;
int main() {
const string correctPassword = "wolf"; 
string inputPassword;
int attempts = 0;
do {
cout<<"Enter password:";
cin>>inputPassword;
if (inputPassword == correctPassword) {
cout << "Access granted.\n";
break;
} else {
cout<<"Incorrect password.\n";
attempts++;
}
} while (attempts < 3);
if (attempts == 3) {
cout<<"Too many attempts. Access denied.\n";
}
return 0;
}

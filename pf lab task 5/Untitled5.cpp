#include <iostream>
using namespace std;
int main() {
    const int days_in_week=7;
    double temperature[days_in_week];
    double sum=0.0;
    double Average;
    for(int i=0;i<days_in_week;i++) {
    cout<<"Enter temperature for day " <<i+1<<":";
    cin>>temperature[i];
        sum+=temperature[i];
    }
    Average=sum/days_in_week;
    cout<<"\nTemperatures for the week:"<<endl;
    for(int i=0;i<days_in_week;i++) 
    {
    cout<<"Day "<<i+1<<": "<<   temperature[i]<<"°C"<<endl;
    }
    cout<<"\nAverage temperature: "<< Average<<"°C"<<endl;
    return 0;
}

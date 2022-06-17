#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter your year: ";
    cin>>year;
    if(year/4==0){
        cout<<"Your Year "<<year<<" is leap year!!";
    }else{
        cout<<"Your Year "<<year<<" is not leap year!!";
    }
    return 0;
}
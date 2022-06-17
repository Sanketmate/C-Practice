#include<iostream>
using namespace std;

int main()
{
    int No;
    cout<<"Enter the Your Number: ";
    cin>>No;
    if(No>=0){
        cout<<"Your No "<<No<<" is Positive";
    }else{
        cout<<"Your No "<<No<<" is Negative";
    }
    return 0;
}
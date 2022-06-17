#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="raanna";
    string st1;
    cout<<"\nEnter your text:";
    getline(cin,st1);
    cout<<st1<<endl;
    
    cout<<str<<endl;

    cout<<st1.append(str)<<endl;
    cout<<st1.at(6)<<endl;
    cout<<str[5];
    return 0;
}
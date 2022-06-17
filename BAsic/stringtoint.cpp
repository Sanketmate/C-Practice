#include<iostream>
#include<string>
using namespace std;

int main()
{
    string letter;
    cout<<"Enter you Words: ";
    cin>>letter;

    int no;
    cout<<"Enter no : ";
    cin>>no;
    cout<<stoi(letter)+no;
    return 0;
}
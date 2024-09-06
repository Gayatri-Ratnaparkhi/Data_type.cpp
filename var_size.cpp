#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int d;
    cout<<"Enter the value of int d: ";
    cin>>d;
    cout<<"D = "<<d<<endl;

    float c;
    cout<<"Enter the value of float c: ";
    cin>>c;
    cout<<"C = "<<c<<endl;

    char z;
    cout<<"Enter the character z: ";
    cin>>z;
    cout<<"Z = "<<z<<endl;

    string g;
    cout<<"Enter your name: ";
    cin>>g;
    cout<<"Name: "<<g<<endl;

    cout<<"Size of name: "<<sizeof(g)<<endl;
}

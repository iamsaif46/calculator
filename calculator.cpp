//coded by md abu saif ali khan for codsoft
#include<iostream>
using namespace std;

int main()
{

    int a,b;
    char ch;

    cout<<"Enter one number= ";
    cin>>a;

    cout<<"Enter another number= ";
    cin>>b;
    cout<<"Enter a for addition"<<endl;
    cout<<"Enter b for subtraction"<<endl;
    cout<<"Enter c for multiplication"<<endl;
    cout<<"Enter d for division"<<endl;
    cin>>ch;

if(ch=='a')

    cout<<"a+b="<<a+b<<endl;

else if(ch=='b')

cout<<"a-b="<<a-b<<endl;

else if(ch=='c')

cout<<"a*b="<<a*b<<endl;

else if(ch=='d')

cout<<"a/b="<<a/b<<endl;

else
cout<<"invalid"<<endl;

return 0;

}

#include<iostream>
using namespace std;

int main()
{
int a,b,c;
cout<<"Enter the first number";
cin>>a;
cout<<"Enter the second number";
cin>>b;
cout<<"Enter the third number";
cin>>c;

if(a>b && a>c)
{
cout<<"The first number is the largest:"<<a<<endl;
}
else if(b>a && b>c)
{
cout<<"The second number is the largest:"<<b<<endl;
}
else
{
cout<<"The third number is the largest:"<<c<<endl;
}
}

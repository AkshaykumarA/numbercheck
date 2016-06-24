#include <iostream>
using namespace std;

int main()
{
    int num;
   cout << "Enter a number" << endl;
   cin>>num;
   if(num>0)
   {
       cout<<"The given number is positive" << endl;
   }
   
   else if(num<0)
   {
       cout<<"The given number is negative" << endl;
   }
   else
   {
       cout<<"The number is Zero";
   }
   return 0;
}

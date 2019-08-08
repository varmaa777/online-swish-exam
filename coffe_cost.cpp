#include<iostream>
using namespace std;
int main()
{
   int x,c=0,diff;
   float p;
   cin >> >> p;
   p=p/100;
   while(x>=1)
   {
   c=c+x;
   diff=x*p;
   if(diff==0)
   {
   break;
   }
   x=x-diff;
   }
   cout << c << endl;
   return 0;
   }
   

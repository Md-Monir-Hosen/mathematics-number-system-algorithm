#include<bits/stdc++.h>
using namespace std;
bool isPowerOfK(unsigned int n,unsigned int k)
{
    bool oneSeen=false;
    while(n>0)
    {
     int digit=n%k;
     if(digit>1)
     {
         return false;
     }
     if(digit==1)
     {
         if(oneSeen)
         {
             return false;
             oneSeen=true;
         }
     }
     n/=k;
    }
    return true;
}
int main()
{
    int n = 64, k = 4;

    if (isPowerOfK(n ,k))
        cout << "Yes";
    else
        cout << "No";
}

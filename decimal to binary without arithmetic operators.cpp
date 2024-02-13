#include<bits/stdc++.h>
using namespace std;
string decToBin(int n)
{
    if(n==0)
    {
        return "0";
    }
    string bin="";
    while(n>0)
    {
       bin=((n & 1)==0 ? '0' : '1')+bin;
     n>>=1;
    }
    return bin;
}
int main()
{
     int n = 38;
    cout << decToBin(n);
    return 0;
}

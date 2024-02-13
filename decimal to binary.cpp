#include<bits/stdc++.h>
using namespace std;
string toBinary(double n)
{
 if(n>=1 || n<=0)
 {
     return "ERROR";
 }
 string ans;
 double frac=0.5;
 ans.append(".");
 while(n>0)
 {
    if(ans.length()>=32)
    {
        return "ERROR";
    }
    double b=n*2;
    if(b>=1)
    {
        ans.append("1");
        n=b-1;
    }
    else
    {
        ans.append("0");
        n=b;
    }
 }
 return ans;
}
int main()
{
     double n = 0.625;

    string result = toBinary(n);
    cout<<"(0"<< result <<") in base 2"<<endl;

    double m = 0.72;
    result= toBinary(m);
    cout<<"("<<result<<")"<<endl;
}

#include<bits/stdc++.h>
using namespace std;
char reVal(int num)
{
    if(num>=0 && num<=9)
    {
        return (char)(num+'0');
    }
    else
    {
        return (char)(num-10+'A');
    }
}
string fromDeci(string& res,int base,int inputNum)
{
   int index=0;
   while(inputNum>0)
   {
    res.push_back(reVal(inputNum%base));
    index++;
     inputNum/=base;
   }
   reverse(res.begin(),res.end());
   return res;
}
int main()
{
     int inputNum = 282, base = 16;
    string res;
    cout << "Equivalent of " << inputNum << " in base "
         << base << " is " << fromDeci(res, base, inputNum)
         << endl;

    return 0;
}

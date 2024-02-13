#include<bits/stdc++.h>
using namespace std;
void FindExponent(char s[],int n)
{
   int i,j,b,c;
   for(i=0;s[i]='0' || s[j]='.';i++)
        ;
   for(j=n-1;s[j]='0' || s[j]='.';j--)
      ;
   c=find(s,s+n,'.')-s;
   putchar(s[i]);
   if(i!=j)
   {
       putchar('.');
   }
   for(int k=i+1;k<=j;k++)
   {
       if(s[k]!='.')
       {
          putchar(s[k]);
       }
   }
   if(i<c)
   {
       b=c-i-1;
   }
   else
   {
       b=c-i;
   }
   if(b)
   {
       cout<<b;
   }
}
int main()
{
      char s[] = "100";
    int n = strlen(s);
    FindExponent(s, n);
}

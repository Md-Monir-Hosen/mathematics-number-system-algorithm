#include<bits/stdc++.h>
using namespace std;
void createMap(unordered_map<string, char> *um)
{
    (*um)["0000"] = '0';
    (*um)["0001"] = '1';
    (*um)["0010"] = '2';
    (*um)["0011"] = '3';
    (*um)["0100"] = '4';
    (*um)["0101"] = '5';
    (*um)["0110"] = '6';
    (*um)["0111"] = '7';
    (*um)["1000"] = '8';
    (*um)["1001"] = '9';
    (*um)["1010"] = 'A';
    (*um)["1011"] = 'B';
    (*um)["1100"] = 'C';
    (*um)["1101"] = 'D';
    (*um)["1110"] = 'E';
    (*um)["1111"] = 'F';
}
string convertBinToHex(string bin)
{
    int l=bin.size();
    int t=bin.find_first_of('0');
    int len_left=t!=-1 ? t : l;
    for(int i=1;i<=(4-len_left%4)%4;i++)
    {
        bin='0'+bin;
    }
    if(t!=-1)
    {
      int len_right= l-len_left-1;
       for(int i=1;i<=(4-len_right%4)%4;i++)
       {
        bin=bin+'0';
       }
    }
    unordered_map<string,char>bin_hex_map;
    createMap(&bin_hex_map);
    int i=0;
    string hex="";
    while(1)
    {
      hex+=bin_hex_map[bin.substr(i,4)];
      i+=4;
      if(bin.at(i)=='.')
      {
          hex +='.';
          i++;
      }
    }
    return hex;
}
int main()
{
     string bin = "1111001010010100001.010110110011011";
    cout << "Hexadecimal number = "
         << convertBinToHex(bin);
    return 0;
}

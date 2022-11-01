#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a,b,i;
   cin >> a >> b;
   i=1;
   while(b){
       cout<<a*i<<" ";
       i++;
       b--;
   }
   return 0;
}

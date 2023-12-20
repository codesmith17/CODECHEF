#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
{
    int p,q;
    cin>>p>>q;
    char ch[21];
    for(int j=0;j<21;j=j+4)
   { ch[j]='A';
   }
   
    for(int j=1;j<21;j=j+4)
   { ch[j]='A';
   }
    for(int j=2;j<21;j=j+4)
   { ch[j]='B';
   }
    for(int j=3;j<21;j=j+4)
{ ch[j]='B';
   }
  if(ch[p+q]=='A')
   cout<<"Alice"<<endl;
   else{
    cout<<"Bob"<<endl;
    
   }
    


}

    return 0;
}
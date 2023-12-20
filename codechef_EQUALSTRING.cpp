#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        char a[n],b[n],oks[n];
        cin>>a>>b;


     int hash[128] = { 0 };
	int s, c = 0;


	for (s = 0; s < strlen(b); ++s) {
	
		hash[b[s]] = 1;
	}

	
	for (s = 0; s < 128; ++s) {
		c += hash[s];
	}
   
    }

    return 0;
}
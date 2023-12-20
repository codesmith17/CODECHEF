#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
    {
	    long long int x,y,ans;
	    cin>>x >>y;
	    ans=-x*x+2*x*y-2*y+x;
	    cout<<ans<<endl;
	}
	return 0;
}
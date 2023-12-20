 #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;
    

 

 
long long int power (long long int base, long long int ex) { 
    long long int ans=1ll; 
    while(ex) { 
        if(ex&1)ans=(ans*base)%1000000007 ; 
        base=(base*base)%1000000007 ; 
        ex=ex/2; 
    } 
    return ans; 
    } 
   
    int main()
    {
        int x;
        
        unsigned long long int n;
        int t;
        cin>>t;
        while(t--)
        {
            cin>>n>>x;
            cout<<x*power(2.0,n-1)%1000000007 <<endl;
        }

        
    
        return 0;
    }
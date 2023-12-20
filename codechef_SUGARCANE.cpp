#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n;
        cin>>n;
        float expense=0.2*50*n+0.2*50*n+0.3*50*n;
        float p=50*n-expense;
        cout<<p<<endl;


    }
}
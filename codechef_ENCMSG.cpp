#include<iostream>
using namespace std;
void swap(char s[],int x,int y)
{
    char temp=s[x];
    s[x]=s[y];
    s[y]=temp;

}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        
        int n;
        cin>>n;
        char s[n];
        cin>>s;
        
        if(n%2==0)
        {
        for(int j=0;j<n;j=j+2)
        {
            swap(s,j,j+1);
        }
        }
        else
        {
        for(int j=0;j<=n-3;j=j+2)
        {
            
            swap(s,j,j+1);
            

            
        }
        
        }
        for(int k=0;k<n;k++)
        {
            char ch='z'-s[k]+'a';
            s[k]=ch;
        }

        cout<<s<<endl;


    }

    return 0;
}
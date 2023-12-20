#include<iostream>
#include <cstdlib>
using namespace std;
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
        int min,min1;
        
        for(int j=0;j<n;j++)
        {
            if(s[j]!='a' || s[j]!='e' || s[j]!='i' || s[j]!='o' || s[j]!='u')
            {
                int arr[5];
                int ar1[5];
                arr[0]=abs(s[j]-'a');
                ar1[0]=(s[j]-'a');
                arr[1]=abs(s[j]-'e');
                ar1[1]=(s[j]-'e');
                arr[2]=abs(s[j]-'i');
                ar1[2]=(s[j]-'i');
                arr[3]=abs(s[j]-'o');
                ar1[3]=(s[j]-'o');
                arr[4]=abs(s[j]-'u');
                ar1[4]=(s[j]-'u');
                for(int k=0;k<5;k++)
                {
                    min=arr[0];
                    if(arr[k]<min)
                    {
                        min=arr[k];
                        min1=ar1[k];

                        s[j]=s[j]+min1;
                    }

                }
                
            }

        }

        cout<<s<<endl;
    }

    return 0;
}
#include<stdio.h>
int getMaxRepeatingElement(int array[], int n) 
{
    int i, j, maxElement, count;
     int maxCount = 0;
    /* Frequency of each element is counted and checked.If it's greater than the utmost count element we found till now, then it is updated accordingly  */  
    for(i = 0; i< n; i++)   //For loop to hold each element
    {
        count = 1;
        for(j = i+1; j < n; j++)  //For loop to check for duplicate elements
        {
            if(array[j] == array[i])
            {
                count++;     //Increment  count
                /* If count of current element is more than 
                maxCount, then update maxElement */
                if(count > maxCount)
                {
                    maxElement = array[j];
                }
            }
        }
    }
    return maxElement;
}
int main()
{
    int t;
    for(int i=0;i<t;i++)
    {
        int n;
        
        scanf("%d",&n);
        int arr[n];
        for(int j=0;j<n;j++)
        
        {
            scanf("%d",&arr[j]);
            
        }
        int k=getMaxRepeatingElement(arr,n);
    }

    return 0;
}
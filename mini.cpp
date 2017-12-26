#include<iostream>
using namespace std;
int main()
{
    long n,k;
    cin>>n>>k;
    long a[n],v[n];
    long m=0,min=1000001,mini;
    for(long i=0;i<n;i++)
    {
        cin>>a[i];
        v[i]=0;
        if(a[i]>m)
        m=a[i];
        if(m-a[i]<min)
        {
            mini=i;
            min=a[i];
            v[mini]=1;
            //min=a[i];
        }
    }
    
    while(k!=0)
    {
        if(k>m-a[mini])
        {
        k-=(m-a[mini]);
            a[mini]=m;
        }
        else
        break;
        min=1000001;
        
        
        for(long i=0;i<n;i++)
        {
            if(m-a[i]<min && v[i]==0)
            {
                mini=i;
            }
        }
        v[mini]=1;
        
    }
    
    
    
    
    
    
}

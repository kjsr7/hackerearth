#include<iostream>
using namespace std;
int main()
{
long t,n;
cin>>t;
long a[300000];
while(t--)
{
    cin>>n;
    long count[2*n];
    for(long i=0;i<n;i++)
    {
    	cin>>a[i];
    	count[i]=0;
	}
    
    for(long i=0;i<n;i++)
    {
    	for(long j=i+1;j<n;j++)
    	{
    		if(a[i]>a[j])
    		++count[i];
		}
	}
    long c,h=n-1;
    
    for(long i=0;i<n;i++)
    {
        c=0;
        
       
           a[++h]=a[i];
           count[h]=0;
       
     
     
       for(long j=i+1;j<h;j++)
       {
          if(a[j]>a[h])
          ++count[j];
       }
     /*  for(long j=i+1;j<=h;j++)
       {
       	cout<<a[j];
	   }
	   cout<<endl;*/
	 /*  for(long j=i+1;j<=h;j++)
       {
       	cout<<count[j];
	   }*/
	   
       for(long j=i+1;j<h;j++)
       {
       	c+=count[j];
	   }
       //cout<<endl;
        cout<<c<<endl;
        
        
    }
    
}
}

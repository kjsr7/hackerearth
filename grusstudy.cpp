#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,m;
    cin>>n>>m;
    long a[n][m];
    for(long i=0;i<n;i++ )
    {
        for(long j=0;j<m;j++)
        {
          cin>>a[i][j];
        }
    }
    long q;
    cin>>q;
    int c;
    long x1,y1,x2,y2;
    long k;
    
    while(q)
    {
        cin>>c;
        if(c==1)
        {cin>>x1>>y1>>x2>>y2>>k;
        for(long i=x1-1;i<x2;i++)
        {
            for(long j=y1-1;j<y2;j++)
            {
                a[i][j]+=k;
            }
            
        }
        
            
        }
        else
        {k=0;
        cin>>x1>>y1>>x2>>y2;
            for(long i=x1-1;i<x2;i++)
        {
            for(long j=y1-1;j<y2;j++)
            {
//                a[i][j]+=k;
k+=a[i][j];
            }
            
        }
        cout<<k<<endl;
            
        }
        
        --q;
    }
}

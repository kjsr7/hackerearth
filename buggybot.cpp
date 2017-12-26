#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,k;
	cin>>n>>m>>k;
	int a[n][n];
//	int d[m][2];

	 int n1,n2;
/*	for(int i=0;i<m;i++)
	cin>>d[i][0]>>d[i][1];*/
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	a[i][j]=0;
	for(int i=0;i<m;i++)
	{
		cin>>n1>>n2;
		a[n1-1][n2-1]=1;
	}
	 int ins[k][2];
	 for(int i=0;i<k;i++)
	 {
	 cin>>ins[i][0]>>ins[i][1];	
	 }
	 int vi[n],iv[k];
for(int i=0;i<n;i++)
{
vi[i] = 0;	 }
for(int i=0;i<k;i++)
iv[k]=0;
	 int cur=1;
	 vi[cur-1]=1;
	 int end[n];
	 for(int i=0;i<n;i++)
	 end[i] = 0;
	for(int i=0;i<k;i++)
	{
		if(ins[i][0]==cur)
		{
			iv[i] = 1;
			cur=ins[i][1];
			vi[cur-1]=1;
		}
		
	}
	end[cur-1]=1;
	
	
	for(int i=0;i<n;i++)
	{
		cout<<vi[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<k;i++)
	{
		cout<<iv[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	cout<<end[i]<<" ";
	cout<<endl;
	
	for(int i=0;i<k;i++)
	{
		if(iv[i]==0)
		{
			if(a[ins[i-1][1]-1][ins[i][0]-1]==1)
			{
				cur=ins[i][1];
				for(int j=i+1;j<k;j++)
				{
						if(ins[j][0]==cur)
		{
			iv[i] = 1;
			cur=ins[i][1];
			vi[cur-1]=1;
		}
				}
				end[cur-1]=1;
				
			}
		}
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	cout<<end[i]<<" ";
	
	int c=0;
	for(int i=0;i<n;i++)
	
	if(end[i]==1)
	++c;
	cout<<c<<endl;
	for(int i=0;i<n;i++)
	
	if(end[i]==1)
	cout<<i+1<<" ";
/*	for(int i=0;i<k;i++)
	{
		if(iv[i]==0)
		{
			for(int j=0;j<m;j++)
			{
				if(d[j][1]==ins[i][0])
				{
					if(vi[d[j][0] -1]==1 )
                      {
                      	cur=ins[i][1];
                      	iv[i]=1;
                      	for(int m=)
					  }
				}
			}
		}
	}*/
	
	
	 
	 
	 
	
}

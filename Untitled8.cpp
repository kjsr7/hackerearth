#include<bits/stc++.h>
using namespace std;
int s[1000],t=-1;int ans[11];
	int m,n
void push(int k)
{
	s[++t]=k;
}
int pop()
{
	--t;
	return s[t+1];
}
void cal()
{
    int n = t+1;
    for(int i=0;i<n;i++)
    {
    	
	}
}
int main()
{
	int t;
	int a[5000][2];
	int type[5000][10];

	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int i=0;i<n-1;i++)
		cin>>a[i][0]>>a[i][1];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>type[i][j];
			}
		}
		for(int i=0;i<n;i++)
		{
			int v[n];
			for(int j=0;j<n;j++)
			v[j] = 0;
			v[i]=1;
			push(i);
			calc();
			for(int j=0;j<n;j++)
			{
				if(a[j][0]== i+1 || a[j][1] == i+1)
				{
					if(a[j][0] == i+1 && v[a[j][1] - 1] = 0)
				}
				
			}
			
			
			
		}
		
		
		
		
		
	}
	
}


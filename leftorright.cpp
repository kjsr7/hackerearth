#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,q;
	cin>>n>>q;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int y,z;
	char d;
	int s=0,c;
	int found=1;
	while(q)
	{
		cin>>y>>z>>d;
        found=1; 		
		c=y;
		while(a[c]!=z)
		{
			if(d=='L')
			{
				
				if(c==0)
				
				c=n-1;
			
				else
				--c;
				++s;
				
				if(c==y && s!=0)
				{
				found=0;
				break;}
				
			}
			else
			{
				if(c==n-1)
				c=0;
				else
				++c;
				++s;
				if(c==y && s!=0)
				{
				found=0;break;}
				
			}
		}
		if(found==0)cout<<-1<<endl;
		else
		cout<<s<<endl;
		s=0;
		
		
		--q;
	}
	
	
}

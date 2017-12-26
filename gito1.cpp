#include<iostream>
#include<cmath>
using namespace std;
int check(string s[],int m,int n)
{
	int r = 1;
	char p=s[0][0],c;
	for(int i=0;i<m;i++)
	
	{
		for(int j=0;j<n;j++)
		{
			if(i+1!=n)
			{
				if(s[i+1][j]==s[i][j])
				r=0;
			}
			if(j+1!=n)
			{
				if(s[i][j+1]==s[i][j])
				r=0;
			}
			if(i-1!=-1)
			{
				if(s[i-1][j]==s[i][j])
				r=0;
			}
				if(j-1!=-1)
			{
				if(s[i][j-1]==s[i][j])
				r=0;
			}
			
		if(r==0)break;
		}
		if(r==0)break;
	}
	return r;
	
}
int rasconst(string s[],int m,int n)
{
	int c=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i%2==0)
			{
			
			if(j%2==0)
			{
			
			if(s[i][j]=='G')
			c+=5;}
			else
			{
					if(s[i][j]=='R')
			c+=3;
				
				
			}
		}
		else
		{
			if(j%2==0)
			{
				if(s[i][j]!='G')
			c+=3;
			}
			else
			{
					if(s[i][j]!='R')
			c+=5;
				
			}
		}
	}
	}
	return c;
	
	
}
int gasconst(string s[],int m,int n)
{
	int c=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i%2==0)
			{
			
			if(j%2==0)
			{
			
			if(s[i][j]!='G')
			c+=3;}
			else
			{
					if(s[i][j]!='R')
			c+=5;
				
				
			}
		}
		else
		{
			if(j%2==0)
			{
				if(s[i][j]!='R')
			c+=5;
			}
			else
			{
					if(s[i][j]!='G')
			c+=3;
				
			}
		}
		}
	}
	return c;
	
	
}
int main()
{
	// a[100][100];/
	string s[100];
	int t,m,n,s1,s2;
	cin>>t;
	while(t)
	{
		s1=0;s2=0;
		cin>>m>>n;
		for(int i=0;i<m;i++)
		{
		cin>>s[i];
		}
		for(int i=0;i<m;i++)
		{
		cout<<s[i]<<endl;
		}
		if(!(check(s,m,n)))
		{
			s1=rasconst(s,m,n);
			s2=gasconst(s,m,n);
			cout<<min(s1,s2);
			
			
		}
		else
		cout<<0<<endl;
		
		--t;
	}
}

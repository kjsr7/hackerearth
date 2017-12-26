#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	
	int test;
	string s,t;
	cin>>test;
	int k,c;
	while(test)
	{
		c=0;
		cin>>s>>t>>k;
	//	cout<<s<<endl;
		//cout<<t<<endl;
		int l=0,l1=0;;
		int i=0,j;
		while(t[i])
		{
			
			++i;
		}
		l=i;
	//	cout<<l<<" "<<t<<endl;
		i=0;
		while(s[i])
		{
			
			++i;
		}
		l1=i;
	//	cout<<l1<<" "<<s<<endl;
		c=0;
		i=0;
		int h=-1;
		while(i+l-1<=l1-1)
		{
			j=i+l-1;
			for(int m=i;m<=j;m++)
			{
			//	cout<<s[m];
				if(s[m]==t[++h])
				++c;
			}
			h=-1;
		//	cout<<" "<<c<<endl;
		//	cout<<t<<endl;
			if(c>=k)
			{
				break;
			}
			c=0;
			++i;	
		}
		if(c>=k)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
		--test;
	}
}

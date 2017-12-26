#include<string.h>
#include<iostream>

using namespace std;
int main()
{
	int n;
	cin>>n;
	char a[n][2];
	for(int i=0;i<n;i++)
	cin>>a[i][0]>>a[i][1];

cout<<a[0][0];

	char s[1000000];
	cin.getline(s,1000000,'\n');
	int l=0;
	while(s[l])
	++l;
	
	
	
	for(int m=0;m<n;m++)
	{
	char c1 = a[m][0];
	char c2 = a[m][1];
	int c1i=0,c2i=0;
	
	for(int i=0;i<l;i++)
	{
		if(s[i]==c1)
		{
			s[i]=c2;
		}
	else if(s[i] == c2)
		{
			s[i]=c1;
		}
		else
		{
			
		}
	}
//	s[c1i] = c2;
//	s[c2i] = c1;

		
	}
	cout<<s<<endl;
	
}

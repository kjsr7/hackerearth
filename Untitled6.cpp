#include<iostream>
using namespace std;
int fact(int m)
{
	if(m==1||m==0)
	return 1;
	else
	return m*fact(m-1);
}
int main()
{
	int t,c=0;
	cin>>t;
	int l,r,m;
	
	while(t--)
{
	cin>>l>>r;
	for(int i=l;i<=r;i++)
	{
		if(fact(i-1)%i==0)
		++c;
		//m=i;
	}
	cout<<c<<endl;
}
}

#include<iostream>
using namespace std;
int main()
{
	long n;
	cin>>n;
	long x[n],h[n];
	for(long i=0;i<n;i++)
	{
		cin>>x[i]>>h[i];
	}
	long max=0;
	long cur=0;
	for(long i=0;i<n;i++)
	{
		cur=i;
  		max=x[cur]+h[cur];
		++cur;
		while(x[cur]<=max)
		{
			//	++cur;
			if(x[cur]+h[cur]>max)
			max=x[cur]+h[cur];
			if(cur == n-1)
			break;
			++cur;
		}
		cout<<max<<endl;
		max=0;
	}
	
}

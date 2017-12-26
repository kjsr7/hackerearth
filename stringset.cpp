#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
long long C(int n, int r) {
    if(r > n / 2) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}

int main()
{
	long n,m,k;
	cin>>n>>m>>k;
	string s
	;
	cin>>s;
	long w=0;
	long i=0;
	while(s[i])
	{
		w+=(int)s[i]-96;
	
	++i;
	}

	long y;
	long long count =0;	
	for(y=n*1;y<=26*n;y++)
	{
		if((w+y)%m == k)
		{
	count+=C(y+n-1,n-1);
		}
	}
	long long b = pow(10,9) + 7;
	cout<<count%b<<endl;
}

	

	
	
	
	


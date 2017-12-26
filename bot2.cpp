#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long n,m,k;
	cin>>n>>m>>k;
	long a[n][n];


	 long n1,n2;

	for(long i=0;i<n;i++)
	for(long j=0;j<n;j++)
	a[i][j]=0;
	for(long i=0;i<m;i++)
	{
		cin>>n1>>n2;
		a[n1-1][n2-1]=1;
	}
//	for(long i=0;i<n;i++){
	
//	for(long j=0;j<n;j++)
//	{
//	cout<<a[i][j]<<" ";}
//	cout<<endl;}
	 long ins[k][2];
	 for(long i=0;i<k;i++)
	 {
	 cin>>ins[i][0]>>ins[i][1];	
	 }
	 long iv[k];

for(long i=0;i<k;i++)
iv[k]=0;
	 long cur=1;
	
	 long end[n];
	 for(long i=0;i<n;i++)
	 end[i] = 0;
	for(long i=0;i<k;i++)
	{
		if(ins[i][0]==cur)
	 	{
			iv[i] = 1;
			cur=ins[i][1];
			
		}
		
	}
	end[cur-1]=1;
	
//	cout<<"without bug"<<endl;
//	for(long i=0;i<n;i++)
//	{
//		cout<<end[i]<<" ";
//	}
	
	
	for(long j=0;j<n;j++)
	{
	    if(a[cur-1][j]==1)
	    {
	        end[j]=1;
	    }
	}
//	cout<<endl<<"bug at the end"<<endl;
//		for(long i=0;i<n;i++)
//	{
//		cout<<end[i]<<" ";
//	}
	cur=1;               
	for(long j=0;j<n;j++)
	{
	    if(a[0][j]==1)
	    {
	        cur=j+1;
	        for(long i=0;i<k;i++)
	   {
		if(ins[i][0]==cur)
		{
		//	iv[i] = 1;
			cur=ins[i][1];
			//vi[cur-1]=1;
		}
		
	}
	end[cur-1]=1;
	        
	    }
	}
	//	cout<<endl<<"bug at the beg"<<endl;
	//	for(long i=0;i<n;i++)
	//{
//		cout<<end[i]<<" ";
	//}/
	

	cur=1;
	for(long i=0;i<k-1;i++)
	{
		if(iv[i]==1)
		{
		
		
			cur=ins[i][1];
		
		    if(cur!=1)
	     	{
			for(long j=0;j<n;j++)
			{
				if(a[cur-1][j]==1)
				{
					cur=j+1;
					for(long l=i+1;l<k;l++)
					{
						if(ins[l][0]==cur)
	                     	{
		                    //	iv[l] = 1;
		                       	cur=ins[l][1];
		
	                       	}
	 				}
			//	cout<<cur<<endl;
					end[cur-1]=1;
				}
			}
		}}
		
	
}
	
	//	cout<<endl<<"bug at the mid"<<endl;
	//	for(long i=0;i<n;i++)
	//{
	//	cout<<end[i]<<" ";
	//}
	

	
	long c=0;
	for(long i=0;i<n;i++)
	
	if(end[i]==1)
	++c;
	cout<<c<<endl;
	for(long i=0;i<n;i++)
	
	if(end[i]==1)
	cout<<i+1<<" ";

	
	 
	 
	 
	
}

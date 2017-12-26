#include<iostream>
#include<string.h>
using namespace std;
struct node
{
	string s;
	node*l;
}*h=NULL;
int main()
{
	
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		while(n--)
		{
			if(h==NULL)
			{
				node*n=new node;
				cin>>n->s;
				n->l=NULL;
				h=n;
			}
			else
			{
				string s1;
				cin>>s1;
				int found = 0;
				node*t=h;
				while(t!=NULL)
				{
					if(t->s==s1)
					{
						found=1;
						break;
					}t=t->l;
				}
				if(found==0)
				{
					node*temp=h;node*prev=h;
					
					while(temp!=NULL && temp->s<s1 )
					{
					prev=temp;
					temp=temp->l;
				}
					node*m = new node;
					m->s=s1;
					m->l=temp;
					prev->l=m;
					
				}
			}
		}
		node*t=h;
		while(t!=NULL)
		{
			cout<<t->s<<endl;
			t=t->l;
			
		}
		h=NULL;
	}
	
}

/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s[100000];
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        int l=-1;
        for(int i=0;i<n;i++)
        {
            
            string s1;
            cin>>s1;
            int f=1;
            for(int j=0;j<=l;j++)
            {
                if(s[j]==s1)
                {
                    f=0;break;
                }
            }
            if(f)
            s[++l]=s1;
            
            
        }
        for(int i=0;i<=l;i++)
        {
        	for(int j=i+1;j<=l;j++)
        	if(s[i]>s[j])
        	{
        		string g = s[i];
        		s[i] = s[j];
        		s[j] = g;
			}
		}
        
        for(int i=0;i<=l;i++)
        cout<<s[i]<<endl;
        
    }
}

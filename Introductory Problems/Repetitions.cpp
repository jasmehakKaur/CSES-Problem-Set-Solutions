#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	string s;
	cin>>s;
	int ans=1,c=0;
	char l='A';
	for(int i=0;i<s.length();i++)
	{
		char d=s[i];
		if(d==l)
		{
			c++;
			ans=max(c,ans);
		}
		else
		{
			l=d;
			c=1;
		}
	}
	cout<<ans;
 return 0;
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n,sum=0;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		int no;
		cin>>no;
		sum+=no;
	}
	ll s=((n+1)*n)/2;
	cout<<s-sum;
 return 0;
}

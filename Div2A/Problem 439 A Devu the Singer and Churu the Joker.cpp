#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int n,int d)
{
	int ans=0,sum=0;
	for(int i=0;i<n;i++)
		sum+=a[i];
	int devu=sum+(n-1)*10;
	if(devu<=d)
	{
		ans+=(n-1)*2;
		int rem=d-devu;
		ans+=rem/5;
		return ans;

	}
	else
		return -1;

}

int main()
{
	int n,d;
	cin>>n>>d;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<solve(a,n,d)<<endl;

}
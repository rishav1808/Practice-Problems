#include<bits/stdc++.h>
using namespace std;

int solve(int n,int m,int a,int b)
{
	int ans1=0,ans2=0;
	ans1=n*a;
	if(n%m==0)
	{
		ans2=(n/m)*b;
	}
	else
	{
		ans2=(n/m)*b+min((n%m)*a,b);
	}
	return min(ans1,ans2);
}
int main()
{
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	cout<<solve(n,m,a,b)<<endl;

}
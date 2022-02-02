#include<bits/stdc++.h>
using namespace std;

int solve(int *a,int n,int c)
{
	int ans=0,curr_ans=0;
	for(int i=0;i<n-1;i++)
	{
		curr_ans=a[i]-a[i+1];
		ans=max(curr_ans,ans);
	}
	if(ans-c<=0)
		return 0;
	else
		return (ans-c);
}

int main(){

	int n,c;
	cin>>n>>c;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<solve(a,n,c)<<endl;
}
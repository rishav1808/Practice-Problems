#include<bits/stdc++.h>
using namespace std;


void solve(int *a,int n)
{
	
	int chest=0,biceps=0,back=0;
	for(int i=0;i<n;i++)
	{
		if(i%3==0)
		{
			chest+=a[i];
		}
		else if(i%3==1)
		{
			biceps+=a[i];
		}
		else
		{
			back+=a[i];
		}
	}

	int x=max(chest,biceps);
	int ans=max(x,back);
	if(ans==chest)
	{

		cout<<"chest";
		return;
	}
	else if(ans==biceps)
	{
		cout<<"biceps";
		return;
	}
	else if(ans==back)
	{
		cout<<"back";
		return;
	}

}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	solve(a,n);

}
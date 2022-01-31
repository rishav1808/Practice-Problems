#include<bits/stdc++.h>
using namespace std;

int fun(int n,int x)
{
	int t1=n,t2=x;
	int diff=0;
	while(t1!=0)
	{
		if(t1%10!=t2%10)
			diff++;
		t1=t1/10;
		t2=t2/10;

	}
	return diff;
}
int solve(int n)
{
	int ans1=0,ans2=0;
	if(n%7==0)
		return n;
	else
	{
		ans1=n-(n%7);
		ans2=n+(7-n%7);
		int m1=fun(n,ans1);
		int m2=fun(n,ans2);
		if(m1<m2)
			return ans1;
		else
			return ans2;

	}

}


int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<solve(n)<<endl;
	}
}
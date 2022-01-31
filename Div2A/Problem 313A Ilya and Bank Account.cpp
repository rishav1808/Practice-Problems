#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
	int a=0,b=0;
	if(n>=0)
	{
		return n;
	}
	else
	{
		int rem1=n%10;
		n=n/10;
		int rem2=n%10;
		n=n/10;
		n=n*10;
		//cout<<"N"<<n<<endl;
		int ans1=n+rem1;
		int ans2=n+rem2;
		//cout<<ans1 <<" "<<ans2<<endl;
		return(max(ans1,ans2));
		
	}
}

int main()
{
	int n;
	cin>>n;
	cout<<solve(n)<<endl;
}
#include<bits/stdc++.h>
using namespace std;

int solve(int x,int y)
{
	int n=0;
	if(y==0)
		return x;
	else if(y!=x){
		int ni=2*y-1;
		int ng=(x-y)+1;
		n=ni+ng;
		return n;
	}
	
	return 2*y-1;
	

}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		cout<<solve(x,y)<<endl;
	}

}
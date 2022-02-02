#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n)
{
	vector<int>one,two,three;
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			one.push_back(i+1);
		}
		else if(a[i]==2)
				two.push_back(i+1);
		else
				three.push_back(i+1);
	}
	if(one.size()==0 || two.size()==0 || three.size()==0)
	{
		cout<<0<<endl;
		return;
	}
	
	else
	{
		int m1=min(one.size(),two.size());
	int x=three.size();
	int m2=min(m1,x);
	cout<<m2<<endl;
		vector<int>:: iterator it1=one.begin();
		vector<int>:: iterator it2=two.begin();
		vector<int>:: iterator it3=three.begin();
		
		while(m2--)
		{
			cout<<*it1<<" "<<*it2<<" "<<*it3<<endl;
			one.erase(it1);
			two.erase(it2);
			three.erase(it3);
		}
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
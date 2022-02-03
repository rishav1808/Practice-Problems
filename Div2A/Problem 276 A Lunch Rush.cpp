#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,maxi=INT_MIN;
	cin>>n>>k;
	vector<pair<int,int>>vp;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		vp.push_back(make_pair(x,y));
	}
	for(int i=0;i<n;i++)
	{
		if(vp[i].second>k)
		{
			vp[i].first=(vp[i].first-vp[i].second)+k;
		}
		maxi=max(maxi,vp[i].first);
	}
	return maxi;

}
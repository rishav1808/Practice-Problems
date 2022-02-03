#include<bits/stdc++.h>
using namespace std;


void solve(int n,string s)
{
	if(n%2!=0)
	{
		cout<<"NO"<<endl;
		return;
	}
	string ans="";
	map<char,int>map;
	for(int i=0;i<n;i++)
	{
		map[s[i]]++;
	}
	
	vector<pair<char,int>>vp;
	for(auto str:map)
		vp.push_back(make_pair(str.first,str.second));
	sort(vp.begin(),vp.end());
	for(int i=0;i<vp.size();i++)
	{
		int x=vp[i].second;

        if(x>(n/2)){
            cout<<"NO\n";
            return;
        }
        for(int j=0;j<x;j++)
        	ans+=vp[i].first;
	}
	int start=0,end=(n/2)-1;
	char prin;
	while(start<end)
	{
		prin=ans[start];
		ans[start]=ans[end];
		ans[end]=prin;
		start++;
		end--;
	}
	cout<<"YES"<<endl;
	cout<<ans<<endl;




}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		solve(n,s);
	}

}
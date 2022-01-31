#include<bits/stdc++.h>
using namespace std;

int solve(string s)
{
	int zero=0,one=0;
	vector<char>v;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='0')
			zero++;
		else
			one++;
		v.push_back(s[i]);
	}
	int count =s.length()-1;
	if(zero==0 || one==0)
		return 0;
	else
	{
		while(zero!=0 && one!=0)
		{
			if(zero!=one)
			{
				return min(zero,one);
			}
			else{
					char x=v[count];
					v.pop_back();
					if(x=='0')zero--;
					else{
						one--;
					}
			}
		}
		return 0;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
	cin>>s;
	cout<<solve(s)<<endl;
	}
	

}
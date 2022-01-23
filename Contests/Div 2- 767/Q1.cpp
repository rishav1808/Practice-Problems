#include <bits/stdc++.h>

using namespace std;
int solve(int a[],int b[],int n,int k)
{
    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++)
    {
        vp.push_back(make_pair(a[i],b[i]));
    }
    sort(vp.begin(),vp.end());
   for(int i=0;i<n;i++)
   {
       if(k>=vp[i].first)
       {
           k+=vp[i].second;
       }
       else
       {
           return k;
       }
   }
   return k;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    cout<<solve(a,b,n,k)<<endl;
    }
    
    

    return 0;
}


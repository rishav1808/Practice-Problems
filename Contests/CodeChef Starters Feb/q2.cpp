#include <bits/stdc++.h>
using namespace std;
 
void primeFactors(int n,vector<int>&v)
{
    int c=2;
    while(n>1)
    {
        if(n%c==0){
        //cout<<c<<" ";
        v.push_back(c);
        n/=c;
        }
        else c++;
    }
    v.push_back(1);
    
    
}

int solve(int x,int a,int b)
{
    int n=(b*x)/a;
    vector<int>v;
    primeFactors(n,v);
    for(auto it:v)
    cout<<it<<endl;
    int sum1=0;
    for(int i=0;i<v.size();i++)
    sum1+=v[i];
    long long int pro=1;
    for(int i=0;i<v.size();i++)
    pro=pro*v[i];
    int reci=sum1/pro;
    if(reci==(a/b) && sum1==x)
    return n;
    else return -1;
    
}
/* Driver code */
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int x,a,b;
        cin>>x>>a>>b;
        cout<<solve(x,a,b)<<endl;
    }
   
    
    
    return 0;
}
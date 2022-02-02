#include<bits/stdc++.h>
using namespace std;

int solve(int *a,int n)
{
	int countEven=0,countOdd=0;
	int oddPos=-1,evenPos=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			if(countEven==0)
				evenPos=i+1;
			countEven++;
		}
		else
		{
			if(countOdd==0)
				oddPos=i+1;
			countOdd++;

		}
		if(countEven>1 && oddPos!=-1)
			return oddPos;
		else if(countOdd>1 && evenPos!=-1)
			return evenPos;
	}
	return 1;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<solve(a,n)<<endl;
}
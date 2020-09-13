#include<iostream>
#define lli long long int
using namespace std;
lli sum=0;
lli fib(lli n)
{
	if(n<2)return n;
	return fib(n-1)+fib(n-2);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lli n,m;
		cin>>n>>m;
		
		for(lli i=n;i<=m;i++)
		{
			sum = (sum+fib(i))%1000000007;
		}
		cout<<sum<<endl;
		
	}
}
// fibonacci using DP Top Down
#include<iostream>
using namespace std;
int m[1000]={0};
int fib(int n)
{
	if(m[n]!=0||n==0)
	return m[n];
	else
	{
		return m[n] = fib(n-1)+fib(n-2);	
	}
	
	
}
int main()
{
	m[1]=1;
	int n;cin>>n;
	cout<<fib(n);
}

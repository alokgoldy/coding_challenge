// fibonacci nth value in O(logn) time


#include<iostream>
using namespace std;
int I[2][2],T[2][2];
void mul(int A[2][2],int B[2][2])
{
	int res[2][2];
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			res[i][j]=0;
			for(int k=0;k<2;k++)
			{
				res[i][j]=(res[i][j]+A[i][k]*B[k][j]);
			}
		}
	}
	for(int i=0;i<2;i++)for(int j=0;j<2;j++)A[i][j]=res[i][j];
}
int fib(int n)
{
	if(n<=1)return n;
	
	I[0][0]=I[1][1]=1;
	I[0][1]=I[1][0]=0;
	
	T[0][0]=0;
	T[0][1]=T[1][0]=T[1][1]=1;
	
	while(n)
	{
		if(n%2)
		mul(I,T),n--;
		else
		mul(T,T),n/=2;
	}
	return I[1][0];
}
int main()
{
	int n;cin>>n;
	cout<<fib(n);
}
// Transpose of Matrix

//Method 1

#include<iostream>
using namespace std;
void transpose(int a[][4],int b[][4])
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		b[i][j]=a[j][i];
	}
}
int main()
{
	int a[4][4]={{1,1,1,1},
				 {2,2,2,2},
				 {3,3,3,3},
				 {4,4,4,4}};
	
	int b[4][4];
	
	transpose(a,b);
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		cout<<a[i][j]<<" ";
		if(i==2||i==1)
		cout<<"transpose-> ";
		else
		cout<<"----------- ";
		for(int j=0;j<4;j++)
		cout<<b[i][j]<<" ";
		
		cout<<"\n";
	}
}


// Method 2

#include<iostream>
using namespace std;
int main()
{
	int a[4][4]={ {1, 1, 1, 1}, 
                    {2, 2, 2, 2}, 
                    {3, 3, 3, 3}, 
                    {4, 4, 4, 4}};
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<4;j++)
		{
			swap(a[i][j],a[j][i]);
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<a[i][j]<" ";
		}
		cout<<"\n";
	}
}
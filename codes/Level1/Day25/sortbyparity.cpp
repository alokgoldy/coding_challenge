#include<bits/stdc++.h>
#include <vector>
using namespace std;
class Solution
{
	public:
	vector<int> sortArrayByParity(vector<int> &A){
			for(int i=0;i<A.size()-1;i++)
			{
				int k=i+1;
				if(A[i]%2!=0)
				{
					while(A[k]%2!=0&&k<A.size()-1)
					{
						k++;
					}
					swap(A[i],A[k]);
				}
			}
			
	}	
};
int main()
{
	vector<int> A;
	
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
		int k;cin>>k;
		A.push_back(k);
	}
	
	
	
	Solution obj;
	obj.sortArrayByParity(A);
}
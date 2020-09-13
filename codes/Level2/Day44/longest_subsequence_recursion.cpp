// longest subsequence recursion

#include<iostream>
#include<string>
using namespace std;
int lcs(int x, int y, string s1, string s2){
    
    if(x==0||y==0)
    return 0;
    
    if(s1[x-1]==s2[y-1])
    return 1+lcs(x-1,y-1,s1.substr(0,s1.length()-1),s2.substr(0,s2.length()-1));
    
    else
    return max(lcs(x-1,y,s1.substr(0,s1.length()-1),s2),lcs(x,y-1,s1,s2.substr(0,s2.length()-1)));
    
}
int main()
{
	int x=6,y=5;
	string s1 = "abcdyu";
	string s2 = "abcii";
	cout<<lcs(x,y,s1,s2);
}
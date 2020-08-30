#include <bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    bool iscap(char ch) {
        return ((int)ch >= 65 && (int)ch <= 90);
    }
    public:
    bool isCapp(string word)
    {
        int n= word.length();
        if(n==1)return true;

        if(iscap(word[0])&&iscap(word[1]))
        {
            for(int i=2;i<n;i++)
            {
                if(!iscap(word[i]))
                return false;
            }
        }
        else
        {
            for(int i=1;i<n;i++)
            {
                if(iscap(word[i]))
                return false;
            }
        }
        
        return true;
    }
};
int main()
{
    string word;
    cin>>word;
    Solution obj1;
    if(obj1.isCapp(word))
    cout<<"true";
    else
    cout<<"false";
}

#include <bits/stdc++.h>
#include <string>
using namespace std;
class Solution
{
    public:
     bool isPalindrome(string s){

        int start = 0;
        int end = s.length()-1;

        while(start<=end)
        {
            while(start<end && !isalnum(s[start]))
            start++;

            while(end>start && !isalnum(s[end]))
            end--;

            if(start<end && tolower(s[start]) != tolower(s[end]))
            return false;
            
            start++;
            end--;
        }

        return true;
    }
};
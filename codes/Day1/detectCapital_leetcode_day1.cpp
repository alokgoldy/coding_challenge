#include<iostream>
using namespace std;
class Solution {
private:
    bool isCapital(char ch) {
        return ((int)ch >= 65 && (int)ch <= 90);
    }
    
public:
    bool detectCapitalUse(string word) {
        bool result = true;
        bool foundLower = false;
        int count = 0;
        
        for (int i=0; i<word.length(); i++) {
          char ch = word[i];
          
          if (isCapital(ch)) {
            count++;
            
            if (foundLower) {
                // Found an upper-case letter after a lower-case: uSa
                result = false;
                break;
            }
          }
          else if (count <= 1) {
              // Found a lower-case letter and only 1 or 0 upper-case: usa or Usa
              foundLower = true;
          }
          else {
              // More than one upper-case letter and this one is lower-case: USa
              result = false;
              break;
          }
        }
        
        return result;
    }
};
int main()
{
	Solution s1;
	cout<<s1.detectCapitalUse("aloK");
}


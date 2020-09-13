//method 1

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        for(int i=s.length()/2;i>0;i--)
        {
            if(s.length()%i==0)
            {
                int k=0,l=i;
                while(l<s.length())
                {
                    if(s[k]!=s[l])
                        break;
                    k++,l++;
                }
                if(l==s.length())
                    return true;
            }
        }
        return false;
    }
};

// method 2

class Solution {
    public boolean repeatedSubstringPattern(String s) {
        return s.matches("^([a-z]+)\\1+$");
    }
}

//method 3

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
       string temp = s+s;
        
        temp = temp.substr(1);
        temp = temp.substr(0,temp.length()-1);
        return temp.find(s)!=string::npos?true:false;
    }
};
import java.util.*;  
class Solution{

    public boolean detectCapitalUse(String word) {
        
        int n = word.length();
        if(n==1)return true;

        if(Character.isUpperCase(word.charAt(0)) && Character.isUpperCase(word.charAt(1)))
        {
            for(int i=2;i<n;i++)
            {
                if(Character.isLowerCase(word.charAt(i)))
                {
                    return false;
                }
            }
        }
        else
        {
            for(int i=1;i<n;i++)
            {
                if(Character.isUpperCase(word.charAt(i)))
                {
                    return false;
                }
            }
        }
        return true;
    }
}

class Main {

    public static void main(String[] args) {
    
        Solution ob1 = new Solution();
    
        Scanner sc = new Scanner(System.in);
    
        String word = sc.nextLine();
    
        System.out.println(ob1.detectCapitalUse(word));
    }
}

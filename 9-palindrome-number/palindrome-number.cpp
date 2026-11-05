class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        int a=x;
        long long sum=0;
        while(a>0)
        {
            sum=sum*10+a%10;
            a=a/10;
        }
        if(sum==x)
        return true;
        else
        return false;


        
    }
};
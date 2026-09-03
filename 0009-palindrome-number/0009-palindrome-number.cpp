class Solution 
{
public:
    bool isPalindrome(int n) 
    {
        double rev = 0;
        int n1 = n;
        while(n1>0)
        {
            int d = n1%10;
            rev = rev * 10 + d;
            n1=n1/10;
        }
        if(n == rev)
        {
            return true;
        }
        else
        {
            return false;
        }      
    } 
};
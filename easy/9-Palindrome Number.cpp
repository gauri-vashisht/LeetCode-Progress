class Solution {
public:
    bool isPalindrome(int x) {
        int revnum=0;
        int orig=x;
        if (orig>0){
        while(x!=0){
            int l=x%10;
            if(revnum>INT_MAX/10 || revnum<INT_MIN/10)
                return 0;
            revnum=revnum*10+l;
            x=x/10;
        }
        }
        if (orig<0)
            return 0;
        if (revnum==orig)
            return true;
        else
            return false;
    }
};
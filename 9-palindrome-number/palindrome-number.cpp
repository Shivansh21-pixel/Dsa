class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        if(x<0){
            return false;
        }
        long long r=0;
        while(x!=0){
            int l=x%10;
            r=r*10+l;
            x=x/10;
        }
        if(y==r){
            return true;
        }
       return false;
    }
};
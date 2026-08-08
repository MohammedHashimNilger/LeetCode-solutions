class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        long long pal = 0;

        if (x < 0)
        return false;

        while(x != 0) {
        int rem = x%10;
        pal = pal * 10  + rem;
        x = x/10;
        }
        return pal == original;
    }
};
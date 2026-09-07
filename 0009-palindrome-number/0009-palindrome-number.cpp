class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0 || (x != 0 && x % 10 == 0)) return false;

        int original = x;
        int reverse_n = 0;

        while (x != 0) {
            int lastDigit = x % 10;

            
            if (reverse_n > INT_MAX / 10 || (reverse_n == INT_MAX / 10 && lastDigit > 7)) return false;

            reverse_n = reverse_n * 10 + lastDigit;
            x /= 10;
        }

        return reverse_n == original;
    }
};
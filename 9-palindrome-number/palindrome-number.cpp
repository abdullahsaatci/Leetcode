class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        long long temp = x;
        long long from_back = 0;
        int last_digit;
        while(temp != 0){
            last_digit = temp%10;
            from_back = from_back * 10 + last_digit;
            temp /= 10;
        }
        return x == from_back;
    }
};
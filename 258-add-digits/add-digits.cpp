class Solution {
public:
    int addDigits(int num) {
        int single_digit_sum = 1 + (num - 1) % 9;
        return single_digit_sum;
    }
};
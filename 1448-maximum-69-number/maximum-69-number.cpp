class Solution {
public:
    int maximum69Number (int num) {
        int rightCountDigit = -1;
        int digitCount = 0;
        int temp = num;

        while(temp > 0)
        {
            int dig = temp % 10;
            if(dig == 6) rightCountDigit = digitCount;
            digitCount++;
            temp /= 10;
        }
        if(rightCountDigit == -1) return num;
        int ans = num + 3 * static_cast<int>(pow(10, rightCountDigit));
        return ans;
    }
};
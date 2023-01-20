class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last=digits.size()-1; 
        while(digits[last] == 9) {
            digits[last--] = 0;
            if(last == -1) {
                digits[last+1] = 0;
                digits.insert(digits.begin(), 1);
                return digits;
            }
        }
        digits[last]++;
        return digits;
    }
};
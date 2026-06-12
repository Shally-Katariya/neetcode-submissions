class Solution {
   public:
    int hammingWeight(uint32_t n) {
        int count = 0;

        while (n != 0) {
            n = n & (n - 1);  // remove one set bit
            count++;
        }
        n = n >> 1;  // remove last bit

        return count;
    }
};

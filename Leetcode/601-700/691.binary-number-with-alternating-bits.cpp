class Solution {
 public:
  bool hasAlternatingBits(int n) {
    int x = n ^ (n >> 1);
    while (n != 0) {
      if (!(x & 1)) {
        return false;
      }
      x >>= 1;
      n >>= 1;
    }
    return true;
  }
};
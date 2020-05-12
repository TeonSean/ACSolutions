class Solution {
 public:
  int findShortestSubArray(vector<int>& nums) {
    if (nums.empty()) {
      return 0;
    }
    std::unordered_map<int, std::array<int, 3>> m;  // [first, last, cnt]
    int max_cnt = 1;
    for (int i = 0; i < nums.size(); i++) {
      auto it = m.find(nums[i]);
      if (it == m.end()) {
        m[nums[i]] = {i, i, 1};
      } else {
        auto& array = it->second;
        array[1] = i;
        max_cnt = std::max(max_cnt, ++array[2]);
      }
    }
    int min_diff = nums.size();
    for (const auto& pair : m) {
      if (pair.second[2] == max_cnt) {
        min_diff = std::min(min_diff, 1 + pair.second[1] - pair.second[0]);
      }
    }
    return min_diff;
  }
};
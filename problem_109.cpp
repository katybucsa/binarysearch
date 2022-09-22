#include <vector>

std::vector<int> solve(std::vector<int>& nums) {

  int minn = nums[0];
  int next;
  nums[0] = 0;
  for (int i = 1; i < nums.size(); i++) {
    next = minn < nums[i] ? minn : nums[i];
    nums[i] = minn;
    minn = next;
  }

  return nums;
}
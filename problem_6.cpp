#include <vector>

std::vector<int> solve(std::vector<int>& nums) {

  size_t nums_s = nums.size();
  std::vector<int> prefix(nums_s);
  std::vector<int> suffix(nums_s);

  prefix[0] = 1;
  suffix[nums_s - 1] = 1;

  for (int i = 1; i < nums_s; i++)
    prefix[i] = prefix[i - 1] * nums[i - 1];

  for (int i = nums_s - 2; i >= 0; i--)
    suffix[i] = suffix[i + 1] * nums[i + 1];

  for (int i = 0; i < nums_s; i++)
    nums[i] = prefix[i] * suffix[i];

  return nums;
}
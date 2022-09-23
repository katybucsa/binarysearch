#include <vector>

/**
* Given a list of integers nums, return a new list such that each element at index i of the new list is the product of all the numbers in the original list except the one at i. Do this without using division.
* Constraints
* 2 ≤ n ≤ 100,000 where n is the length of nums
*/

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
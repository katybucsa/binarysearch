#include <vector>

/*
* Given a list of integers nums, return whether the list is strictly increasing or strictly decreasing.
* Constraints
* n ≤ 100,000 where n is the length of nums
*/

bool solve(std::vector<int>& nums) {

  size_t s_nums = nums.size();

  if (s_nums < 2)
    return true;

  int first = nums[0];
  int second = nums[1];
  bool dec = false, asc = false;

  if (first < second)
    asc = true;
  else if (first > second)
    dec = true;

  if (s_nums == 2)
    return asc || dec;

  for (int i = 1; i < s_nums - 1; i++)
    if ((asc && nums[i] >= nums[i + 1]) || (dec && nums[i] <= nums[i + 1]))
      return false;

  return true;
}
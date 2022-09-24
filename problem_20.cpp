#include <vector>

/*
* Given a list of integers nums, return whether the largest number is bigger than the second-largest number by more than two times.
* Constraints
* 2 ≤ n ≤ 100,000 where n is the length of nums
*/

bool solve(std::vector<int>& nums) {

  int max1 = nums[0], max2 = nums[0];

  for (auto n : nums) {
    if (n > max1)
      max1 = n;
  }

  for (auto n : nums) {
    if ((n > max2 || max2 == max1) && n != max1)
      max2 = n;
  }
  return max1 > 2 * max2;
}
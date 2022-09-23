#include <vector>

/**
  * Given an integer list nums where each number represents the maximum number of hops you can make, determine whether you can reach to the last index starting at index 0.

  * Constraints

  * n ≤ 100,000 where n is the length of nums.
*/
bool solve(std::vector<int>& nums) {

  size_t ss = nums.size();
  if (ss < 2)
    return true;
  if (ss == 2)
    return nums[0] > 0;

  int hops = 0;
  for (int i = ss - 2; i >= 0; i--)
  {
    hops++;
    while (nums[i] == 0 && i > 0)
    {
      i--; hops++;
    }
    if (nums[i] >= hops)
      hops = 0;
  }
  return hops == 0;
}
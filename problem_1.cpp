#include <vector>
#include <set>

/**
* Given a list of numbers nums and a number k, return whether any two elements from the list add up to k. You may not use the same element twice.
* Note: Numbers can be negative or 0.
* Constraints
* n ≤ 100,000 where n is the length of nums
*/

bool solve(std::vector<int>& nums, int k) {
  std::set<int> distinct;
  for (int no : nums) {
    if (distinct.find(k - no) != distinct.end()) return true;
    distinct.insert(no);
  }
  return false;
}
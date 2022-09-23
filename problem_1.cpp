#include <vector>
#include <set>

bool solve(std::vector<int>& nums, int k) {
  std::set<int> distinct;
  for (int no : nums) {
    if (distinct.find(k - no) != distinct.end()) return true;
    distinct.insert(no);
  }
  return false;
}
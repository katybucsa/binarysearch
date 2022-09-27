#include <string>

/*
* Given a lowercase alphabet string s, determine whether it has all unique characters.
* Constraints
* 0 ≤ n ≤ 100,000 where n is the length of s
*/
bool solve(std::string s) {

  int a[256] = { 0 };
  for (char c : s)
    if (a[c] != 0)
      return false;
    else
      a[c]++;
  return true;
}
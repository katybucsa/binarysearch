#include <string>

/*
* Given two lowercase alphabet strings s1 and s2, determine if s1 is a subsequence of s2.
* Constraints
* n ≤ 100,000 where n is the length of s1
* m ≤ 100,000 where m is the length of s2
*/

bool solve(std::string s1, std::string s2) {

  int i = 0, j = 0;

  while (i < s1.size() && j < s2.size()) {
    if (s1[i] == s2[j])
      i++;
    j++;
  }

  return i == s1.size();
}
#include <string>

/*
* Given a string lowercase alphabet s, eliminate consecutive duplicate characters from the string and return it.
* That is, if a list contains repeated characters, they should be replaced with a single copy of the character. The order of the elements should not be changed.
* Constraints
* 0 ≤ n ≤ 100,000 where n is the length of s
*/
std::string solve(std::string s) {

  if (s.size() < 2)
    return s;

  std::string res;
  for (int i = 0; i < s.size() - 1; i++)
  {
    if (s[i] != s[i + 1])
      res += s[i];
  }
  res += s[s.size() - 1];
  return res;
}
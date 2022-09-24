#include <string>

/*
* Given a string s, return its run-length encoding. You can assume the string to be encoded have no digits and consists solely of alphabetic characters.
* Constraints
* n ≤ 100,000 where n is the length of s
*/

std::string solve(std::string s) {

  int i = 0, count;
  size_t s_size = s.size();
  char c;
  std::string res = "";

  while (i < s_size) {
    count = 0;
    c = s[i];
    while (s[i] == c && i < s_size) {
      i++;
      count++;
    }
    res += std::to_string(count);
    res += c;
  }
  return res;
}
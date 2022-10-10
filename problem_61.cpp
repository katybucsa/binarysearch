#include <string>
#include <set>

/*
* Given a lowercase alphabet string s, return the index of the first recurring character in it. If there are no recurring characters, return -1.
* Constraints
* n ≤ 100,000 where n is the length of s
*/

int solve(std::string s) {

  std::set<char> characters;
  for (int i = 0; i < s.size(); i++)
  {
    if (characters.find(s[i]) != characters.end())
      return i;
    characters.insert(s[i]);
  }
  return -1;
}
#include <string>
#include <stack>

/**
* You're given a string s consisting solely of "(" and ")". Return whether the parentheses are balanced.
* Constraints
* n ≤ 100,000 where n is the length of s.
*/

bool solve(std::string s) {

  std::stack<char> parentheses;
  for (auto c : s)
  {
    if (c == '(')
      parentheses.push(c);
    else if (!parentheses.empty())
      parentheses.pop();
  }
  return parentheses.empty();
}
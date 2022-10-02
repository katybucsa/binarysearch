#include <string>
#include <vector>
#include <stack>

std::vector<std::string> solve(std::string s) {

  std::stack<char> par;
  std::vector<std::string> res;
  int init = 0;
  bool init_set = false;

  for (int i = 0; i < s.size(); i++)
  {
    if (!init_set)
    {
      init = i;
      init_set = true;
    }

    if (s[i] == '(')
      par.push(s[i]);
    else
      par.pop();

    if (par.empty())
    {
      res.push_back(s.substr(init, i - init + 1));
      init_set = false;
    }
  }

  return res;
}
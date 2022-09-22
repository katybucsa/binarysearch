#include <string>

bool solve(std::string s, std::string t) {
  int arr[26] = { 0 }, i;

  size_t s1 = s.size(), s2 = t.size();
  for (i = 0; i < s1 && i < s2; i++) {
    arr[s[i] - 'a']++;
    arr[t[i] - 'a']++;
  }
  while (i < s1) {
    arr[s[i] - 'a']++;
    i++;
  }
  while (i < s2) {
    arr[t[i] - 'a']++;
    i++;
  }
  for (i = 0; i < 26; i++)
    if (arr[i] % 2 != 0)
      return false;
  return true;
}
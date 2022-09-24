#include <string>

/*
* Given two strings a and b that represent binary numbers, add them and return their sum, also as a string.
* The input strings are guaranteed to be non-empty and contain only 1s and 0s.
* Constraints
* n ≤ 100,000 where n is the length of a
* m ≤ 100,000 where m is the length of b
*/

std::string solve(std::string a, std::string b) {

  int i = a.size() - 1;
  int j = b.size() - 1;
  int sum, r = 0;

  std::string res = "";

  while (i >= 0 && j >= 0) {
    sum = int(a[i]) + int(b[j]) - 96 + r;
    res = std::to_string(sum % 2) + res;
    r = sum / 2;
    i--; j--;
  }

  while (i >= 0) {
    sum = int(a[i]) - 48 + r;
    res = std::to_string(sum % 2) + res;
    r = sum / 2;
    i--;
  }

  while (j >= 0) {
    sum = int(b[j]) - 48 + r;
    res = std::to_string(sum % 2) + res;
    r = sum / 2;
    j--;
  }

  if (r != 0)
    res = std::to_string(r) + res;

  return res;
}
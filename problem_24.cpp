#include <vector>

/*
* Given a number n, return a list of all prime numbers smaller than or equal to n in ascending order.
* Constraints
* n ≤ 100,000
*/
std::vector<int> solve(int n) {
  std::vector<int> primes;
  std::vector<bool> is_prime(n + 1, true);
  for (int num = 2; num <= n; num++) {
    if (is_prime[num]) {
      primes.push_back(num);
      for (int i = num * num; i <= n; i += num) is_prime[i] = false;
    }
  }
  return primes;
}
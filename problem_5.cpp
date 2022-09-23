/**
* Given a non-negative integer num, return whether it is a palindrome.
* Bonus: Can you solve it without using strings?
* Constraints
* num < 2 ** 31
*/

bool solve(int num) {

  int num_copy = num;
  int pal = 0;

  while (num_copy)
  {
    pal = pal * 10 + num_copy % 10;
    num_copy /= 10;
  }

  return num == pal;
}
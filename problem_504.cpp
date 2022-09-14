#include <string>

/**
 * Given two lowercase alphabet strings s and t, return the minimum amount of operations on s required to make t a substring of s. In each operation, you can choose any position in s and change the character at that position to any other character.
 */

int solve(std::string s, std::string t) {

    if (s == t)
        return 0;

    int s_size = s.size(), t_size = t.size();
    int diff, min_diff = t_size;
    for (int i = 0; i <= s_size - t_size; i++) {
        diff = t_size;
        for (int j = 0; j < t_size; j++)
            if (s[i + j] == t[j])
                diff--;
        if (diff < min_diff)
            min_diff = diff;
    }
    return min_diff;
}
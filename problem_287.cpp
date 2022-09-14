#include <string>

/**
 * Given two strings s0 and s1, return whether you can obtain s1 by removing 1 letter from s0.
 * @param s0 - first string
 * @param s1 - second string
 * @return - true if the second string can be obtained from the first string by removing only one letter
 *         - false otherwise
 */

bool solve(std::string s0, std::string s1) {

    size_t l1 = s0.size(), l2 = s1.size();

    if(l1 - l2 != 1)
        return false;

    if(l2 == 0)
        return true;

    size_t i=0, j=0;
    while(i<l1 && j< l2){
        if(s0[i] == s1[j])
            j++;
        i++;
        if(i-j>1)
            return false;
    }
    return (i-j == 1 && s0[i] == s1[j]) || i==j;
}

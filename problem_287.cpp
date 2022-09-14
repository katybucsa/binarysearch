#include <string>

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

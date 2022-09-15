#include <string>

std::string solve(std::string s0, std::string s1) {

	int i = 0, l0 = s0.size(), l1 = s1.size();
	std::string new_s = "";

	while (i < l0 && i < l1) {
		new_s += s0[i];
		new_s += s1[i];
		i++;
	}
	if (i < l0)
		new_s += s0.substr(i);
	if (i < l1)
		new_s += s1.substr(i);

	return new_s;
}
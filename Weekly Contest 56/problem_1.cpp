#include <string>

bool solve(std::string s) {

	int occ[10] = { 0 };

	for (int i = 0; i < s.size(); i++)
		occ[s[i] - '0']++;


	bool found_pair = false;
	for (int i = 0; i < 10; i++) {
		if (occ[i] % 3 != 0 && (occ[i] - 2) % 3 != 0)
			return false;

		if (occ[i] > 1 && (occ[i] - 2) % 3 == 0)
			if (found_pair)
				return false;
			else
				found_pair = true;
	}
	return found_pair;
}
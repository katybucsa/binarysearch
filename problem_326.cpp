#include <vector>
#include <set>

/*
* Given a two dimensional list of integers votes, where each list has two elements [candidate_id, voter_id], report whether any voter has voted more than once.
* Constraints
* n ≤ 100,000 where n is the length of votes
*/


bool solve(std::vector<std::vector<int>>& votes) {

  std::set<int> voters;

  for (auto vote : votes)
  {
    if (voters.find(vote[1]) != voters.end())
      return true;
    voters.insert(vote[1]);
  }
  return false;
}
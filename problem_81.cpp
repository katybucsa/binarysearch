/*
* Given a singly linked list node, return the value of the middle node. If there's two middle nodes, then return the second one.
* Bonus: Solve using O(1) space.
* Constraints
* n ≤ 100,000 where n is the number of nodes in node
*/

class LLNode {
public:
  int val;
  LLNode* next;
};

int solve(LLNode* node) {

  LLNode* first = node;
  LLNode* second = node;
  int n = 1;

  if (!first->next)
    return first->val;

  while (first->next && first->next->next)
  {
    second = second->next;
    first = first->next->next;
    n += 2;
  }
  if (first->next)
    n++;

  if (n % 2)
    return second->val;
  return second->next->val;
}
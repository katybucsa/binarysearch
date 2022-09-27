/*
 * Given a singly linked list node, return the value of the kth last node (0-indexed). k is guaranteed not to be larger than the size of the linked list.
 * This should be done in \mathcal{O}(1)O(1) space.
 * Constraints
 * n ≤ 100,000 where n is the length of node
*/


class LLNode {
public:
  int val;
  LLNode* next;
};

int solve(LLNode* node, int k) {

  LLNode* cp1 = node;
  LLNode* cp2 = node;
  while (k) {
    k--;
    cp1 = cp1->next;
  }
  while (cp1->next != nullptr) {
    cp1 = cp1->next;
    cp2 = cp2->next;
  }
  return cp2->val;
}
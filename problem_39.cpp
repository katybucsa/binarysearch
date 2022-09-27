

/**
 * Given a singly linked list node, return its length. The linked list has fields next and val.
 * Constraints
 * n ≤ 100,000 where n is the number of nodes in node
 */
class LLNode {
public:
  int val;
  LLNode* next;
};

int solve(LLNode* node) {

  int length = 0;
  while (node != nullptr) {
    length++;
    node = node->next;
  }
  return length;
}
/*
* Given a singly linked list node, return its reverse.
* Bonus: Can you do this in \mathcal{O}(1)O(1) space?
* Constraints
* n ≤ 100,000 where n is the number of nodes in node
*/

class LLNode {
public:
  int val;
  LLNode* next;

  LLNode(int val, LLNode* next) : val(val), next(next) {}
};


LLNode* solve(LLNode* node) {

  if (node->next == nullptr)
    return node;

  LLNode* f = node;
  LLNode* s = node->next;
  f->next = nullptr;

  while (s != nullptr)
  {
    node = s;
    s = s->next;
    node->next = f;
    f = node;
  }
  return f;
}
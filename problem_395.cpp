/*
* Given a singly linked list node, and an integer target, delete the last occurrence of target in node.
* Constraints
* 0 ≤ n ≤ 100,000 where n is the number of nodes in node
*/

class LLNode {
public:
  int val;
  LLNode* next;
};

LLNode* solve(LLNode* node, int target) {

  LLNode* first = node;
  LLNode* prev = nullptr;
  LLNode* prev_target = nullptr;
  LLNode* last_target = nullptr;
  while (node != nullptr)
  {
    if (node->val == target)
    {
      prev_target = prev;
      last_target = node;
    }
    prev = node;
    node = node->next;
  }

  if (last_target != nullptr)
  {
    if (last_target == first)
      first = last_target->next;
    else
      prev_target->next = last_target->next;
    delete last_target;
  }
  return first;
}
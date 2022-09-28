/*
* Given a singly linked list node, and an integer target, return the same linked list with all nodes whose value is target removed.
* Constraints
* n ≤ 100,000 where n is the number of nodes in node
*/
class LLNode {
public:
  int val;
  LLNode* next;
};

LLNode* solve(LLNode* node, int target) {

  LLNode* prev = nullptr;
  LLNode* first = node;
  LLNode* temp;
  while (node != nullptr)
  {
    if (node->val == target)
    {
      temp = node;
      if (prev == nullptr)
      {
        node = node->next;
        first = node;
      }
      else
      {
        prev->next = node->next;
        node = node->next;
      }
      delete temp;
    }
    else
    {
      prev = node;
      node = node->next;
    }
  }
  return first;
}
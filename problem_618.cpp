/*
* You are given a singly linked list node containing positive integers. Return the same linked list where every node's next points to the node val nodes ahead. If there's no such node, next should point to null.
* Constraints
* n ≤ 100,000 where n is the number of nodes in node
*/

class LLNode {
public:
  int val;
  LLNode* next;
};

LLNode* solve(LLNode* node) {

  int val;
  if (!node || !node->next)
    return node;

  LLNode* head = node;
  LLNode* prev;

  while (node)
  {
    prev = node;
    val = node->val;
    while (val && node)
    {
      val--;
      node = node->next;
    }
    if (node)
    {
      prev->next = node;
      prev = node;
    }
  }

  prev->next = nullptr;
  return head;
}
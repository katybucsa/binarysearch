/*
* Given a singly linked list node, reorder it such that we take: the last node, and then the first node, and then the second last node, and then the second node, etc.
* Can you do it in \mathcal{O}(1)O(1) space?
* Constraints
* 0 ≤ n ≤ 100,000 where n is the number of nodes in node
*/

class LLNode {
public:
  int val;
  LLNode* next;
};

LLNode* solve(LLNode* node) {

  if (!node || !node->next)
    return node;

  LLNode* slow = node;
  LLNode* fast = node;
  LLNode* mid = nullptr, * next = nullptr, * prev = nullptr, * head = nullptr, * next2 = nullptr;

  while (fast->next && fast->next->next)
  {
    slow = slow->next;
    fast = fast->next->next;
  }

  mid = slow;
  slow = slow->next;
  mid->next = nullptr;

  while (slow)
  {
    next = slow->next;
    slow->next = prev;
    prev = slow;
    slow = next;
  }

  head = prev;
  while (prev)
  {
    next = prev->next;
    prev->next = node;

    next2 = node->next;
    if (next)
      node->next = next;

    prev = next;
    node = next2;
  }

  return head;
}
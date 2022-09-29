/*
* Given a singly linked list node whose values are integers, determine whether the linked list forms a palindrome.
* Constraints
* n ≤ 100,000 where n is the length of node
*/

class LLNode {
public:
  int val;
  LLNode* next;
};

bool solve(LLNode* node) {

  if (!node || !node->next)
    return true;

  if (node && node->next && !node->next->next)
    return node->val == node->next->val;

  LLNode* slow = node;
  LLNode* fast = node;
  LLNode* prev = nullptr, * aux;

  while (fast->next && fast->next->next)
  {
    slow = slow->next;
    fast = fast->next->next;
  }

  aux = slow;
  slow = slow->next;
  aux->next = nullptr;

  while (slow)
  {
    if (prev)
    {
      aux = slow->next;
      slow->next = prev;
      prev = slow;
      slow = aux;
    }
    else
    {
      prev = slow;
      slow = slow->next;
      prev->next = nullptr;
    }
  }

  while (prev)
  {
    if (prev->val != node->val)
      return false;
    prev = prev->next;
    node = node->next;
  }
  return true;
}
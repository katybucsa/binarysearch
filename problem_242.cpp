/*
* Given a singly linked list l0 and another linked list l1, each representing a number with least significant digits first, return the summed linked list.
* Note: Each value in the linked list is guaranteed to be between 0 and 9.
* Constraints
* n ≤ 100,000 where n is the number of nodes in l0
* m ≤ 100,000 where m is the number of nodes in l1
*/


class LLNode {
public:
  int val;
  LLNode* next;
};

LLNode* solve(LLNode* l0, LLNode* l1) {

  LLNode* res = nullptr;
  LLNode* curr = nullptr;
  int sum, r = 0;

  while (l0 && l1)
  {
    sum = l0->val + l1->val + r;
    LLNode* new_node = new LLNode(sum % 10);
    if (!res)
      res = new_node;
    else
      curr->next = new_node;

    curr = new_node;
    r = sum / 10;
    l0 = l0->next;
    l1 = l1->next;
  }

  while (l0)
  {
    sum = l0->val + r;
    LLNode* new_node = new LLNode(sum % 10);
    if (!res)
      res = new_node;
    else
      curr->next = new_node;

    curr = new_node;
    r = sum / 10;
    l0 = l0->next;
  }

  while (l1)
  {
    sum = l1->val + r;
    LLNode* new_node = new LLNode(sum % 10);
    if (!res)
      res = new_node;
    else
      curr->next = new_node;

    curr = new_node;
    r = sum / 10;
    l1 = l1->next;
  }

  if (r != 0)
  {
    LLNode* new_node = new LLNode(r);
    curr->next = new_node;
  }

  return res;
}
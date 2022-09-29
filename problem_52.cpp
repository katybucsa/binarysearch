/*
* Given a linked list node and a non-negative integer k, rotate the list to the right by k places.
* Note: The linked list is guaranteed to have at least one element, and k is guaranteed to be less than or equal to the length of the list.
* Constraints
* k ≤ n ≤ 100,000 where n is the number of nodes in node
*/

class LLNode {
public:
  int val;
  LLNode* next;
};

LLNode* solve(LLNode* node, int k) {

  if (k == 0 || !node->next)
    return node;

  LLNode* head = node;
  LLNode* prev_head = node;
  LLNode* aux = nullptr;
  LLNode* kth_end = node;
  LLNode* last = nullptr;

  while (k)
  {
    k--;
    node = node->next;
  }

  if (!node)
    return prev_head;

  while (node)
  {
    aux = kth_end;
    kth_end = kth_end->next;
    if (!node->next)
      last = node;
    node = node->next;
  }

  head = kth_end;
  aux->next = nullptr;
  last->next = prev_head;

  return head;
}
/*
* Given two sorted linked lists l0, and l1, return a new sorted linked list containing the intersection of the two lists.
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

  while (l0 && l1)
  {
    if (l0->val < l1->val)
      l0 = l0->next;
    else if (l1->val < l0->val)
      l1 = l1->next;
    else
    {
      LLNode* new_node = new LLNode(l0->val, nullptr);
      if (res == nullptr)
        res = new_node;
      else
        curr->next = new_node;
      curr = new_node;
      l0 = l0->next;
      l1 = l1->next;
    }
  }
  return res;
}
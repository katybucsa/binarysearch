/*
* Given two linked lists l0 and l1, return the two linked lists interleaved, starting with l0. If there are leftover nodes in a linked list, they should be added to the end.
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
  LLNode* current = nullptr;

  while (l0 && l1)
  {
    LLNode* n1 = new LLNode(l1->val);
    LLNode* n0 = new LLNode(l0->val, n1);

    if (!res)
      res = n0;
    else
      current->next = n0;
    current = n1;
    l0 = l0->next;
    l1 = l1->next;
  }
  if (l0)
  {
    if (!res)
      res = l0;
    else
      current->next = l0;
  }
  if (l1)
  {
    if (!res)
      res = l1;
    else
      current->next = l1;
  }

  return res;
}
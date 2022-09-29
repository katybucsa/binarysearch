/*
* Given two sorted linked lists node0, and node, return a new sorted linked list containing the union of the two lists.
* Constraints
* 0 ≤ n ≤ 100,000 where n is the number of nodes in node0
* 0 ≤ m ≤ 100,000 where m is the number of nodes in node1
*/

class LLNode {
public:
  int val;
  LLNode* next;
};

LLNode* solve(LLNode* ll0, LLNode* ll1) {

  LLNode* res = nullptr;
  LLNode* current = nullptr;
  int val;
  LLNode* new_node = nullptr;

  while (ll0 && ll1)
  {
    if (ll0->val < ll1->val)
    {
      val = ll0->val;
      ll0 = ll0->next;
    }
    else if (ll1->val < ll0->val)
    {
      val = ll1->val;
      ll1 = ll1->next;
    }
    else
    {
      val = ll1->val;
      ll0 = ll0->next;
      ll1 = ll1->next;
    }

    new_node = new LLNode(val);

    if (!res)
      res = new_node;
    else
      current->next = new_node;

    current = new_node;
  }
  if (ll0)
    current->next = ll0;
  if (ll1)
    current->next = ll1;

  return res;
}
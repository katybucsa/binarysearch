/*
* Given the head of a singly linked list head, return whether the values of the nodes are sorted in a strictly increasing order.
* Constraints
* 1 ≤ n ≤ 100,000 where n is the number of nodes in head
*/

class LLNode {
public:
  int val;
  LLNode* next;
};

bool solve(LLNode* head) {

  int prev_val = head->val;
  while (head->next != nullptr)
  {
    head = head->next;
    if (head->val <= prev_val)
      return false;
    prev_val = head->val;
  }
  return true;
}
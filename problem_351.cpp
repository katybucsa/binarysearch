/*
* You are given a singly linked list node and an integer k. Order the linked list so that all nodes whose values are less than k come first, all nodes whose values are equal to k next, and then other nodes last.
* The relative ordering of the nodes should remain the same.
* Bonus: Can you do it in O(n) time and O(1) space?
* Constraints
* n ≤ 100,000 where n is the number of nodes in node
*/

class LLNode {
public:
  int val;
  LLNode* next;
};

LLNode* solve(LLNode* node, int k) {

  LLNode* l = nullptr;
  LLNode* l_curr = nullptr;
  LLNode* e = nullptr;
  LLNode* e_curr = nullptr;
  LLNode* g = nullptr;
  LLNode* g_curr = nullptr;
  LLNode* temp;

  while (node)
  {
    temp = node->next;
    node->next = nullptr;
    if (node->val < k)
    {
      if (!l)
        l = node;
      else
        l_curr->next = node;
      l_curr = node;
    }
    else if (node->val > k)
    {
      if (!g)
        g = node;
      else
        g_curr->next = node;
      g_curr = node;
    }
    else
    {
      if (!e)
        e = node;
      else
        e_curr->next = node;
      e_curr = node;
    }
    node = temp;
  }
  
  if (l)
  {
    if (e) 
    {
      l_curr->next = e;
      e_curr->next = g;
    }
    else {
      l_curr->next = g;
    }
  }
  else
  {
    if (e) {
      e_curr->next = g;
      l = e;
    }
    else
      l = g;
  }

  return l;
}
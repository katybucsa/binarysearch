#include <stack>

/*
* You are given a singly linked list node containing integer values. Take the first half of the linked list and fold over the second half and merge the intersecting nodes by taking their sum.
* Constraints
* 1 ≤ n ≤ 100,000 where n is the number of nodes in node
*/

class LLNode {
public:
  int val;
  LLNode* next;
};

LLNode* solve(LLNode* node) {

  std::stack<int> nodes_vals;
  LLNode* first = node;
  LLNode* temp;
  int n = 0, i = 0;

  while (first)
  {
    n++;
    first = first->next;
  }

  first = node;

  while (node)
  {
    if (i < n / 2)
    {
      nodes_vals.push(node->val);
      temp = node;
      node = node->next;
      delete temp;
    }
    else
    {
      if ((n % 2 == 0) || i != n / 2)
      {
        node->val += nodes_vals.top();
        nodes_vals.pop();
      }
      if (i == n / 2)
        first = node;
      node = node->next;
    }
    i++;
  }
  return first;
}
#include <set>

/*
* Given a singly linked list node, remove nodes with duplicate values while maintaining relative order of the original list.
* Constraints
* n ≤ 100,000 where n is the number of nodes in node
*/

class LLNode {
public:
  int val;
  LLNode* next;
};

LLNode* solve(LLNode* node) {

  LLNode* res = node;
  LLNode* prev = nullptr;
  LLNode* temp;

  std::set<int> nodes_vals;
  while (node)
  {
    if (nodes_vals.find(node->val) == nodes_vals.end())
    {
      nodes_vals.insert(node->val);
      prev = node;
      node = node->next;
    }
    else
    {
      temp = node;
      if (prev == nullptr)
        res = node->next;
      else
        prev->next = node->next;

      node = node->next;
      delete temp;
    }

  }
  return res;
}
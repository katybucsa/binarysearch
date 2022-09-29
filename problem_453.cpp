/*
* Given a singly linked list node, and integers i and j, reverse the linked list from i to jth nodes, 0 indexed and inclusive.
* You should return the head of the reversed list.
* This should be done in \mathcal{O}(1)O(1) space.
* Constraints
* n ≤ 100,000 where n is the number nodes in node
*/

class LLNode {
public:
  int val;
  LLNode* next;
};

LLNode* solve(LLNode* node, int i, int j) {

  int idx = 0;
  LLNode* head = node;
  LLNode* prev_i = nullptr, * prev_r = nullptr, * aux = nullptr;

  LLNode* prev = nullptr, * next = nullptr, * i_node;

  while (idx < i)
  {
    prev_i = node;
    node = node->next;
    idx++;
  }

  i_node = node;

  while (idx <= j)
  {
    next = node->next;
    node->next = prev;
    prev = node;
    node = next;
    idx++;
  }

  if (i == 0)
  {
    head->next = node;
    head = prev;
  }
  else
  {
    i_node->next = node;
    prev_i->next = prev;
  }

  return head;
}
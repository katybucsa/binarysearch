/*
* Given a singly linked list node, swap each pair of nodes and return the new head.
* Constraints
* n ≤ 100,000 where n is the number of nodes in node
*/

class LLNode {
public:
  int val;
  LLNode* next;
};

LLNode* solve(LLNode* node) {

  if (node->next == nullptr)
    return node;

  LLNode* n1 = node;
  LLNode* n2 = node->next;
  LLNode* prev = nullptr;
  LLNode* aux;

  while (n2)
  {
    aux = n2->next;
    n2->next = n1;
    n1->next = aux;

    if (!prev)
      node = n2;
    else
      prev->next = n2;

    aux = n1;
    n1 = n2;
    n2 = aux;
    prev = n2;
    n1 = n2->next;
    if (n1)
      n2 = n2->next->next;
    else
      n2 = nullptr;
  }

  return node;
}
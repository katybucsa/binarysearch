/*
* You are given two linked lists a and b as well as integers lo and hi.
* Remove a's nodes from indices (0-indexed) [lo, hi] inclusive and insert b in this place.
* Constraints
* 0 ≤ n ≤ 100,000 where n is the number of nodes in a
* 0 ≤ m ≤ 100,000 where m is the number of nodes in b
*/


class LLNode {
public:
  int val;
  LLNode* next;
};

LLNode* solve(LLNode* a, LLNode* b, int lo, int hi) {

  int i = 0;
  LLNode* first = b;
  LLNode* curr = a;
  LLNode* temp = nullptr;

  while (b->next != nullptr)
  {
    b = b->next;
  }

  while (curr != nullptr && i <= hi)
  {
    if (i == lo - 1)
    {
      temp = curr;
      curr = curr->next;
      temp->next = first;
    }
    else if (i >= lo && i <= hi)
    {
      if (i == lo && curr == a)
        a = first;
      temp = curr;
      curr = curr->next;
      delete temp;
    }
    else
      curr = curr->next;
    i++;
  }
  b->next = curr;

  return a;
}
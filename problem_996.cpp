
/*
* You are given a singly linked list node and an integer k. Swap the value of the k-th (0-indexed) node from the end with the k-th node from the beginning.
* Constraints
* 1 ≤ n ≤ 100,000 where n is the number of nodes in node
* 0 ≤ k < n
*/
class LLNode {
public:
  int val;
  LLNode* next;
};

LLNode* solve(LLNode* node, int k) {

  LLNode* first = node;
  LLNode* kth_end = node;
  LLNode* kth_begin = node;

  while (k) {
    k--;
    kth_begin = kth_begin->next;
  }

  node = kth_begin;
  while (node->next != nullptr) {
    kth_end = kth_end->next;
    node = node->next;
  }

  int t = kth_begin->val;
  kth_begin->val = kth_end->val;
  kth_end->val = t;

  return first;
}
#include "ListNode.h"
#include <iostream>


int val;
ListNode* next;
ListNode::ListNode() : val(0), next(nullptr) {}
ListNode::ListNode(int x) : val(x), next(nullptr) {}
ListNode::ListNode(int x, ListNode* n) : val(x), next(n) {}
ListNode* ListNode::Free()
{
	if (next != nullptr) delete next->Free();
	return this;
}

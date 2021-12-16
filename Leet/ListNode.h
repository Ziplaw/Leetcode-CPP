#pragma once

class ListNode {
public:
	int val;
	ListNode* next;
	ListNode();
	ListNode(int x);
	ListNode(int x, ListNode* n);
	ListNode* Free();
};


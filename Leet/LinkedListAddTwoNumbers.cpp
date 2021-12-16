#include "ListNode.h";
#include "LinkedListAddTwoNumbers.h";

//16ms (98.23%), 71.3 MB (80%)
ListNode* LinkedListAddTwoNumbers::AddTwoNumbers(ListNode* l1, ListNode* l2) {

    ListNode* currentChild = new ListNode();
    ListNode* parent = new ListNode(-1, currentChild);
    ListNode* temp;

    bool carry = false;
    while (l1 != nullptr || l2 != nullptr || carry) {
        auto sum = (l1 == nullptr ? 0 : l1->val) + (l2 == nullptr ? 0 : l2->val) + (carry ? 1 : 0);
        l1 = l1 == nullptr ? nullptr : l1->next;
        l2 = l2 == nullptr ? nullptr : l2->next;


        carry = sum > 9;

        currentChild->val = sum % 10;

        if (l1 == nullptr && l2 == nullptr && !carry) break;
        temp = new ListNode();
        currentChild->next = temp;
        currentChild = temp;
    }

    return parent->next;
}
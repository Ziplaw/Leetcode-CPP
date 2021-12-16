
#include <iostream>
#include "LinkedListAddTwoNumbers.h";

#define LOG(x) std::cout << x << std::endl;

int main()
{

    //l1 = [2, 5, 3]
    //l2 = [5, 6, 4]
    //o1 = [7, 1, 0, 1]

    auto l1 = ListNode(2, &ListNode(5, &ListNode(3)));
    auto l2 = ListNode(5, &ListNode(6, &ListNode(6)));

    auto l3 = LinkedListAddTwoNumbers().AddTwoNumbers(&l1, &l2);
    ListNode* parent = l3;

    while (l3 != nullptr)
    {
        LOG(l3->val);
        l3 = l3->next;
    }

    delete parent->Free();
}

#include <iostream>
#include "LinkedListAddTwoNumbers.h";

#define log(x) std::cout << x << std::endl;

int main()
{

    //[2,4,3]
    //[5, 6, 4]

    auto l1 = ListNode(2, &ListNode(4, &ListNode(3)));
    auto l2 = ListNode(5, &ListNode(6, &ListNode(6)));

    auto l3 = LinkedListAddTwoNumbers().AddTwoNumbers(&l1, &l2);

    while (l3 != nullptr)
    {
        log(l3->val);
        l3 = l3->next;
    }

    l3->Free();
    free(l3);
}
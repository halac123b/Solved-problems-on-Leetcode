class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *result = new ListNode();
        ListNode *first = new ListNode();

        if (list1 != nullptr || list2 != nullptr)
        {
            if (list1 == nullptr)
            {
                result->next = new ListNode(list2->val, list2->next);
                list2 = list2->next;
                result = result->next;
            }
            else if (list2 == nullptr)
            {
                result->next = new ListNode(list1->val, list1->next);
                list1 = list1->next;
                result = result->next;
            }
            else
            {
                if (list1->val <= list2->val)
                {
                    result->next = new ListNode(list1->val, list1->next);
                    list1 = list1->next;
                    result = result->next;
                }
                else
                {
                    result->next = new ListNode(list2->val, list2->next);
                    list2 = list2->next;
                    result = result->next;
                }
            }

            first = result;
        }
        else
        {
            first = nullptr;
        }

        while (list1 != nullptr || list2 != nullptr)
        {
            if (list1 == nullptr)
            {
                result->next = new ListNode(list2->val, list2->next);
                list2 = list2->next;
                result = result->next;
            }
            else if (list2 == nullptr)
            {
                result->next = new ListNode(list1->val, list1->next);
                list1 = list1->next;
                result = result->next;
            }
            else
            {
                if (list1->val <= list2->val)
                {
                    result->next = new ListNode(list1->val, list1->next);
                    list1 = list1->next;
                    result = result->next;
                }
                else
                {
                    result->next = new ListNode(list2->val, list2->next);
                    list2 = list2->next;
                    result = result->next;
                }
            }
        }

        return first;
    }
};
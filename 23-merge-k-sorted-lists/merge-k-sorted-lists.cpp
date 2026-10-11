
class Solution {
public:
    ListNode* mergeTwo(ListNode* a, ListNode* b) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (a && b) {
            if (a->val <= b->val) {
                tail->next = a;
                a = a->next;
            } else {
                tail->next = b;
                b = b->next;
            }
            tail = tail->next;
        }

        tail->next = a ? a : b;
        return dummy.next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* result = nullptr;

        for (ListNode* list : lists) {
            result = mergeTwo(result, list);
        }

        return result;
    }
};

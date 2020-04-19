/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //存放新到新链表
        ListNode * head=new ListNode (-1);
        ListNode * h=head;  //h是移动指针

        int sum = 0;    //存放累加和
        bool carry = false;    //是否进位

        while (l1!=NULL || l2!=NULL)
        {
            sum = 0;
            if (l1!=NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2!=NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            if (carry)
                sum++;
            //存到新建的下一个节点sum如果=13
            h->next = new ListNode(sum%10);
            h=h->next;
            //如果有进位加到下一次上
            carry = sum>=10?true:false;
        }
    if(carry) //最后有进位 直接成最高位1
    {
        h->next = new ListNode(1);
    }
    return head->next;
    }
};

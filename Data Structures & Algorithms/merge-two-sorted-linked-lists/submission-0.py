# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        crnt1 = list1
        crnt2 = list2
        dummy = ListNode()
        temp = dummy

        while crnt1 and crnt2:
            
            if crnt1.val < crnt2.val:
                temp.next = crnt1
                crnt1 = crnt1.next
            else:
                temp.next = crnt2
                crnt2 = crnt2.next
            
            temp=temp.next

        if not crnt1:
            temp.next=crnt2
        if not crnt2:
            temp.next=crnt1
        
        return dummy.next

        
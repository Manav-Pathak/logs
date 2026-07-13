# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev = None
        crnt =  head
        temp = head

        while crnt:
            temp = crnt.next
            crnt.next = prev
            prev = crnt
            crnt = temp
        return prev
            
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        if not head:
            return False
        if not head.next:
            return False

        fast = head.next
        slow = head
        while slow and fast.next:
            if slow.val == fast.val:
                return True
            else:
                slow = slow.next
                fast = fast.next.next
            if not fast:
                return False
        return False
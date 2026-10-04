# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def deleteNode(self, node):
    #     if head is None:
    #         return
    #     if self.head.data==node:
    #         self.head=self.head.next
    #         return
    #     current=self.head
    #     while current.next:
    #         if current.next.data==node:
    #             current.next=current.next.next
    #             return
    #         current=current.next
        node.val=node.next.val
        node.next=node.next.next
      
        
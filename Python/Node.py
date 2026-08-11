# Node class for creating nodes in a linked list
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

node1 = Node(10)
node2 = Node(20)
node3 = Node(30)
node4 = Node(40)
node5 = Node(50)

node1.next = node2
node2.next = node3
node3.next = node4
node4.next = node5

node5.next = node3 

def detect_cycle(head):
    slow = head
    fast = head
    

    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next
        
        if slow == fast:
            return True
            
    return False

has_cycle = detect_cycle(node1)
print(f"Cycle detected: {has_cycle}")
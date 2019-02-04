class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node

    def printList(self):
        temp = self.head

        while (temp):
            print (temp.data), 
            temp = temp.next

    def rearrange(self):
        odd = self.head

        if (odd is None or odd.next is None or odd.next.next is None):
            return

        even = odd.next
        odd.next = odd.next.next
        odd = odd.next
        even.next = None
        
        while (odd and odd.next):
            temp = odd.next.next
            odd.next.next = even
            even = odd.next
            odd.next = temp

            if temp is not None:
                odd = temp
        odd.next = even

if __name__ == '__main__':
    start = LinkedList()

    start.push(7)
    start.push(6)
    start.push(5)
    start.push(4)
    start.push(3)
    start.push(2)
    start.push(1)

    print("Linked list before calling rearrange() ")
    start.printList()

    start.rearrange()

    print("\nLinked list after calling rearrange() ")
    start.printList()

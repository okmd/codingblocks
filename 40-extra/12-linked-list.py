class Node:
    def __init__(self, val=0):
        self.data = val
        self.next = None

class LL:
    def __init__(self, val=0):
        self.head = Node(val)
    def inser_at_head(self, val):
        temp = Node(val)
        temp.next = self.head
        self.head = temp
    def remove_from_head(self):
        temp = self.head.next
        self.head = temp
        del temp
    def insert_at_pos(self, pos, val):
        n = Node(val)
        temp = self.head
        while(temp.next and pos-2>0):
            pos -= 1
            temp = temp.next
        n.next = temp.next
        temp.next = n

    def remove_from_pos(self, pos):
        temp = self.head
        while(temp.next.next and pos-2>0):
            pos -= 1
            temp = temp.next
        t = temp.next
        temp.next = temp.next.next
        del t
    def printt(self):
        head = self.head
        while head:
            print(head.data, end=" ")
            head = head.next
        print()
    def mid(self):
        slow = self.head
        fast = self.head.next
        while(fast):
            slow = slow.next
            fast = fast.next.next
        print(slow.data)
    def nbyk(self, k):
        slow = self.head
        fast = self.head
        while fast and fast.next:
        for i in range(k):
        if fast:
        fast = fast.next
        slow = slow.next
        print(slow.data)

l = LL()
for i in range(17):
    l.inser_at_head(i)
l.insert_at_pos(3,30)
#l.remove_from_head()
l.printt()
l.remove_from_pos(3)
l.printt()
l.mid()
#l.nbyk(4)
l.cycle()

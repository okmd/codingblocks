# Note: Done
class Node:
	max_level = 0
	def __init__(self, val):
		self.value = val
		self.left = None
		self.right = None
	def reset_level(self):
		Node.max_level = 0

	def pre_order(self):
		if self.value != -1:
			print(self.value, end=" ")
		if self.left:
			self.left.pre_order()
		if self.right:
			self.right.pre_order()

	def right_view(self, level): # initial level 1
		if Node.max_level < level:
			if self.value != -1:
				print(self.value, end=" ")
			Node.max_level = level
		if self.right:
			self.right.right_view(level+1)
		if self.left:
			self.left.right_view(level+1)

	def left_view(self, level): # inital level = 1
		if Node.max_level < level:
			if self.value != -1:
				print(self.value, end=" ")
			Node.max_level = level
		if self.left:
			self.left.left_view(level+1)
		if self.right:
			self.right.left_view(level+1)
	def _normalize(self):
		if self.left.value == -1:
			self.left = None
		if self.right.value == -1:
			self.right = None
		if self.left:
			self.left._normalize()
		if self.right:
			self.right._normalize()


	def insert(self, arr): #level order insertion
		qu = [self]
		for val in arr[1:]:
			new_node = Node(val)
			if not qu[0].left:
				qu[0].left = new_node
			else:
				qu[0].right = new_node
				del qu[0]
			if val != -1:
				qu.append(new_node)
		self._normalize()


arr = list(map(int, input().split(' ')))
#arr =[1,2,3,-1,4,-1,-1,2,-1,3,-1,-1,8,-1,-1]
root = Node(arr[0]) # assuming root in not null, arr[0]!= -1

root.insert(arr)

# root.pre_order()
# print()
root.left_view(1) 
print()
root.reset_level() # reset class variable when calling view func
# root.right_view(1)



	
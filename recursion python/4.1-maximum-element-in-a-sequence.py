'''
Describe a recursive algorithm for finding the maximum element in a sequence, S, of n elements.
What is your running time and space usage?
'''
import sys

def maximum_of_sequence(sequence, index, current_max):
    if(index==len(sequence)-1):
        return sequence[index]
    return max(sequence[index], maximum_of_sequence(sequence, index+1, current_max))


elements = [1,2,3,14,7,72,886]

maximum = maximum_of_sequence(elements, 0, -sys.maxsize)
print(f"Maximum of {elements} is {maximum}.")




https://leetcode.com/problems/min-stack/

**Data Structures**
	Stack

**Solution**
	This solution uses two stacks, one to keep track of all the values and one to keep track of just the min value
	In the push method, push the input onto the stack
	Push the min value between the input and the value on top of the min stack onto the min stack
	This will ensure that the min stack always has the min value on top, and if the min value is popped off the next min value will be on top
	For the pop method simply pop off both stacks
	For top return the top of the main stack
	For min return the top of the min stack

**Space/Time Complexity**
	Space: O(n) where n is the amount of values pushed onto the stack
	Time: O(1) for each argument

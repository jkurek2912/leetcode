https://leetcode.com/problems/evaluate-reverse-polish-notation/

**Data Structures**
	Stack
    Set

**Solution**
	Use a set to store the 4 operations, +, -, x, /
	Use a stack that stores ints
	Loop through the input vector
	If the element is a number, use stoi and push it to the stack
	If it is an operation, pop the top two elements from the stack and store them in vars a and b
	Then apply that operation to a and b, and push the result to the stack
	Return the top of the stack after the for loop exits

**Space/Time Complexity**
	Space: O(n)
	Time: O(n)
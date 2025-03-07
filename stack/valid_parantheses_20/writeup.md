https://leetcode.com/problems/valid-parentheses/

**Data Structures**
	Stack

**Solution**
	Return false if the input string is of size 1 or less
	Create a stack of chars
	Loop through the input string
	If the character is opening, add it to the stack
	If it is closing, first return false if the stack is empty
	Then check if the top of the stack is the corresponding char
	If it is not, return false
	Pop from the top of the stack
	After the for loop return true if the stack is empty, false otherwise

**Space/Time Complexity**
	Space: O(n)
	Time: O(n)
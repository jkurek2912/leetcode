https://leetcode.com/problems/daily-temperatures/

**Data Structures**
	Monotonic Decreasing Stack

**Solution**
	Create a stack of temperature index pairs
	For loop through the input temperature array
	At each index, get the temperature value
	While that temperature value is greater than the top of the stack, and while the stack is not empty, pop from the stack and insert loop index - pair index into the result array at position pair index
	After the while loop, insert the temperature index pair into the stack
	Return the result vector after the for loop

**Space/Time Complexity**
	Space: O(n)
	Time: O(n)
https://leetcode.com/problems/binary-search/

**Data Structures**
	NA

**Solution**
	Using a high and low pointer, set to 0 and length of the array - 1
	While loop while low is less than or equal to high
	Set mid equal to low + (high - low) / 2 to avoid integer overflow (low + high could overflow)
	If nums at mid is too small, set low to mid + 1
	If nums at mid is too big, set high to mid - 1
	The +- 1 is important to avoid infinite loops
	If nums at mid is equal to target return it
	Return -1 after the while loop

**Space/Time Complexity**
	Space: O(1)
	Time: O(n)
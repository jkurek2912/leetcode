https://leetcode.com/problems/container-with-most-water/

**Data Structures**
	NA

**Solution**
	Set a left pointer to 0 and a right pointer to input size - 1
	Loop while left is less than right
	Calculate the water between left and right by taking the minimum height of the input array at position left and right and then multiplying by the right - left to get height x width
	Use max() to keep track of the largest value calculated before
	Move the left pointer up the value there is less than the value at right, move the right pointer up otherwise
	Return the max value found

**Space/Time Complexity**
	Space: O(1)
	Time: O(n)
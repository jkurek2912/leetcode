https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

**Data Structures**
	NA

**Solution**
	Set the left pointer to 0 and the right pointer to size -1 
	While loop while left is less than right
	Set sum equal to the sum of the values at index left and index right
	If sum is too small, move left up
	If sum is too large, move right down
	If sum = target, return a vector {l + 1, r + 1}

**Space/Time Complexity**
	Space: O(1)
	Time: O(n)
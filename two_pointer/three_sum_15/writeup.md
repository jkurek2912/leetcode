https://leetcode.com/problems/3sum/

**Data Structures**
	NA

**Solution**
	Sort the input array in increasing order
	For loop through sorted array using i
	If the element at i is the same as the element at i - 1, continue to the next iteration, this is to skip duplicates
	Set left and right pointers to i + 1 and input size - 1
	Create a target variable equal to 0 - input array at i, this is what we want our left and right pointer values to add to to get a total sum of 0
	While loop while l < r
	Check if values at left and values at right sum to target
	If they do, add these values along with the value at i to the result vector
	Then loop over all duplicate values on the left and right side of the array
	If the sum is too small, move the left pointer up
	If the sum is too large, move the right pointer down
	Return the result vector after the outer for loop finishes

**Space/Time Complexity**
	Space: O(1)
	Time: Sorting is O(nlogn), for loop + while loop is O(n^2), overall O(n^2) runtime
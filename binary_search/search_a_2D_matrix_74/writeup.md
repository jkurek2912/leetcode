https://leetcode.com/problems/search-a-2d-matrix/

**Data Structures**
	NA

**Solution**
	First, binary search for the correct row. Use a low and high pointer, and at each mid index, check the first and last element of the inner vector. If they are both too small, search right, if they are both too big, search left, and if the target falls somewhere between the first and last element, we break and binary search that vector.
	Outside the first while loop, return false if low is greater than high
	Then binary search again, this time do a normal binary search on the matrix vector at position mid, which was calculated before
	Be sure to do low = mid + 1 and high = mid - 1 when needed to avoid infinite loops
	Return true if we find the element, and return false outside the while loop if we do not

**Space/Time Complexity**
	Space: O(1)
	Time: O(log(nm))
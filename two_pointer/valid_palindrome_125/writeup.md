https://leetcode.com/problems/valid-palindrome/

**Data Structures**
	NA

**Solution**
	Use a two pointer approach with pointers on the left and right side of the array
	Use a while loop that runs until these pointers are equal or have crossed each other
	At each iteration in the while loop, use while loops to skip over all the non alphanumeric characters
	After these inner while loops, make sure l is not greater than or equal to r
	Check if the string at l is the same as the string at r
	If it is not, return false
	Move the left pointer one left and the right pointer one right
	Return true after the while loop finishes

**Space/Time Complexity**
	Space: O(1)
	Time: O(n)
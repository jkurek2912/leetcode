https://leetcode.com/problems/contains-duplicate/

**Related**
	[[1. Arrays and Hashing]]

**Data Structures:** 
	Set

**Solution**
	Loop through the array of ints
	At each element, check if it exists in the set
	If it does, return true
	Otherwise, add the element to the set
	Return false at the end of the for loop

**Space/Time Complexity**
	Space: O(n)
	Time O(n)

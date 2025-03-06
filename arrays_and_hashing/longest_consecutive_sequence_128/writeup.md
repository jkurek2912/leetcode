https://leetcode.com/problems/longest-consecutive-sequence/

**Data Structures**
	Visited set, set for elements in input array

**Solution**
	Create a set that contains all the numbers in the input array
	Create a variable longest and set it equal to 0
	Loop through the set
	Check to see if the number one smaller than the number we are observing exists in the set
	If there is no such number, that means we are at the beginning of a potential consecutive sequence
	In this case, loop through the set to see if num + index exists, where index  starts at 1 and then increments each loop. This will find the longest consecutive sequence starting from the number we originally observed in the set. 
	Set the longest variable to be equal to the max value between itself and the length of the sequence after the while loop
	Return this value after the outer for has executed

**Space/Time Complexity**
	Space: O(n)
	Time: O(n)
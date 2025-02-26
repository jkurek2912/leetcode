https://leetcode.com/problems/two-sum/

**Related**
	[[1. Arrays and Hashing]]

**Data Structures**
	Hashmap

**Solution**
	Create a hashmap that maps an element in the array to the index where it is found
	Loop through the array
	At each index, check to see if (target - the value at the index) exists in the hashmap
	If it does, that means that we have found two integers that add to target in our array
	Return a vector that holds the index we are at, and the index of the map element
	If we did not find a match at our index, add the number we are at to our map, and set the value at that map position to the index we are at

**Space/Time Complexity**
	Space: O(n)
	Time: O(n)
https://leetcode.com/problems/valid-anagram/

**Data Structures**c
	Hashmap

**Solution**
	Make a hashmap for each string
	Loop through each string and store the frequency of each character in the corresponding hashmap
	Loop through one of the hashmaps. At each element, get the character and corresponding frequency. 
	Check the frequency for this character in the second hashmap and see if it is equal to the other frequency. 
	If not equal, return false
	Return true after for loop

**Space/Time Complexity**
	Space: O(n)
	Time: O(n)
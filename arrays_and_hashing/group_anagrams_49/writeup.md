https://leetcode.com/problems/group-anagrams/


**Data Structures**
	Frequency Array
	Hashmap

**Solution**
	Create a hashmap that maps a string to a vector of strings. The string key will be in the format "#num#num..." with 26 nums representing each letter of the alphabet and "#" separating them for parsing purposes. 
	Loop through the vector of strings. For each string, loop through the letters and update the frequency array, adding one to ith index in the array for the ith letter in the alphabet. 
	Create an empty string key. Loop through the frequency array and add each value in it to key, separating them with "#".
	Once the key is created, check if it exists in the hashmap. If it does not, create a new vector of strings at position key in the hashmap. 
	Push the string from the input vector to the back of the hashmap vector and add it to the hashmap.
	After the for loop, we should have a hashmap with a key that stores the frequencies of letters for the strings that are in the value vector.
	Create a vector of vectors of strings to hold the result.
	Loop through the hashmap and add the vector values into the result
	Return result

**Space/Time Complexity**
	Space: O(n)
	Time: O(n) where n is the sum of the lengths of all the strings
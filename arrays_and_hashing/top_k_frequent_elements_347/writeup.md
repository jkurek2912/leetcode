https://leetcode.com/problems/top-k-frequent-elements/

**Data Structures**
	Hashmap
	Vector of vectors of ints

**Solution**
	Create a hashmap that maps the frequency of each element in the array
	Create a vector of vectors with size of input array + 1
	At each position i of this vector, we will store another vector with all the array elements that appear in the input array i times
	Loop through the input array and create the frequency hash map
	Loop through the map and get the frequency and value of each position
	Place the map element at the back of the vector corresponding to its frequency
	Create a vector of ints to store the result
	Loop through the frequency vector, back to front with i
	Loop through the vector stored at frequency[i], and while the result vector size is less than k, add this element to the result vector
	Once the result vector size is equal to k, return the result vector
	This will give us a result vector of the k most frequent elements from the input array

**Space/Time Complexity**
	Space: O(n)
	Time: O(n)
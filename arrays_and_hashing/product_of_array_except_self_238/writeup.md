https://leetcode.com/problems/product-of-array-except-self/

**Data Structures**
	Prefix/Postfix Array

**Solution**
	Create a result vector with size of the input vector
	Store the prefix product of the input vector in the result vector
	Then loop backwards over the result vector and multiply the prefix product by a postfix product
	The result vector will then store the product of the prefix and postfix products at each element, which are the products of the left and right side of each element without including that specific element. 

**Space/Time Complexity**
	Space: O(1)
	Time: O(n)
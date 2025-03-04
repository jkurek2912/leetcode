https://leetcode.com/problems/encode-and-decode-strings/description/

**Data Structures**
	NA

**Solution**
	**Encode**
		Create an empty string result
		Loop through the vector of strings
		Add the size of the string to the result vector using to_string
		Add a '#' to the string. This will be used to separate strings and their lengths from each other
		Add the string itself to the result string
		Return result
	**Decode**
		Create a result vector
		While loop through input string with i
		Parse out length of word by using a while loop with j until the index of the word is a '#'
		Use substr and stoi to get the length of the word, starting at i and going until j - i 
		Parse out the word using substr from j +1 to the length found earlier
		Add this word to the result vector
		Return the vector after the outer while loop
		
**Space/Time Complexity**
	Space: O(1)
	Time: O(n) where n is the length of the encoded string
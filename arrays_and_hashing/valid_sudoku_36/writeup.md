https://leetcode.com/problems/valid-sudoku/

**Data Structures**
	Set

**Solution**
	Loop through the board 3 times, checking if there are duplicates on the rows, columns, and inner squares using a set

**Space/Time Complexity**
	Space: O(n)
	Time: O(n)
	(Technically since the sudoku board is bounded to be 9x9 both space and time complexity is constant)
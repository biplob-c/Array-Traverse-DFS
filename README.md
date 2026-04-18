# Array-Traverse-DFS

You are given an array of integers.
Starting from the first index (index 0), you need to travese the array by moving either forward or backward, altering directions at each step.

The goal is to calculate the sum of absolute difference between consecutive elements in the path.
You need to find the number of unique sums for all valid paths.

## Input
An integer n representing the size of the array.
An array arr of n integers.

## Output:
An integer representing the number of unique sums for all valid paths.

## Constraints:
2 <= n <= 100

0 <= arr[i] <= 1000

## Example:
### Input
6
0 1 2 3 4 5 

### Output
5

### Explanation

Valid paths and their sums:

0 -> 1 -> 2 -> 3 -> 4 -> 5: Sum = 1 + 1 + 1 + 1 + 1 = 5

0 -> 1 -> 2 -> 3 -> 4:  Sum = 1 + 1 + 1 + 1 = 4

0 -> 1 -> 2 -> 3: Sum = 1 + 1 + 1 = 3

0 -> 1 -> 2: Sum = 1 + 1 = 2

0 -> 1: Sum = 1

0 -> 5: Sum = 5

**Unique sums:** {1, 2, 3, 4, 5, 5} -> Count = 5

### Note
You must alternate directions at each step.
For example, if you move forward from index 0, the next move must be backward, and vice versa.
You cannot visit the same index more that once in a single path.

### Your Task
Write a program to solve this problem effeciently. Use recursion of any other approach to explore all valid paths and calculate the number of unique sums.


'




- **Example**
  - GitHub Issues (with label-based and title-based detection)
  - Google Play Store reviews
  - Fallback detection for repositories without labels


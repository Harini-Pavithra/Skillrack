Given an integer array of size N as input, 
the program must print the array element which is the factor of 
the maximum number of other elements in the array. If more than one such elements are present, 
then print the smallest element as the output.
If every element of the array is co-prime to other elements, then print ‘-1’ as output.
Example Input/Output 1:
Input:
4
32 3 16 8

Output:
8

Explanation:
8 is a factor of 16 and 32.
16 is a factor of 32.
3 and 32 are not factors of any elements of the array.
Hence the output is 8.

Example Input/Output 2:
Input:
10
11 2 17 3 5 13 7 19 23 29

Output:
-1

Explanation:
Since every element of the array is co-prime to other elements, the output is -1.

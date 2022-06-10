An N*N grid is passed as input to the program. 
There are bombs planted in the grid. Each bomb is detonated and destroys all 
the blocks in its explosion radius (If the radius is 1, the bomb can destroy all the 8 blocks surrounding it). 
There are people inside the grid represented by P. The bombs are represented by an integer which is
the explosion radius of the bombs. 
The program must print the number of survivors after the explosion of all bombs

Input Format:
The first line contains N
The next N lines contain N characters each.

Output Format:
The first line contains the count of survivors.

Example Input/Output 1:
Input:
6
**P***
****P*
*P*1**
*****P
***P*P
***PP2

Output:
2

Explanation:
After explosion the grid becomes (X represents exploded area),
**P***
**XXX*
*PX1X*
**XXXX
***XXX
***XX2

Example Input/Output 2:
Input:
6
*2*P**
******
*P*1P*
*P****
*****P
*1*P**

Output:
3

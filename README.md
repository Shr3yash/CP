# CP
SheSellsSeaShellsByTheSeaShore

[Template for all combination problems in C++](https://leetcode.com/problems/combination-sum-iv/discuss/85120/C++-template-for-ALL-Combination-Problem-Set)


Stephan Pochmann's BRILLIANCY in game of life prob: 


    for( i 0->m )

      for( j 0->n )

        for( x = max(i-1, 0); x<min(i+2, m); ++x);

        for( y = max(j-1, 0); y<min(j+2, m); ++y);
        
We are checking all 8 surrounding cells around along with i,j 



Since the board has ints but only the 1-bit is used, I use the 2-bit to store the new state. At the end, replace the old state with the new state by shifting all values one bit to the right.

Note that the count counts the live ones among a cell's neighbors and the cell itself. Starting with int count = -board[i][j] counts only the live neighbors and allows the neat

if ((count | board[i][j]) == 3)

<h1> Randomm </h1>

![image](https://user-images.githubusercontent.com/60093808/164612600-da7a90c4-1d11-4544-9cfa-7f87168392b4.png)


![image](https://user-images.githubusercontent.com/60093808/165371708-222c4cca-693f-47bc-a081-a3b8e98a1792.png)

![image](https://user-images.githubusercontent.com/60093808/168014521-b46e7839-8faa-42bc-82ba-9332c05cc391.png)

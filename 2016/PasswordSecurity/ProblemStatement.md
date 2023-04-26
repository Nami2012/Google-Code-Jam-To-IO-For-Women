Problem
You just bought your young nephew Andrey a complete set of 26 English wooden alphabet letters from A to Z. Because the letters come in a long, linear package, they appear to spell out a 26-letter message.

You use N different passwords to log into your various online accounts, and you are concerned that this message might coincidentally include one or more of them. Can you find any arrangement of the 26 letters, such that no password appears in the message as a continuous substring?

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each consists of one line with an integer N, and then another line with N different strings of uppercase English letters P1, P2, ..., PN, which are the passwords.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is a permutation of the entire uppercase English alphabet that contains no password as a continuous substring, or the word IMPOSSIBLE if there is no such permutation.

Limits
1 ≤ T ≤ 100.
Time limit: 20 seconds per test set.
Memory limit: 1GB.
1 ≤ length of Pi ≤ 26, for all i. (Each password is between 1 and 26 letters long.)
Pi ≠ Pj for all i ≠ j. (All passwords are different.)
Small dataset 1 (Test set 1 - Visible)
N = 1.
Small dataset 2 (Test set 2 - Visible)
1 ≤ N ≤ 50.
Sample

Input
 	
7
1
ABCDEFGHIJKLMNOPQRSTUVWXYZ
1
X
1
QQ
5
XYZ GCJ OMG LMAO JK
3
AB YZ NM
6
C PYTHON GO PERL RUBY JS
2
SUBDERMATOGLYPHIC UNCOPYRIGHTABLES

  


Output
 
Case #1: QWERTYUIOPASDFGHJKLZXCVBNM
Case #2: IMPOSSIBLE
Case #3: ABCDEFGHIJKLMNOPQRSTUVWXYZ
Case #4: ABCDEFGHIKLMNOPQRSTUVWXYJZ
Case #5: ZYXWVUTSRQPOMNLKJIHGFEDCBA
Case #6: IMPOSSIBLE
Case #7: THEQUICKBROWNFXJMPSVLAZYDG

  
For each of the non-IMPOSSIBLE cases, the sample output shows only one possible answer. There are many valid answers for these inputs.

Note that only sample cases #1, #2, and #3 would appear in Small dataset 1. Any of the sample cases could appear in Small dataset 2.
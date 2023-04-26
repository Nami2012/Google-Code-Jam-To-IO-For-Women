Problem
You have a special balance scale, with two pans (left and right) that are both initially empty. You also have a box of identical 1-gram marbles. There are N of these marbles, and the marbles are numbered from 1 to N.

Your scale is very sensitive, and you know that if the total weight on the left pan and the total weight on the right pan ever differ by strictly more than 1 gram, the scale will break. For example, if at some point there are 4 marbles in one of the pans, there must be either 3, 4, or 5 marbles in the other pan.

Your friend Libra has challenged you to do the following, without breaking the scale at any point:

First, put all of the marbles on the scale one at a time, in numerical order: marble 1, then marble 2, and so on up to marble N. For each marble, you choose whether to place it on the left pan or on the right pan.
Then, remove all of the marbles from the scale one at a time, in an order A1, A2, ..., AN specified by your friend. This order is a permutation of 1, 2, ..., N. The i-th marble you remove must be the marble numbered Ai.
Can you find a way to do this?

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with one line with an integer N: the number of marbles. Then, there is one more line with N integers A1, A2, ..., AN, which constitute a permutation of the first N natural numbers. The marble numbered Ai must be the i-th marble that you remove in the removal phase.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is a string of N characters. The i-th of these characters (counting starting from 1) should be uppercase L if the i-th numbered marble should be put on the left pan, or uppercase R if it should be put on the right pan.

It is guaranteed that at least one answer exists. If there are multiple valid answers, you may output any one of them.

Limits
Time limit: 20 seconds per test set.
Memory limit: 1GB.
1 ≤ T ≤ 100.
1 ≤ Ai ≤ N, for all i.
Ai ≠ Aj for all i ≠ j.
Test set 1 (Visible Verdict)
2 ≤ N ≤ 16.
N is even.
Test set 2 (Hidden Verdict)
2 ≤ N ≤ 1000.
N is even.
Test set 3 (Hidden Verdict)
1 ≤ N ≤ 1000.
Sample

Input
 	
Output
 
2
4
3 1 2 4
4
1 2 3 4

  
Case #1: LRRL
Case #2: LRLR

  
In Sample Case #1, we will put marble 1 on the left pan, then put marble 2 on the right pan, then put marble 3 on the right pan, then put marble 4 on the left pan. Notice that the total weights on the left and right pans — (1, 0), (1, 1), (1, 2), and (2, 2) — never differ by more than 1 throughout this process.

Then, we must remove the marbles in the order 3, 1, 2, 4. Again, the total weights on the left and right pans — (2, 1), (1, 1), (1, 0), (0, 0) — never differ by more than 1 at any point. We have succeeded!

Also notice that RLLR would be a valid answer for this case, per the same reasoning above (but with the two pans swapped).

Notice that the following are examples of invalid answers for this case:

LLRR: breaks the scale when placing marble 2
LRLR: breaks the scale when removing marble 1 (which is the second marble to be removed)
Although there are no samples with odd N (since that is only possible in Test Set 3), here are some examples:

1: Either L or R would be acceptable.
2 3 1: LRR and RLL are the only acceptable answers. LLL, LLR, RRL, and RRR would break the scale during the placement phase. LRL and RLR would break the scale during the removal phase.
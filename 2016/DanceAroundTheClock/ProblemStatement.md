Problem
The owner of a prestigious ballroom has painted a beautiful circular clock on the dance floor, and a group of D dancers numbered 1 through D are about to literally "dance around the clock". They are standing in a circle, with dancer 1 at the 12:00 position of the circle and the other dancers going clockwise around the circle in increasing numerical order. The number of dancers is even.

The dance will go on for N turns. On the i-th turn (counting starting from 1), the following will happen:

If i is odd, then the dancer currently at the 12:00 position will swap positions with the next dancer in clockwise order. Then, going past those two, the next pair of dancers in clockwise order will swap positions, and so on, all the way around the ring clockwise, until all dancers have participated in exactly one swap.
If i is even, then the dancer currently at the 12:00 position will swap positions with the next dancer in counterclockwise order. Then, going past those two, the next pair of dancers in counterclockwise order will swap positions, and so on, all the way around the ring counterclockwise, until all dancers have participated in a swap.
Which two dancers will be next to dancer number K when the dance is over?

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each consists of one line with three integers D, K, and N: the total number of dancers, the number of one of the dancers, and the number of turns the dance will go on for.

Output
For each test case, output one line containing Case #x: y z, where:

x is the test case number (starting from 1).
y is the number of the dancer who will be standing to dancer number K's left (that is, one step away in clockwise order) when the dance is over.
z is the number of the dancer who will be standing to dancer number K's right (that is, one step away in counterclockwise order) when the dance is over.
Limits
1 ≤ T ≤ 100.
Time limit: 20 seconds per test set.
Memory limit: 1GB.
D is even.
1 ≤ K ≤ D.
Small dataset (Test set 1 - Visible)
4 ≤ D ≤ 10.
1 ≤ N ≤ 10.
Large dataset (Test set 2 - Hidden)
4 ≤ D ≤ 108.
1 ≤ N ≤ 108.
Sample

Input
 	
Output
 
3
8 3 1
8 4 2
4 1 8

  
Case #1: 6 4
Case #2: 1 7
Case #3: 2 4


  
For Cases #1 and #2, refer to the illustration above. In Case #1, after 1 turn, dancer 6 is to dancer 3's left, and dancer 4 is to dancer 3's right. In Case #2, after 2 turns, dancer 1 is to dancer 4's left, and dancer 7 is to dancer 4's right. Remember that you're looking from the dancer's perspective; it may help to think in terms of clockwise and counterclockwise instead of left and right.

In Case #3, after eight turns, the arrangement looks the same as the initial arrangement, with dancer 2 to dancer 1's left, and dancer 4 to dancer 1's right.
Problem
After Apricot Rules LLC went through a reorganization, a new large team was formed containing M
 managers and N
 non-managers. Since many people within the team do not know each other, a number of introduction sessions are to be scheduled. We know exactly which pairs of members already know each other.

The introduction sessions are organized into time slots that take 1
 minute. The first time slot starts at 8:00 AM and ends at 8:01 AM. The i
-th time slot starts i−1
 minutes after 8:00 AM and ends i
 minutes after 8:00 AM. During each time slot, there can be one or more introduction sessions. A team member can be assigned to at most one introduction session per time slot. Each introduction session must have exactly three members: an assigned manager a
 who must be a manager and two others b
 and c
 who can be managers or non-managers. The assigned manager a
 must already know b
 and c
 for the session to be scheduled. After the introduction session, b
 and c
 are considered to know each other too. If b
 and/or c
 are managers, either of them can be the assigned manager of a future introduction session that includes both.

For some pairs of people in the team, we want to know the shortest time that is needed for them to finally know each other, or whether it is impossible for that to happen through the described process. If two people know each other before any introduction sessions happen, we define that shortest time to be 0
 minutes.

Even though we are interested in multiple pairs of people, we are considering the situations independently. That is, the minimum time for each pair can depend on a specific organization of the introduction that is particular to that pair only.

Input
The first line of the input gives the number of test cases, T
. T
 test cases follow. Each test case begins with a line containing three integers M
, N
, and P
: the number of managers on the new team, the number of non-managers on the new team, and the number of pairs of team members we are going to ask about, respectively. Managers are numbered from 1 through M
 and non-managers are numbered from M+1
 through M+N
. Then, M+N
 lines follow with M+N
 characters each. The j-th character on the i-th of these lines Ci,j
 is Y if team members i
 and j
 know each other before the introduction process starts, and N otherwise. Then, there are P
 more lines; the k
-th of which contains a pair of integers Ak
 and Bk
 each, representing the team member numbers of the k
-th pair we are interested in.

Output
For each test case, output one line containing Case #x
: y1 y2 y3⋯yP
, where x
 is the test case number (starting from 1) and yi
 is −1
 if team members Ak
 and Bk
 cannot get to know each other, or the shortest amount of time (in minutes) since the process starts until they do.

Limits
Memory limit: 1 GB.
1≤T≤100
.
Ci,j
 is either uppercase Y or uppercase N, for all i,j
.
Ci,j
 = Cj,i
, for all i,j
.
Ci,i
 = Y, for all i
. (Team members know themselves.)
1≤Ak<Bk≤M+N
, for all k
.
(Ak,Bk)≠(Aℓ,Bℓ)
, for all k≠ℓ
. (No pair of team members is asked about twice.)
Test Set 1 (Visible Verdict)
Time limit: 20 seconds.
1≤M≤3
.
1≤N≤2
.
1≤P≤3
.
Test Set 2 (Hidden Verdict)
Time limit: 40 seconds.
1≤M≤50
.
1≤N≤50
.
1≤P≤100
.
Sample
Note: there are additional samples that are not run on submissions down below.
Sample Input
save_alt
content_copy
3
2 2 3
YYYY
YYNN
YNYN
YNNY
2 3
2 4
1 4
3 2 2
YYYNN
YYNYN
YNYNY
NYNYN
NNYNY
2 5
4 5
1 1 1
YN
NY
1 2
Sample Output
save_alt
content_copy
Case #1: 1 1 0
Case #2: 2 3
Case #3: -1
In Sample Case #1, manager 1
 knows everybody else at the start, and there are no other pairs of people that know each other. Therefore, any pair that includes manager 1
 has 0
 as a result, since they know each other from the start. On the other hand, for any pair that does not include manager 1
, the two people do not know each other from the start, but can be introduced during the first time slot by manager 1
. Notice that the scenarios for the first two pairs considered independently.

In Sample Case #2, manager 2
 and non-manager 5
 do not know each other, nor do they know anyone who knows both of them, so the minimum time for them to be introduced is at least 2
 minutes. One way for them to be introduced after exactly 2 minutes is for manager 3
 to introduce manager 1
 and non-manager 5
 during the first time slot, after which manager 1
 can introduce manager 2
 and non-manager 5
 in the second time slot. For the second pair, we can start the same way to introduce manager 2
 and non-manager 5
 in 2 minutes and then, manager 2
 can introduce non-managers 4
 and 5
 in the third time slot, so 3
 minutes is an upper bound for introducing the pair of 4
 and 5
. It is impossible to do this quicker.

In Sample Case #3, neither person in the new team knows the other, so no introductions are possible.


Additional Sample - Test Set 2
The following additional sample fits the limits of Test Set 2. It will not be run against your submitted solutions.
Sample Input
1
5 1 1
YYNNNN
YYYNNN
NYYYNN
NNYYYN
NNNYYY
NNNNYY
1 6
Sample Output
Case #1: 3
In this additional Sample Case, manager 2
 can introduce managers 1
 and 3
 in the first time slot, while at the same time manager 5
 can introduce manager 4
 and non-manager 6
. Then, manager 3
 can introduce managers 1
 and 4
 in the second time slot, and finally manager 4
 can introduce manager 1
 and non-manager 6
 in the third time slot.
Problem
It is the eve of Saturnalia in the Roman Empire, and Caterina is preparing the stables for the next day's chariot race. Part of her job is to write instructions and notes, print them on her printer (she's ahead of her time), and put them on the stable walls. That's simple, but because Saturnalia is an important festival, she wants to make them beautiful. Caterina needs a computer program that reads a message and outputs it back, decorated with a box. The program needs to be able to handle many messages at once. Can you help her?

Input
The first line of the input gives the number of test cases, T. T lines follow. Each line contains a text message.

Output
For each test case, output four lines. The first one should contain "Case #x:", where x is the test case number (starting from 1). The next 3 lines should contain the original message surrounded by a box of '+', '-', and '|' characters, with a space character added on each side of the message. See examples below for the exact formatting requirements. Pay special attention to the spaces.

Limits
Small dataset (Test set 1 - Visible)
1 ≤ T ≤ 100.
Time limit: 20 seconds.
Memory limit: 1 GB.
Each input line will contain between 1 and 70 characters.
Each character will either be an English letter, a space, or one of the following punctuation characters: ,?!'. (comma, question mark, exclamation point, apostrophe, or period).

Sample

Input
 	
5
Merry Saturnalia, Giovanni!
Equus, you're the best!
Caballus, you try really hard!
   
w

  


Output
 
Case #1:
+-----------------------------+
| Merry Saturnalia, Giovanni! |
+-----------------------------+
Case #2:
+-------------------------+
| Equus, you're the best! |
+-------------------------+
Case #3:
+--------------------------------+
| Caballus, you try really hard! |
+--------------------------------+
Case #4:
+-----+
|     |
+-----+
Case #5:
+---+
| w |
+---+
  
Note that the input for Case #4 is a line with 3 space characters on it, so the output is a box with five space characters inside.
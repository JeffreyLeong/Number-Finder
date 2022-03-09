# Lab Assignment 6
 CIS-054


Description
Write a program that reads numbers from files with various kinds of characters including alphabets and outputs the numbers to the terminal (i.e using cout).

Bonus (25 points)
The main function consists of <= 15 lines of code because of the use of functions (20 points)
The program will output the numbers also to a file named numbers.txt. (5 points)
Demo
Welcome to Number Finder!
===========================
Which file do you want us to find numbers at?
test3.txt

test3.txt is not found.
---

Which file do you want us to find numbers at?
test2.txt

We found the following magic numbers in test2.txt:
87 98.5 4 9 0 94.3 98.4 84 
------

Do you want to process another file?
y

Which file do you want us to find numbers at?
test1.txt

We found the following magic numbers in test1.txt:
87 98.5 4 9 0 94.3 98.4 84 
------

Do you want to process another file?
n

Thank you for using Number Finder! Bye for now! 
In the above example, both test1.txt  Download test1.txtand test2.txt contains:

dsfj  kdf     87  98.5 4vb
jfkd 9            jfkds000    94.3hjf
        98.4    jd84.    kfd
Requirements
The program will ask user for an input file name.
The program checks if the input file exists, and prompts user again for file name input if there's a problem.
Program outputs to either the terminal, and/or to a file named "numbers.txt" for bonus points.
The program will ask user if they want to process another file
Appropriate program and function headers, if applicable. Include your names.
Tips
Create your own test files to test your program. Use different input file names. Here is one to get you started: test1.txt  Download test1.txt.
One step at a time. Make sure you can read a file first. How do you make sure the program can read a file? ;) This in itself can be lab6-0 practice lab ;)
A file stream is like a river. Characters are all floating towards one direction in the same order. Once you pick up the first character, the second character in line will be waiting for you to pick it up next.  But you also can put the character you just picked up back into the river if you need to.
The syntax to get an integer from terminal and an input file stream is exactly the same.
Here are some of the predefined functions covered in this or previous modules that you might find a use in this lab:
For file streams: open, close, fail
For input file streams: eof, get, putback, >>
For output file: put, <<
To check the type of a character: isdigit, isalpha
If there are more than 60 lines of code in your program (without functions), maybe there is a simpler algorithm.
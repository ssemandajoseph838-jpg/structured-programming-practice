# CSC1101 Structured Programming Practice

## Program 1 – Basic Output

**Textbook reference:**  
Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.9(a).

**Problem description:**  
Create a C program that displays information about the Structured Programming course and GitHub practice assignment on separate lines.

**Concepts used:**  
- printf()
- main()
- newline character (\n)

**How the program works:**  
The program begins execution in the main function. It uses four printf statements to display three lines of information. Each printf statement contains a newline character so that the next message appears on a new line.

**Example run:**

Uganda Christian University  
Structured Programming  
Learning C programming step by step.

## Program 2 – Input Process Output

**Textbook reference:**  
Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.16.

**Problem description:**  
Create a C program that asks a student to enter marks for three subjects, calculates the total and average mark, and displays the results.

**Concepts used:**  
- variables
- scanf()
- printf()
- arithmetic operators
- integer and float data types

**How the program works:**  
The program asks the user to enter three subject marks. Each mark is stored in a variable. The three marks are added together to calculate the total. The total is then divided by 3.0 to calculate the average. Finally, the program displays both the total and the average.

**Example run:**

Enter mark for Subject 1: 76  
Enter mark for Subject 2: 68  
Enter mark for Subject 3: 81  

Total mark: 225  
Average mark: 75.00

## Program 3 – Decision

**Textbook reference:**  
Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.22.

**Problem description:**  
Create a C program that asks the user to enter a student's mark and determines whether the student passed or failed.

**Concepts used:**  
- integer variable
- scanf()
- printf()
- if statement
- else statement
- relational operator >=

**How the program works:**  
The program reads a student's mark from the user and stores it in a variable. It then checks whether the mark is greater than or equal to 50. If the condition is true, the program displays that the student passed. Otherwise, it displays that the student failed.

**Example run:**

Enter student's mark: 73  
The student passed.

## Program 4 – Basic Loop

**Textbook reference:**  
Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.7.

**Problem description:**  
Create a C program that uses a for loop to display all even numbers from 2 to 20.

**Concepts used:**  
- for loop
- integer variable
- printf()


**How the program works:**  
The program starts the variable number at 2. A for loop repeats while number is less than or equal to 20. After each repetition, 2 is added to number. During every repetition, the current value of number is displayed.

**Example run:**

Even numbers from 2 to 20:  
2 4 6 8 10 12 14 16 18 20

## Program 5 – Loop with Calculation

**Textbook reference:**  
Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.11.

**Problem description:**  
Create a C program that uses a for loop to calculate and display the sum of all multiples of 5 from 5 to 50.

**Concepts used:**  
- for loop
- integer variables
- arithmetic
- accumulator
- loop control variable
- printf()

**How the program works:**  
The program begins with the sum variable set to zero. A for loop starts the number variable at 5 and increases it by 5 after every repetition. During each repetition, the current value of number is added to sum. The loop stops after 50, and the final sum is displayed.

**Example run:**

The sum of multiples of 5 from 5 to 50 is 275

## Program 6 – Loop with User Input

**Textbook reference:**  
Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.9.

**Problem description:**  
Create a C program that asks the user to enter the number of hours studied on each of five days. The program repeatedly collects and displays each value.

**Concepts used:**  
- for loop
- scanf()
- printf()
- integer variables
  

**How the program works:**  
The program uses a for loop that repeats five times. During each repetition, the user enters the number of hours studied for that day using scanf(). The program then displays the value entered before continuing to the next day.

**Example run:**

Enter study hours for day 1: 2  
Day 1 study hours: 2  

Enter study hours for day 2: 3  
Day 2 study hours: 3  

Enter study hours for day 3: 1  
Day 3 study hours: 1  

Enter study hours for day 4: 4  
Day 4 study hours: 4  

Enter study hours for day 5: 2  
Day 5 study hours: 2

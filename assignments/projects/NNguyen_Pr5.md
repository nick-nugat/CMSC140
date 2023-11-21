# Cases
## Case 1
![[Pasted image 20230803222832.png]]

## Case 2
![[Pasted image 20230803222810.png]]

## Case 3
![[Pasted image 20230803223017.png]]

## Case 4
![[Pasted image 20230803223112.png]]


# Pseudocode
Global Constants: ROWS, COLS, MIN, MAX

Function Definitions:
1. fillArray(arrayRow1[], arrayRow2[], arrayRow3[], size)
2. showArray(arrayRow1[], arrayRow2[], arrayRow3[], size)
3. isMagicSquare(arrayRow1[], arrayRow2[], arrayRow3[], size)
4. checkRange(arrayRow1[], arrayRow2[], arrayRow3[], size, min, max)
5. checkUnique(arrayRow1[], arrayRow2[], arrayRow3[], size)
6. checkRowSum(arrayRow1[], arrayRow2[], arrayRow3[], size)
7. checkColSum(arrayRow1[], arrayRow2[], arrayRow3[], size)
8. checkDiagSum(arrayRow1[], arrayRow2[], arrayRow3[], size)

Main Function:
1. Declare variables: temp (bool), input (char), magicArrayRow1[COLS], magicArrayRow2[COLS], magicArrayRow3[COLS], size = COLS
2. Display welcome message and instructions to the user
3. Start a do-while loop:
   a. Call fillArray function to input numbers for each row and column of the 2D array
   b. Call showArray function to display the filled 2D array
   c. Check if the array is a Lo Shu magic square using isMagicSquare function
   d. Display the result (Lo Shu magic square or not)
   e. Ask the user if they want to try again (Y/N) and store the input in 'input'
4. Repeat the loop while the input is 'Y' or 'y'
5. Display programmer information and due date

Function fillArray(arrayRow1[], arrayRow2[], arrayRow3[], size):
1. Loop through each row and column:
   a. Input a number for row 1, column i+1, and store it in arrayRow1[i]
   b. Input a number for row 2, column i+1, and store it in arrayRow2[i]
   c. Input a number for row 3, column i+1, and store it in arrayRow3[i]

Function showArray(arrayRow1[], arrayRow2[], arrayRow3[], size):
1. Loop through each row and print the elements of arrayRow1, arrayRow2, and arrayRow3 separated by spaces

Function isMagicSquare(arrayRow1[], arrayRow2[], arrayRow3[], size):
1. Return the logical AND of the results from checkRange, checkUnique, checkRowSum, checkColSum, and checkDiagSum functions

Function checkRange(arrayRow1[], arrayRow2[], arrayRow3[], size, min, max):
1. Loop through each element in the arrays:
   a. If any element is less than min or greater than max, return false
2. Return true if all elements are within the given range

Function checkUnique(arrayRow1[], arrayRow2[], arrayRow3[], size):
1. Declare and initialize an array of booleans called 'unique' with size 9
2. Loop through each row and column of the 2D array:
   a. Check if the element - 1 is already marked as true in the 'unique' array, if yes, return false
   b. Otherwise, mark the element - 1 as true in the 'unique' array
3. Return true if all elements are unique, else return false

Function checkRowSum(arrayRow1[], arrayRow2[], arrayRow3[], size):
1. Calculate the sum of elements in each row and store them in sum1, sum2, and sum3
2. Return true if sum1, sum2, and sum3 are equal, else return false

Function checkColSum(arrayRow1[], arrayRow2[], arrayRow3[], size):
1. Calculate the sum of elements in each column and store them in sum1, sum2, and sum3
2. Return true if sum1, sum2, and sum3 are equal, else return false

Function checkDiagSum(arrayRow1[], arrayRow2[], arrayRow3[], size):
1. Calculate the sum of elements in the main diagonal and store it in sum1
2. Calculate the sum of elements in the anti-diagonal and store it in sum2
3. Return true if sum1 and sum2 are equal, else return false

# Flowchart
![[NNguyen_Pr5.png|1000]]
# Questions to answer
> [!question] Write about your Learning Experience, highlighting your lessons learned and learning experience from working on this project.
> I had a pretty good learning experience with this project. I got to do more practice with `do-while` loops - they're something I'm still working on implementing into my coding more when needed.


> [!question] What have you learned?
> I've learned persistence and determination from this project. I also learned how to troubleshoot through code more efficiently.


> [!question] What did you struggle with?
> I struggled a lot with getting my code to properly validate whether my array was a Lo Shu magic square or not since it kept saying that all of my arrays weren't. Initially, I thought it was the `isMagicSquare()` but eventually, I figured out that it was the functions being called inside said function that was returning the wrong things. 


> [!question] What would you do differently on your next project?
> N/A


> [!question] What parts of this assignment were you successful with, and what parts (if any) were you not successful with?
> I was successful with writing my code. However, I had a lot of trouble on my pseudocode and flowcharts, as usual. 


> [!question] Provide any additional resources/links/videos you used to while working on this assignment/project.
> N/A

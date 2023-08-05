## Pseudocode
1. `getNumOfEmployees()`
   - Input: None
   - Output: `employees` (integer)
   - Display "How many employees are in the company?"
   - Read `employees` from the user
   - Return `employees`
2. `getTotalDaysAbsent(employees)`
   - Input: `employees` (integer)
   - Output: `totalDaysMissed` (integer)
   - Initialize `totalDaysMissed` to 0
   - Open "employeeAbsences.txt" for writing
   - Write "EMPLOYEE ABSENCE REPORT" to the file
   - Loop for each employee `i` from 1 to `employees`
     - Read `employeeID` and `daysMissed` from the user
     - Validate `daysMissed` to ensure it is not negative
     - Write `employeeID` and `daysMissed` to "employeeAbsences.txt"
     - Update `totalDaysMissed` by adding `daysMissed`
   - Write "The `employees` employees were absent a total of `totalDaysMissed` days." to the file
   - Close "employeeAbsences.txt"
   - Return `totalDaysMissed`
3. `calculateAvgDaysAbsent(employees, totalDaysMissed)`
   - Input: `employees` (integer), `totalDaysMissed` (integer)
   - Output: `avgDaysAbsent` (double)
   - Calculate `avgDaysAbsent` as `totalDaysMissed / employees`
   - Return `avgDaysAbsent`
4. `main()`
   - Input: None
   - Output: None
   - Declare variables: `employees` (integer), `totalDaysMissed` (integer), `avgDaysAbsent` (double)
   - Display "Calculate the average numbers of days a company's employees have been absent."
   - Call `getNumOfEmployees()` and store the result in `employees`
   - Call `getTotalDaysAbsent(employees)` and store the result in `totalDaysMissed`
   - Call `calculateAvgDaysAbsent(employees, totalDaysMissed)` and store the result in `avgDaysAbsent`
   - Open "employeeAbsences.txt" for appending
   - Write "The average number of days absent is `avgDaysAbsent`" to the file
   - Write "Class: CMSC140 CRN 40375", "Assignment: Project 4", "Programmer: Nicholas Nguyen", "Due Date: 07/24/2023" to the file
   - Close "employeeAbsences.txt"
5. Call `main()` to start the program.

## Test plan table
![[Pasted image 20230722154603.png|500]]

## Cases
### Case 1
![[Pasted image 20230722155017.png]]

### Case 2
![[Pasted image 20230722155122.png]]
## Flowchart
![[NNguyen_Pr4.png|900]]


## Questions to answer
> [!question] Write about your Learning Experience, highlighting your lessons learned and learning experience from working on this project.
> My learning experience with this project was pretty cool and I enjoyed coding it. I got some more experience with dealing with the fstream library. To me, it's pretty cool to know that I can code something that can read in user input and write it to a text file.


> [!question] What have you learned?
> Coding this project, I learned that it's possible to declare prototypes for functions, preventing issues with calling functions before they are declared. Doing so also provides me with a reminder of all the functions I need to implement later on in my code.


> [!question] What did you struggle with?
> I struggled with working with all the variables needed in this project. I debated on whether or not to use global variables, only to realize that that probably wouldn't be the best solution. Instead, inside each function (including the main function), I declared the variables I needed only.  I also struggled with figuring out how to get all the text to output to the `employeeAbsences.txt` file (some was missing previously when I ran the code).


> [!question] What would you do differently on your next project?
> N/A


> [!question] What parts of this assignment were you successful with, and what parts (if any) were you not successful with?
> I had a bit of trouble with the flowchart since I didn't really know how I should map things out. However, I feel like the code was pretty straightforward and simple for me.


> [!question] Provide any additional resources/links/videos you used to while working on this assignment/project.
> N/A

## Pseudocode
1. Initialize variables:
    - chainLocation as string
    - numberOfFloors, roomsPerFloor, totalRooms, occupiedPerType as integers
    - singleRoomsOccupied, doubleRoomsOccupied, kingRoomsOccupied, suitesOccupied as integers
    - totalOccupiedRooms, unoccupiedRooms as integers
    - priceOfSingle, priceOfDouble, priceOfKing, priceOfSuite as integers
    - leastNumberOfRooms, floorNumber as integers
    - totalIncome, occupancyRate as floats
2.  Display header and prompt for input:
    - Print header information
    - Read chainLocation from the user
    - Read numberOfFloors from the user
3. Validate numberOfFloors input:
    - If numberOfFloors is less than 1 or greater than 5, repeat until valid input is provided
        - Display an error message
        - Read numberOfFloors from the user again
4. Iterate for each floor (i) from 1 to numberOfFloors:
    - Read roomsPerFloor from the user
    - Validate roomsPerFloor input:
        - If roomsPerFloor is less than 1 or greater than 30, repeat until valid input is provided
            - Display an error message
            - Read roomsPerFloor from the user again
    - Read singleRoomsOccupied, doubleRoomsOccupied, kingRoomsOccupied, suitesOccupied from the user
    - Validate occupied rooms input:
        - If the sum of occupied rooms exceeds roomsPerFloor, repeat until valid input is provided
            - Display an error message
            - Read roomsPerFloor and occupied rooms from the user again
    - Update totalRooms, priceOfSingle, priceOfDouble, priceOfKing, priceOfSuite, totalOccupiedRooms variables accordingly
5. Display hotel information and calculations:
    - Print hotel information, including chainLocation
    - Print room rates
    - Calculate totalIncome, unoccupiedRooms, and occupancyRate
    - Print totalIncome, totalRooms, totalOccupiedRooms, unoccupiedRooms, and occupancyRate
6.  Find the floor with the least number of rooms:
    - Initialize leastNumberOfRooms and floorNumber based on the first floor
    - Iterate for each floor (i) from 2 to numberOfFloors:
        - If roomsPerFloor is less than or equal to leastNumberOfRooms, update leastNumberOfRooms and floorNumber
7. Display additional information:
    - Print the floor with the least number of rooms
8.  Print completion statements:
    - Print thank you message, programmer's name, project details, and due date
9. Return 0 to indicate successful program execution

## Flowchart
![[NNguyen_Pr3.png|1000]]

## Test plan table
 ![[Pasted image 20230716143320.png]]

## Program run examples using [[#Test plan table|test plan table]]
### Case 1 (sample)
![[Pasted image 20230716162810.png]]

### Case 2
![[Pasted image 20230716162900.png]]

### Case 3
![[Pasted image 20230716163028.png]]

___
## Questions to answer

> [!question] Write about your Learning Experience, highlighting your lessons learned and learning experience from working on this project.
> My learning experience with this project was pretty good. There was lots of coding involved considering how long and tedious this project was. Though it was pretty exhausting, it was an enjoyable experience.

> [!question] What have you learned?
>  I learned how to better utilize loops and if-else statements. I also got a chance to use more of the `setw()` function to format my text in a more organized fashion.

> [!question] What did you struggle with?
> I struggled with understanding some problems that seemed to be faults of the C++ language. One problem I had was trying to properly get certain values to print. I know from Java that the default value when an `int` is declared is 0. However, without initializing one of my variables to 0, I got an output with ludicrously large numbers. Though I never found out the reason for this error, I did find a way around it and fixed my code accordingly.

> [!question] What would you do differently on your next project?
> I wouldn't really do anything differently on my next project - I think I did a good job on this one.

> [!question] What parts of this assignment were you successful with, and what parts (if any) were you not successful with?
> I was successful with the loops and if-else statements. However, some of the calculations were a bit difficult for me.

> [!question] Provide any additional resources/links/videos you used to while working on this assignment/project.
> N/A
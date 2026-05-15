[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/Ay551EX-)
# CS1 Final Project - 49ers Quick Search Tool Project
https://youtu.be/AZPbrlvpr2A (Video Demo)
## 1. Overview
This program makes it easy to find specific player information from a football roster without looking through a text file manually. It loads a San Francisco 49ers roster from an external file, organizes the data, and lets users quickly look up players by their jersey number through a simple console menu.  

---

## 2. Design Decisions
- What fundamental programming constructs and data types did you use, and why?  
- Why did you choose to structure your data using structs?  
- How did you implement searching and sorting? What algorithms did you use and why?  
- How do you ensure data persistence between program runs?  
- Did you consider alternative approaches? If so, why did you not use them?  

---

## 3. Testing Summary
I tested the program manually by running it multiple times and entering valid inputs, invalid numbers, and incorrect data types to ensure it handles errors without crashing.

| Test Case | Expected Output | Actual Output | Pass/Fail |
| :--- | :--- | :--- | :--- |
| Enter a valid jersey number | Display correct player stats and info | Displayed correct player stats and info | Pass |
| Enter a number not on roster | Display "No player found with #" | Displayed "No player found with #" | Pass |
| Enter letters instead of a number | Display "Invalid input" and reset menu | Displayed "Invalid input" and reset menu | Pass |

---

## 4. Technical Walkthrough
The program starts in main() by running loadRoster(), which reads Rosters.txt line-by-line to fill the array. The user is then presented with a menu. Selecting option 1 triggers searchByNumber(), which prompts for a jersey number, runs a loop to find a match in the array, and prints the player's information. Option 2 ends the program after the user is done searching for players. (link is posted above for demonstration)

---

## 5. Challenges and Lessons Learned
Challenges: A major challenge was preventing an infinite loop if a user typed a letter instead of a number in the menu.

Lessons Learned: I learned how to use cin.clear() and cin.ignore() to fix input stream errors, making the console interface much more stable.

---

## 6. Future Improvements
If I had more time, I would expand the search function so users could look up players by last name. I would also add a feature to insert new players or update stats directly from the menu and save them back to the text file.

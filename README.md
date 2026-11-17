# Student Marks & Grade System (C)

A beginner-friendly menu-driven C project. It accepts marks for five subjects, calculates the total and average, and displays a grade.

## Features
- Menu created using `do-while` and `switch`
- Accepts marks for 5 subjects using a `for` loop
- Checks that each mark is between 0 and 100
- Calculates total and average
- Displays a grade using `if-else`

## Concepts used
`printf()`, `scanf()`, variables, data types, arithmetic operators, `switch`, `case`, `break`, `default`, `for`, `do-while`, and `if-else`.

## Algorithm
1. Start.
2. Declare the required variables.
3. Display the menu.
4. Read the user's choice.
5. If the choice is 1:
   - Set total to 0.
   - Repeat 5 times: read a subject mark and add it to total.
   - If a mark is outside 0–100, show an error.
   - Otherwise, calculate average and display total, average, and grade.
6. If the choice is 2, display the exit message.
7. Otherwise, display an invalid-choice message.
8. Repeat the menu until the user chooses 2.
9. Stop.

## How to run

### Using GCC (Windows, Linux, or macOS)
Open a terminal in this folder and run:

```bash
gcc main.c -o student_marks
```

Then run it:

- **Windows:** `student_marks.exe`
- **Linux/macOS:** `./student_marks`

## Example
```text
===== STUDENT MARKS & GRADE SYSTEM =====
1. Calculate marks and grade
2. Exit
Enter your choice: 1
Enter mark for subject 1 (0-100): 90
Enter mark for subject 2 (0-100): 85
Enter mark for subject 3 (0-100): 80
Enter mark for subject 4 (0-100): 95
Enter mark for subject 5 (0-100): 90

Total marks = 440/500
Average = 88.00
Grade: B
```

## Upload to GitHub
1. Sign in to GitHub and create a new repository named `student-marks-grade-system`.
2. Upload `main.c`, `README.md`, and `.gitignore` from this project folder.
3. Add a short description such as: `A beginner C project to calculate student marks and grades.`

This is a learning project. The grading thresholds are sample rules and can be changed to match your assignment.

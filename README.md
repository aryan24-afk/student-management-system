## Bug Description

Students who score between 40 and 49 marks are currently assigned
grade D.

According to the grading rules, students must score at least 50
marks to receive grade D.

## Expected Behavior

Marks below 50 should receive grade F.

Marks from 50 to 59 should receive grade D.

## Suggested Fix

Review the grade calculation logic in Student.cpp and correct
the condition for grade D.

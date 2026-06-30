# Week 4 Basic math and sequence algorithms

This folder contains the smaller programming exercises and algorithm tasks completed during Week 4 of 1st the university semester. These programs focus on user input validation, loops, math calculations, and array management in C.

## Files in this folder

* **quadratic_solver.c**
  Calculates the discriminant and solutions for a quadratic equation ax^2 + bx + c = 0 based on three integers entered by the user. Includes boundary checks for high numbers.

* **remainder_filter.c**
  Accepts three numbers (a, b, c) and outputs all positive integers within the interval (a; b] that yield a remainder of 1 when divided by c.

* **custom_fibonacci.c**
  Generates a sequence similar to the Fibonacci sequence where the user defines the initial values f0 and f1, and the program calculates the target element fc. Includes a safety check to prevent integer overflow.

* **gcd_lcm_calculator.c**
  Finds the Greatest Common Divisor (GCD) and Least Common Multiple (LCM) for three natural numbers entered by the user.

* **sequence_stats.c**
  Prompts the user for a sequence length n, accepts n real numbers, and calculates the total sum, average, minimum value, and maximum value.

* **max_digits_finder.c**
  Accepts a sequence of positive numbers until a non-positive value is entered. It uses mathematical approaches to determine which number contains the highest count of digits.

* **string_digit_counter_draft.c**
  An experimental scratchpad file testing an alternative approach to the digit-counting problem by treating inputs as strings (character arrays) instead of floating-point numbers.

## How to compile and run
Any individual exercise can be compiled using a standard C compiler like GCC.
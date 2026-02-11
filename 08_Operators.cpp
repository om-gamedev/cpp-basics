# C++ Operators – Basic Overview

Today I learned about operators in C++. Operators are symbols that perform operations on variables and values. In C++, operators are mainly divided into three types: **Arithmetic operators**, **Logical operators**, and **Assignment operators**.

---

## 1. Arithmetic Operators in C++

Arithmetic operators are used to perform mathematical calculations such as addition, subtraction, multiplication, and division.

Common arithmetic operators in C++:

* `+` → Addition (adds two values)
* `-` → Subtraction (subtracts one value from another)
* `*` → Multiplication (multiplies two values)
* `/` → Division (divides one value by another)
* `%` → Modulus (returns the remainder of a division)
* `++` → Increment (increases a value by 1)
* `--` → Decrement (decreases a value by 1)

Example:

int a = 10;
int b = 5;
int sum = a + b;   // result is 15

Arithmetic operators are important for performing calculations in programs.

---

## 2. Logical Operators in C++

Logical operators are used to compare conditions and return true or false. They are mostly used in decision-making statements like if and while.

Common logical operators:

* `&&` → Logical AND (true if both conditions are true)
* `||` → Logical OR (true if at least one condition is true)
* `!` → Logical NOT (reverses the result)

Example:

bool x = true;
bool y = false;
bool result = x && y;  // result is false

Logical operators help control program flow using conditions.

---

## 3. Assignment Operators in C++

Assignment operators are used to assign values to variables. They can also combine assignment with arithmetic operations.

Common assignment operators:

* `=` → Assign value
* `+=` → Add and assign
* `-=` → Subtract and assign
* `*=` → Multiply and assign
* `/=` → Divide and assign
* `%=` → Modulus and assign

Example:

int num = 10;
num += 5;  // num becomes 15

Assignment operators make code shorter and more efficient.

---

## Conclusion

C++ operators are essential tools for performing calculations, making decisions, and assigning values. Understanding arithmetic, logical, and assignment operators is important for writing effective C++ programs.

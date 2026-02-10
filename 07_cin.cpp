# C++ Input Using `cin >>`

Today I learned how to use **`cin >>`** in C++ to take input from the user.
`cin` is an object from the **iostream** library that is used to read data from the keyboard.

## What is `cin >>`?

`cin >>` is used to accept input and store it in variables.
The operator `>>` is called the **extraction operator**. It takes the value entered by the user and saves it into a variable.

## Basic Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "You entered: " << number;

    return 0;
}
```

## How it works

* `cout` displays a message to the user.
* `cin >> number;` waits for the user to type a value.
* The entered value is stored in the variable `number`.
* The program then prints the value back to the screen.

## Key Points

* `cin` is used for input, and `cout` is used for output.
* The variable type must match the input (int, float, char, etc.).
* Multiple inputs can be taken in one line:

```cpp
cin >> a >> b;
```

This helps in building interactive C++ programs where the user can provide data during execution.

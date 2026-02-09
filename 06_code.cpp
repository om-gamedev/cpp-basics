# C++ Program Demonstrating Global, Local and Boolean Variables

```cpp
#include <iostream>

// Global variable (can be accessed by all functions)
int glo = 6;

// Function to print the global variable
void sum() {
    int a;  // Local variable inside function
    std::cout << "Global variable inside function: " << glo << std::endl;
}

using namespace std;

int main() {

    // Local variable in main (shadows global variable)
    int glo = 9;
    glo = 78;

    // Boolean variable
    bool a = false;

    // Call the function
    sum();

    // Print local values
    cout << "Local glo in main: " << glo << endl;
    cout << "Boolean value a: " << a << endl;

    return 0;
}
```

### Explanation

* **Global variable**: `glo = 6` → accessible by all functions.
* **Local variable**: `int glo = 9` inside `main()` hides the global one.
* **Boolean variable**: `bool a = false` stores true/false values.
* `sum()` prints the global variable.
* `main()` prints local variables.



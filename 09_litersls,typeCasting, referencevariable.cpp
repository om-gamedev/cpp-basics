# C++ Floating Point Types, Literals, Type Casting & Reference Variables

## Floating Point Data Types in C++

C++ provides three main floating point data types to store decimal numbers:

### 1. float

The `float` data type is used to store single-precision decimal values. It usually takes **4 bytes** of memory and provides about **6–7 digits of precision**.

Example:

```cpp
float price = 10.5f;
```

The suffix `f` tells the compiler that the number is a float.

### 2. double

The `double` data type stores double-precision decimal values. It usually takes **8 bytes** and provides about **15 digits of precision**. It is more accurate than `float`.

Example:

```cpp
double pi = 3.1415926535;
```

### 3. long double

The `long double` type stores very large decimal numbers with higher precision than `double`. Its size depends on the system (usually 10–16 bytes).

Example:

```cpp
long double bigValue = 12345.678901234567L;
```

The suffix `L` indicates a long double literal.

---

## Literals in C++

A literal is a fixed value written directly in the code.

Examples of floating point literals:

```cpp
float a = 5.2f;        // float literal
double b = 5.2;        // double literal (default)
long double c = 5.2L;  // long double literal
```

By default, decimal numbers are treated as `double` unless specified otherwise.

---

## Type Casting in C++

Type casting is the process of converting one data type into another.

### Implicit Type Casting

This happens automatically when converting smaller types to larger types.

```cpp
int x = 5;
double y = x;  // int automatically converted to double
```

### Explicit Type Casting

This is done manually by the programmer.

```cpp
double value = 9.8;
int result = (int)value;   // converts double to int
```

Or using C++ style casting:

```cpp
int result = static_cast<int>(value);
```

---

## Reference Variables in C++

A reference variable is an alias (another name) for an existing variable. It does not create a new memory location.

Example:

```cpp
int num = 10;
int &ref = num;

ref = 20;  // changes the value of num
```

After this, both `num` and `ref` will have the value **20**.

Reference variables are useful for:

* Passing arguments to functions efficiently
* Avoiding unnecessary copying
* Improving program performance

---

## Conclusion

Understanding floating point types, literals, type casting, and reference variables is important for writing efficient C++ programs. These concepts help manage precision, memory usage, and code flexibility.

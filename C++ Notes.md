---
alias: 
- "202306071010"
---
> [[_004 School 🏫]]

# Learning C++ ✨
- `cout` - stream object
- `#include` directive results in contents of another file to be inserted into the program
	- e.g., `#include <iostream>` brings in the iostream library and would allow statements such as `cout` to be read properly

## Data types
### Integers

> [!important] Types of integers
> ![[Pasted image 20230607104837.png]]

- you can use **digit separators** to improve readability. use `'` (single quotes)
	- `int count = 1'000'000;`


### Strings
> [!important]
> - use `#include <string>` if you want to use strings (though `<iostream>` already includes this so no need to declare separately)
> - unlike Java, `string` is lowercase

### Floating point data types
![[Pasted image 20230607111358.png]]
- three types
	- `float` %%single precision%%
	- `double` %%double precision - typically twice as big as float%%
	- `long double` %%larger than double%%

### Bool value
> [!important]
> - Unlike in Java, booleans are declared as `bool` in C++
> - `true` is represented by 1, `false` is represented by 0

### Finding size of data type
- use `sizeof` operator to find if you forget
	- syntax: `sizeof(int)` - in parentheses, insert data type of name of variable

### Auto data type
- keyword `auto` tells the compiler to determine the variable's data type based on the initialization value

### Named constants
- preface code with `const` before declaring data type/initializing
- contents are **read-only**
- *similar to Java's `final` keyword*

___

## `cin` - practically equivalent of Java Scanner
- prompts user to enter value

```cpp
// C++ program to demonstrate the
// cin object
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	string s;

	// Take input using cin
	cin >> s;

	// Print output
	cout << s;

	return 0;
}

```

## Type casting
**Format**:

```cpp
static_cast<DataType>(Value)
```

**Example code**:
![[Pasted image 20230612111208.png]]


## Multiple assignments
![[Pasted image 20230612111314.png]]


___
## setw() stream manipulator
- `#include <iomanip>`
- used to set width of the space to print (cout)

## setprecision() function
- `#include <iomanip>`
- used to set amount of sig figs in a float/double
- use `fixed` keyword to only target numbers after decimal point

%%Created 2023-06-07, 10:10 AM.%%

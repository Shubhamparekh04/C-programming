/*
Q1: Purpose of the `printf()` function in C

- Used to print formatted output to the screen.
- Displays text, numbers, and other data.

Example:
```````

#include <stdio.h>
void main() {
    printf("Hello, World!\n");
}
*/

/*
Q2: Significance of escape sequence characters in C
- Represent special characters that are not easily typed or displayed.
- Start with a backslash (`\`).

Example:
```````
- `\n` - Newline
- `\t` - Tab
*/

/*
Q3: Role of the `\n` escape sequence character in C
- Represents a newline.
- Moves the cursor to the next line.

Example:
```````
printf("Hello,\nWorld!");

Output:
``````
Hello,
World!

*/

### Q4: Function of the `\t` escape sequence character in C
- Represents a horizontal tab.
- Adds a tab space in the output.

Example:
```````
printf("Hello,\tWorld!");
```
Output:
```
Hello,   World!
```

### Q5: Printing a backslash character `\` using the `printf()` function in C
- Use double backslashes `\\`.

Example:
```````
printf("This is a backslash: \\");
```
Output:
```
This is a backslash: \
```

### Q6: Concept of a basic C program
- Consists of headers, a main function, and statements.
- Example components: `#include`, `main()`, and statements within `{}`.

Example:
```````
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

### Q7: Importance of the `main()` function in a C program
- Entry point of the program.
- Where the execution starts and ends.

### Q8: Including comments in a C program
- Single-line comments: `// comment`
- Multi-line comments: `/* comment */`
- Useful for explaining code and making it more readable.

Example:
```````
// This is a single-line comment
/* This is a
   multi-line comment */
```

### Q9: Purpose of the `#include <stdio.h>` and `#include <conio.h>` directives in a C program
- `#include <stdio.h>`: Includes standard input/output library functions.
- `#include <conio.h>`: Includes console input/output functions (non-standard, used in some compilers).

### Q10: Simple C program to display “Hello, World!” followed by a new line
/**/
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```
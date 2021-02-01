# A Tutorial Introduction

| File Name | Description | 
|--- |--- |
| 01.c | |
| 02.c | |
| 03.c | |
| 04.c | |
| 05.c | |
| 06.c | |
| | |
| | |
| | |
| | |
| | |
| Exercise_1-3.c| |
| Exercise_1-4.c| |
| Exercise_1-5.c| |
| Exercise_1-6.c| |
| Exercise_1-7.c| |
| Exercise_1-8.c | |
| Exercise_1-9.c | |
| Exercise_1-10.c | |
| Exercise_1-11.c | |
| Exercise_1-12.c | |
| Exercise_1-13.c | |
| Exercise_1-14.c | |
| Exercise_1-15.c | |
| Exercise_1-16.c | |
| Exercise_1-17.c | |
| Exercise_1-18.c | |
| Exercise_1-19.c | |
| Exercise_1-20.c | |
| Exercise_1-21.c | |
| Exercise_1-22.c | |
| Exercise_1-23.c | |
| Exercise_1-24.c | |

### **->** Notes from Page-17

```c
#include <stdio.h>

/* copy input to output. */

int main(){
    int c;

    while( ( c = getchar() ) != EOF ){
        putchar(c);
    }
}
```

#### The precedence of `!=` is higher than that of `=`, which means that in the absence of parenthesis the relational test `!=` would be done before the assignment `=`. So the statement :

```c
c = getchar() != EOF
```

is equivalent to :

```c
C = ( getchar() != EOF )
```

- This has the undesired effect of setting `c` to `0` or `1`, depending on whether or not the call of getchar encountered end of file.

**The above Example is for the [file](/Chapter-01/06.c) `06.c`.**

#### **->** The value of EOF is `-1` C code file to check it is [here](/Chapter-01/Exercise_1-7.c).


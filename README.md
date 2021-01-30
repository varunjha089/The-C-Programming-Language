# The C Programming Language

The C Programming Language by Kernighan and Ritchie is awesome book to start C programming.

## Table of Content

| Chapter  | Title  |  Link  |
|---   |---   |---   |
| Chapter-01  | A tutorial Introduction                                  | [Link](/Chapter-01/)  |
| Chapter-02  | Types, Operators and Expression                          | [Link](/Chapter-02/)  |
| Chapter-03  | Control Flow                                             | [Link](/Chapter-03/)  |
| Chapter-04  | Function and Program Structure                           | [Link](/Chapter-04/)  |
| Chapter-05  | Pointers and Array                                       | [Link](/Chapter-05/)  |
| Chapter-06  | Structures                                               | [Link](/Chapter-06/)  |
| Chapter-07  | Input and Output                                         | [Link](/Chapter-07/)  |
| Chapter-08  | The UNIX System Interface                                | [Link](/Chapter-08/)  |
| Appendix A.  | Reference Manual                                        | [Link](/Appendix-A/)  |
| Appendix B.  | Standard Library                                        | [Link](/Appendix-B/)  |
| Appendix C.  | Symmary of Change                                       | [Link](/Appendix-C/)  |

## Installing the required tools
[Install vcpkg on Windows, Linux, and macOS](https://docs.microsoft.com/en-us/cpp/build/install-vcpkg?view=msvc-160&tabs=linux) has a very descriptive for evely flavour of operaing system. But for linux follow the command

```console
ubuntu@ip:~$ sudo apt-get update

ubuntu@ip:~$ sudo apt-get install build-essential tar curl zip unzip

ubuntu@ip:~$ git clone https://github.com/microsoft/vcpkg

ubuntu@ip:~$ cd vcpkg

ubuntu@ip:~$ ./bootstrap-vcpkg.sh
```

## Running a C file using command line

If the file name is `HelloWorld.c` the the command is :-

```console
ubuntu@ip:~$ cc HelloWorld.c && ./a.out
```

## Commenting in C Programme

```c
#include <stdio.h>
/* Some comments*/
int main(){
    printf("");
}
```

## C Data Types

| Data Type  | Description  |  
|---   |---   |
| int | int means the variable are listed as Integer|
| float | fload means the variable are listed as Floating Point value |
| char | char means the variable are listed as character -- a single byte |
| short | short means the variable are listed as short integer |
| long | long means the variable are listed as long integer |
| double | double means the variable are listed as double-precision floating point |


The size of these objects are machine dependent, but in general `16-bit ints` lies between `-32768` and `+32767`. A `float` number is typically a `32-bit` quantity, with at least six signigicant digits and magintude between 10^-38 and  10^38. 

## Precision in C Programme

| Precision | Description |
|--- |--- |
| %d | print as decimal integer |
| %6d | print as decimal integer, at least 6 character wide |
| %f | print as floating point|
| %6f | print as floating point, at least 6 character wide |
| %.2 | print as floating point, 2 character after decimal point |
| %6.2 | print as floating point, at least 6 wide and 2 after decimal point|

## Symbolic Constant

Syntax :- 

```c
#define name replacement text
```
Example :-

```c
#include <stdio.h>

#define LOWER 5

int main(){
    printf("%d\n", LOWER);
}
```


## Error Received While Playing in C Programme

| Error  | Cause of Error  |  
|---   |---   |
| error: expected ‘;’ before ‘}’ token | Semi-Colon is missing somewhere in programme.|
| error: expected ‘)’ before ‘;’ token | Parentheses is missing. It can happen when opening parentheses is missing also.|
| | |
| | |
| | |
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
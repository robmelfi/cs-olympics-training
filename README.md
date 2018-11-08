#### Compile/Link a Simple C++ Program - hello.cpp
We use the -o option to specify the output file name   
`g++ -o hello hello.cpp`  
`./hello`

#### More GCC Compiler Options
`g++ -Wall -g -o hello hello.cpp`
- `-o`: specifies the output executable filename.
- `-Wall`: prints "all" Warning messages.
- `-g`: generates additional symbolic debuggging information for use with gdb debugger.

#### Compile and Link Separately
Compile-only with -c option `g++ -c -Wall -g hello.cpp`  
Link object file(s) into an executable `g++ -g -o hello hello.o`  

#### Compile and Link Multiple Source Files
`g++ -o myprog file1.cpp file2.cpp`

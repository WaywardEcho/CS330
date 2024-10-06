# C++
This repository is for learning how to write in C++.
Written by Echo for CS330.

# Overview & Setup

## History
C++ was created to be a general purpose programming language in 1985. It was made by Danish computer scientist Bjarne Stroustrup. It was initially made as an extension of C. C++ is used in a lot of types of programs. This is such as search engines, OSes, game and film productions because of its high speed.

### Primary Source
As of right now, I'll be referencing W3Schools and cplusplus.

## Installation
I already had [Visual Studio Code](https://code.visualstudio.com/download) installed, so I decided to stick with it since it had extensions that supported running C++. I installed the extensions specifically related to C++ and then followed the instructions that VS Code gave that allowed the program to run C++. I had some difficulty with the terminal part of the instructions, but was able to follow along with a [YouTube video](https://www.youtube.com/watch?v=Qw5qjRNlC-Y) that Sawyer recommended.	There wasn't really a recommended programming environment that I could find made specifically for C++, but since I use Windows and already use VS Code, all of that together led me to stick with using VS Code.

### Running Programs
If using VS Code, the program (VS Code) needs to be opened in it's developer mode. From there, have a file open and then run/run and debug like any other language. For Windows, there are several options. Be sure to use the one labeled g++. After, it may ask for an exe, make sure to run with it.

## Hello World
The code below is an example of a C++ Hello World program. Copy it to see if you're able to run C++.

```
//Code is from https://en.wikibooks.org/wiki/C%2B%2B_Programming/Examples/Hello_world
// 'Hello World!' program 
 #include <iostream> 
int main()
{
  std::cout << "Hello World!" << std::endl;
  return 0;
}
```
### Comments
Use a double forward-slash "//".

## Variables - Names, Types, and Binding
C++ typically names variables in the Camel Case standard (myVar). They are case sensitive and must begin with a letter or an underscore. Adding an int and a float results in a new float. Lists cannot have mixed variable types. C++ has 97 keywords that can't be used as variable or method names. Variable names are case sensitive and must begin with a letter or an underscore. No special symbols are allowed. The camel case is optional, but it a strong convention from the community. C++ is a statically, strongly typed and explicitly typed language. It's variables are immutable.

### Operators
Arithmetic: +-*/%++-- 
Assignment: =,+=,-=,*=,/=,%=,&=,|=,^=,>>=,<<= 
Comparison: ==,!=,>,<,>=,<= 
Logical: &&, ||, !

8. Are mixed type operations allowed? If so, how are they accommodated?
Mixed operations are allowed for number variables. They typically turn into floats or doubles depending on the equation.
9. At what point are identifier names and operator symbols bound in your language?
They're bound at run time. They can be overwritten.
10. Describe the limitations (or lack thereof) of your programming language as they relate to the 
coding example portion of the assignment (adding ints and floats, storing different types in lists, 
converting between data types).  Are there other restrictions or pitfalls that the documentation 
mentions that you need to be aware of?
There are so many library imports all the time.
11. Are there built-in complex data types that are commonly used in your language? (hint: they’d 
probably appear fairly early in the documentation if so)
Strings are weirdly complicated. So are maps.


## Sources:
https://en.wikipedia.org/wiki/C%2B%2B <br/>
https://www.simplilearn.com/c-plus-plus-programming-for-beginners-article <br/>
https://www.w3schools.com/cpp/default.asp <br/>
https://www.youtube.com/watch?v=Qw5qjRNlC-Y <br/>
https://en.wikibooks.org/wiki/C%2B%2B_Programming/Examples/Hello_world <br />
https://cplusplus.com/doc/tutorial/

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
Refer to [this file](https://github.com/WaywardEcho/CS330/blob/0080947f91d43ce01d3f9c2907334d1cd06611eb/PLP2-Variables.cpp) for examples.

### Naming
C++ typically names variables in the Camel Case standard (myVar). They are case sensitive and must begin with a letter or an underscore. Adding an int and a float results in a new float. Lists cannot have mixed variable types. C++ has 97 keywords that can't be used as variable or method names. Variable names are case sensitive and must begin with a letter or an underscore. No special symbols are allowed. The camel case is optional, but it a strong convention from the community. C++ is a statically, strongly typed and explicitly typed language. It's variables are immutable.

### Types
<details open>
<summary>Variable Types</summary>
integer - int <br/>
float - float <br/>
double - double <br/>
character - char <br/>
string - string <br/>
boolean - bool <br/>
</details>

### Operators
Arithmetic: + - * / % ++ -- <br/>
Assignment: = += -= *= /= %= &= |= ^= >>= <<= <br/>
Comparison: == != > < >= <= <br/>
Logical: && || ! <br/>

### Assignment & Operations
Mixed type operations are allowed for number variables. They typically turn into floats or doubles depending on the equation. Identifier names and operator symbols are bound at run time. This means they can be overwritten. C++ is heavily dependant on importint libraries for seemingly simple things such as Strings and printing to the terminal.

## Functions
The syntax of a function is it's return type, its name, and any parameters it may have in parentheses. Parameters can be of any data type and as many as needed, just that they match the argument of the function. In C++, functions must be declared prior to when they are executed. C++ can use recursive functions, which is when a function calls itself inside the function. Functions can normally only return one value. To get around this limitation, systems such as structures and arrays are used. 
```
int multiply(int x, int y){
 product = x * y;
 return product;
}
```

### Variables, in regards to functions
Values passed through to a method are typically pass by value, but you could pass a reference if you specify. Arguments, parameters, and variables are stored on the stack, while references are stored on the heap. C++ is statically scoped, meaning it can only reference variables in that method, values that are passed through, or that are globally accessible. Global variables can be permanently altered if used, which is why they tend to not be used.

## Conditional Statements
C++ uses the standard conditional statements of if/elseif/else. Unfortunately, that means it can fall victim to the "dangling else". The dangling else problem is only an issue if there is an if statement inside of an if statement. The else statement gets confused which if statement that it belongs to. To circumvent this issue, always make sure to use curly braces (despite not being required) and use proper indentation. Unlike other programming languages (such as Python), C++ does not care about spacing or indentation for functionality. Indentation is more a common practice for legibility.

### Booleans
C++ declares Booleans as true/false but can take in the value as 1 (true) and 0 (false).

### Short-Circuiting
C++ can in fact short circuit. When doing an AND (&&) comparison, if the first check fails, the other side of the check is not even tried since the first half failed.
```
int a = 1;
int b = 1;
int c = 3;
if (a==c && a==b){}
```

This is also true if we do and OR (||) comparison and the check does complete the first time.
```
int a = 1;
int b = 1;
int c = 3;
if (a==b || a==c){}
```

## Loops
C++ has while, do/while, for, and foreach loops. While loops while a condition is true. Do/while runs through the first iteration of the code, then will continue to iterate while the condition is true. A for loop is meant to loop a specific number of times (known ahead of time. A foreach loop is used to iterate in arrays and other data structures for each item.

### Variables, in regards to loops
Variables in loop code blocks only exist inside the loop unless they were declared beforehand outside of the loop. Variables inside functions can be returned, but only exist inside the function if they're not passed through.

### Break/Continue
In switch/case statements, you do have to use break to get out of the switch statements. There is the term continue as well, which would just start the next iteration of the loop. 

## Classes & Inheritance
C++ is a very flexiable language and can be used for object-oriented programming. It also supports structs. It sticks to the C++ standard conventions of using camel casing. Other languages like Java and Python have built-in functions to transform various data into strings. C++ can do the same, only if you import <string>, which includes a function called to_string(). C++ does support inheritance. It can do both multi-level inheritance and multiple inheritance. To overload a method, just reference the function and make the changes in the child class. Classes function similarly to other popular languages, they just use a more unique structure.

## Sources:
https://en.wikipedia.org/wiki/C%2B%2B <br/>
https://www.simplilearn.com/c-plus-plus-programming-for-beginners-article <br/>
https://www.w3schools.com/cpp/default.asp <br/>
https://www.youtube.com/watch?v=Qw5qjRNlC-Y <br/>
https://en.wikibooks.org/wiki/C%2B%2B_Programming/Examples/Hello_world <br />
https://cplusplus.com/doc/tutorial/
https://www.learncpp.com/cpp-tutorial/the-stack-and-the-heap/
https://endjin.com/blog/2022/07/understanding-the-stack-and-heap-in-csharp-dotnet
https://www.geeksforgeeks.org/short-circuiting-in-c-and-linux/
https://www.cs.drexel.edu/~popyack/Courses/GovSchool/2005/Sp04/lectures/08.2_nested_conditionals/DanglingElse.html

#include <iostream>
#include <string>
using namespace std;
#pragma once

class Person {
    string name;
    int age;

    public:
        string getName(){
            return name;
        }

        int getAge(){
            return age;
        }

        void setName(string n){
            name = n;
        }

        void setAge(int a){
            age = a;
        }
};
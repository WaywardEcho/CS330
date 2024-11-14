#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        string name;
        int age;

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
#include <iostream>
#include <string>
using namespace std;
#include <Person.h>

class Student: public Person {
    public:
        int id;
        string major;

        int getId(){
            return id;
        }

        string getMajor(){
            return major;
        }

        void setId(int i){
            id = i;
        }

        void setMajor(string m){
            major = m;
        }
};
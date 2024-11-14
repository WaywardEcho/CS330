#include <iostream>
#include <string>
using namespace std;
#include "Person.h"
#include "Student.h"
#pragma once


int main(){
    Person p1;
    Student s1;

    p1.setAge(18);
    cout << p1.getAge() << endl << endl;

    s1.setName("Zelda");
    s1.setMajor("Environmental Sciences");
    cout << s1.getName() << endl;
    cout << s1.getMajor() << endl;

    return 0;
}
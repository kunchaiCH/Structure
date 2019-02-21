#include <iostream>             // std::cout
#include <stdio.h>
#include <string.h>             // strcpy
using namespace std;            // std

struct Student{                 // Struct name: Student
    char id[9];
    float gpa;
    int age;
    char name[30];

    Student(){                  // constructor function
        id[0] = '\0';
        gpa = -99;
        age = -99;
        name[0] = '\0';
    }

    void Birth(int years){      // function Birth
        age = 2562 - years;
    }
};
main (){
    Student s1;
    cout << "id = " << s1.id <<", gpa = " << s1.gpa << ", age = " << s1.age << endl; // Test constructor function
    s1.Birth(2541);              // call the function Birth
    strcpy(s1.id, "603110");     // strcpy // include <string.h>
    s1.gpa = 3.50;               // set gpa
    cout << "id = " << s1.id <<", gpa = " << s1.gpa << ", age = " << s1.age << endl; //  After set
}

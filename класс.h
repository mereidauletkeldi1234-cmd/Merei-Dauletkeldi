#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    string group;
    int age;
    int* grades;
    int count;

public:
    Student();
    Student(string name, string group, int age, int* arr, int count);
    Student(const Student& other);
    ~Student();

    string getName() const;
    string getGroup() const;
    int getAge() const;

    void setName(string name);
    void setGroup(string group);
    void setAge(int age);

    void print() const;

    Student& operator=(const Student& other);
    bool operator==(const Student& other) const;
};

#endif

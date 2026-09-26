#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    std::string group;
    int age;
    int* grades;
    int gradesCount;

public:
    Student();
    Student(const std::string& name, const std::string& group, int age, const int* gradesArray, int count);
    Student(const Student& other);
    ~Student();

    std::string getName() const;
    std::string getGroup() const;
    int getAge() const;
    int getGradesCount() const;
    void printGrades() const;

    void setName(const std::string& name);
    void setGroup(const std::string& group);
    void setAge(int age);
    void setGrades(const int* gradesArray, int count);

    Student& operator=(const Student& other);
    bool operator==(const Student& other) const;
};

#endif

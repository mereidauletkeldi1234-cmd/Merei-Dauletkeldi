#include "Student.h"

Student::Student() {
    this->name = "Unknown";
    this->group = "None";
    this->age = 0;
    this->gradesCount = 0;
    this->grades = nullptr;
}

Student::Student(const std::string& name, const std::string& group, int age, const int* gradesArray, int count) {
    this->name = name;
    this->group = group;
    this->age = age;
    this->gradesCount = count;

    if (count > 0 && gradesArray != nullptr) {
        this->grades = new int[count];
        for (int i = 0; i < count; ++i) {
            this->grades[i] = gradesArray[i];
        }
    } else {
        this->grades = nullptr;
        this->gradesCount = 0;
    }
}

Student::Student(const Student& other) {
    this->name = other.name;
    this->group = other.group;
    this->age = other.age;
    this->gradesCount = other.gradesCount;

    if (other.gradesCount > 0 && other.grades != nullptr) {
        this->grades = new int[other.gradesCount];
        for (int i = 0; i < other.gradesCount; ++i) {
            this->grades[i] = other.grades[i];
        }
    } else {
        this->grades = nullptr;
    }
}

Student::~Student() {
    delete[] this->grades;
}

std::string Student::getName() const {
    return this->name;
}

std::string Student::getGroup() const {
    return this->group;
}

int Student::getAge() const {
    return this->age;
}

int Student::getGradesCount() const {
    return this->gradesCount;
}

void Student::printGrades() const {
    if (this->gradesCount == 0 || this->grades == nullptr) {
        std::cout << "Бағалар жоқ";
        return;
    }
    for (int i = 0; i < this->gradesCount; ++i) {
        std::cout << this->grades[i] << " ";
    }
}

void Student::setName(const std::string& name) {
    this->name = name;
}

void Student::setGroup(const std::string& group) {
    this->group = group;
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::setGrades(const int* gradesArray, int count) {
    delete[] this->grades;

    this->gradesCount = count;
    if (count > 0 && gradesArray != nullptr) {
        this->grades = new int[count];
        for (int i = 0; i < count; ++i) {
            this->grades[i] = gradesArray[i];
        }
    } else {
        this->grades = nullptr;
        this->gradesCount = 0;
    }
}

Student& Student::operator=(const Student& other) {
    if (this == &other) {
        return *this;
    }

    this->name = other.name;
    this->group = other.group;
    this->age = other.age;

    delete[] this->grades;

    this->gradesCount = other.gradesCount;
    if (other.gradesCount > 0 && other.grades != nullptr) {
        this->grades = new int[other.gradesCount];
        for (int i = 0; i < other.gradesCount; ++i) {
            this->grades[i] = other.grades[i];
        }
    } else {
        this->grades = nullptr;
    }

    return *this;
}

bool Student::operator==(const Student& other) const {
    return (this->name == other.name && this->group == other.group);
}

#include "Student.h"

Student::Student() {
    this->name = "No name";
    this->group = "No group";
    this->age = 0;
    this->count = 0;
    this->grades = nullptr;
}

Student::Student(string name, string group, int age, int* arr, int count) {
    this->name = name;
    this->group = group;
    this->age = age;
    this->count = count;

    if (count > 0 && arr != nullptr) {
        this->grades = new int[count];
        for (int i = 0; i < count; i++) {
            this->grades[i] = arr[i];
        }
    } else {
        this->grades = nullptr;
    }
}

Student::Student(const Student& other) {
    this->name = other.name;
    this->group = other.group;
    this->age = other.age;
    this->count = other.count;

    if (other.count > 0 && other.grades != nullptr) {
        this->grades = new int[other.count];
        for (int i = 0; i < other.count; i++) {
            this->grades[i] = other.grades[i];
        }
    } else {
        this->grades = nullptr;
    }
}

Student::~Student() {
    delete[] this->grades;
}

string Student::getName() const {
    return this->name;
}

string Student::getGroup() const {
    return this->group;
}

int Student::getAge() const {
    return this->age;
}

void Student::setName(string name) {
    this->name = name;
}

void Student::setGroup(string group) {
    this->group = group;
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::print() const {
    cout << name << " (" << group << ", " << age << " jas): ";
    if (grades == nullptr || count == 0) {
        cout << "Bgalar joq" << endl;
    } else {
        for (int i = 0; i < count; i++) {
            cout << grades[i] << " ";
        }
        cout << endl;
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

    this->count = other.count;
    if (other.count > 0 && other.grades != nullptr) {
        this->grades = new int[other.count];
        for (int i = 0; i < other.count; i++) {
            this->grades[i] = other.grades[i];
        }
    } else {
        this->grades = nullptr;
    }

    return *this;
}

bool Student::operator==(const Student& other) const {
    if (this->name == other.name && this->group == other.group) {
        return true;
    }
    return false;
}

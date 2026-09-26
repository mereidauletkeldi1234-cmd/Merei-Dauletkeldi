#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    int g1[] = {90, 80, 100};
    int g2[] = {70, 85};

    Student s1("Asan Aliev", "CS-101", 18, g1, 3);
    Student s2("Erlan", "CS-102", 19, g2, 2);

    cout << "--- Student 1 ---" << endl;
    s1.print();

    // Koshirme konstructor (deep copy)
    Student s3 = s1;
    cout << "--- Student 3 (koshirme) ---" << endl;
    s3.print();

    // Menshteu operatori (=)
    Student s4;
    s4 = s2;

    // Const object va get adisteri
    const Student constStudent("Daulet", "CS-101", 18, g1, 3);
    cout << "Const student ati: " << constStudent.getName() << endl;

    // Salistiru (==)
    Student s5("Asan Aliev", "CS-101", 20, g2, 2);

    if (s1 == s5) {
        cout << "s1 jane s5 ten" << endl;
    } else {
        cout << "s1 jane s5 ten emes" << endl;
    }

    if (s1 == s2) {
        cout << "s1 jane s2 ten" << endl;
    } else {
        cout << "s1 jane s2 ten emes" << endl;
    }

    return 0;
}

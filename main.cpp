#include <iostream>
#include "Student.h"

int main() {
    int grades1[] = {90, 85, 95, 100};
    int grades2[] = {75, 80, 88};

    Student st1("Асан Әлиев", "CS-101", 19, grades1, 4);
    Student st2("Бақыт Серіков", "CS-102", 20, grades2, 3);

    Student st3 = st1;

    Student st4;
    st4 = st2;

    const Student constStudent("Данияр Омаров", "CS-101", 19, grades1, 4);
    std::cout << "Тұрақты студенттің аты: " << constStudent.getName() << "\n";
    std::cout << "Тұрақты студенттің тобы: " << constStudent.getGroup() << "\n\n";

    Student st5("Асан Әлиев", "CS-101", 20, grades2, 3);

    std::cout << "st1 және st2 салыстыру: " << (st1 == st2 ? "Тең" : "Тең емес") << "\n";
    std::cout << "st1 және st5 салыстыру: " << (st1 == st5 ? "Тең" : "Тең емес") << "\n\n";

    std::cout << "Студент 1: " << st1.getName() << " (" << st1.getGroup() << "), Бағалары: ";
    st1.printGrades();
    std::cout << "\n";

    std::cout << "Студент 3 (Көшірме): " << st3.getName() << " (" << st3.getGroup() << "), Бағалары: ";
    st3.printGrades();
    std::cout << "\n";

    return 0;
}

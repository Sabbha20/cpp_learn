#include <iostream>
#include <string>

struct Student
{
    std::string name;
    int age;
    double gpa;
};

enum class Grade {A, B, C, D, F};

Grade gpaToGrade(double gpa){
    if (gpa >= 3.7) {
        return Grade::A;
    } else if (gpa >= 3.0) {
        return Grade::B;
    } else if (gpa >= 2.0) {
        return Grade::C;
    } else if (gpa >= 1.0) {
        return Grade::D;
    } else {
        return Grade::F;
    }
}

int main(){

    Student students[3] = {
        {"Alice", 20, 1.2},
        {"Bob", 22, 3.5},
        {"Charlie", 19, 3.7}
    };

    for (int i = 0; i < 3; i++){
        Grade grade = gpaToGrade(students[i].gpa);
        std::string gradeStr;

        switch(grade) {
            case Grade::A:
                gradeStr = "A";
                break;
            case Grade::B:
                gradeStr = "B";
                break;
            case Grade::C:
                gradeStr = "C";
                break;
            case Grade::D:
                gradeStr = "D";
                break;
            case Grade::F:
                gradeStr = "F";
                break;
        }

        std::cout << "Name: " << students[i].name << ", Age: " << students[i].age << ", Grade: " << gradeStr << std::endl;
    }


    return 0;
}
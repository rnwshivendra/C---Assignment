#include <iostream>
#include <string.h>

using namespace std;

class Student {
private:
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    char stu_email[50];
    char stu_college[50];

public:
    void inpStudentDtl() {
        cout << "Enter student id: ";
        cin >> this->stu_id;
        cout << "Enter student Name: ";
        cin >> this->stu_name;
        cout << "Enter student Age: ";
        cin >> this->stu_age;
        cout << "Enter student Course: ";
        cin >> this->stu_course;
        cout << "Enter student City: ";
        cin >> this->stu_city;
        cout << "Enter student Email: ";
        cin >> this->stu_email;
        cout << "Enter student College: ";
        cin >> this->stu_college;
    }

    void displayRecord(Student record[], int size) {
        for (int i = 0; i < size; i++) {
            cout << "Student id: " << record[i].stu_id << endl
                 << "Student Name: " << record[i].stu_name << endl
                 << "Student Age: " << record[i].stu_age << endl
                 << "Student Course: " << record[i].stu_course << endl
                 << "Student City: " << record[i].stu_city << endl
                 << "Student Email: " << record[i].stu_email << endl
                 << "Student College: " << record[i].stu_college << endl
                 << "---------------------------------------------" << endl;
        }
    }
};

int main() {
    Student temp;
    Student students[5];

    for(int i=0;i<5;i++){
        cout << "Enter the detail for Student " << i+1 << endl;
        students[i].inpStudentDtl();
    }

    temp.displayRecord(students, 5);



    return 0;
}

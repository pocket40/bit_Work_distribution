#define KASFDJSDFHJKSDHFJKHSDFLKHSDFHGSDFHSDFG
#include "Student.h"
#include <iostream>
using namespace std;
extern "C" MY_DLL Student * CreateStudent(int num, string name)
{
    return new Student(num, name);
}
Student::Student(int num, string name)
{
    cout << "생성자" << num << "," << name << endl;
}
int Student::GetNum()
{
    cout << "Student::GetNum" << endl;
    return 0;
}
string Student::GetName()
{
    cout << "Student::GetName" << endl;
    return "홍길동";
}

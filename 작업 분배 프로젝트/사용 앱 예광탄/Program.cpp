#include "..\\MyFooLib\\Student.h"
#pragma comment(lib,"MyFooLib")
#include <iostream>
using namespace std;
int main()
{
    Student* student = new Student(3, "ȫ�浿");
    cout << "��ȣ:"<<student->GetNum() << endl;
    cout << "�̸�:" << student->GetName() << endl;
    delete student;
    return 0;
}

//#include <Windows.h>
//#include "..\\MyFooLib\\Student.h"
//#include <iostream>
//using namespace std;
//typedef Student* (*CreateStuFun)(int num, string name);
//int main()
//{
//    HINSTANCE hLib = LoadLibrary(TEXT("MyFooLib.dll"));
//    if (hLib == 0)
//    {
//        printf("MyFooLib.dll ������ �ִ��� Ȯ���ϼ���.");
//        return 0;
//    }
//    CreateStuFun csf = (CreateStuFun)GetProcAddress(hLib, "CreateStudent");
//    Student* student = csf(3, "ȫ�浿");
//    cout << "��ȣ:" << student->GetNum() << endl;
//    cout << "�̸�:" << student->GetName() << endl;
//    delete student;
//    return 0;
//}
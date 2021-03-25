#include "..\\MyFooLib\\Student.h"
#pragma comment(lib,"MyFooLib")
#include <iostream>
using namespace std;
int main()
{
    Student* student = new Student(3, "홍길동");
    cout << "번호:"<<student->GetNum() << endl;
    cout << "이름:" << student->GetName() << endl;
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
//        printf("MyFooLib.dll 파일이 있는지 확인하세요.");
//        return 0;
//    }
//    CreateStuFun csf = (CreateStuFun)GetProcAddress(hLib, "CreateStudent");
//    Student* student = csf(3, "홍길동");
//    cout << "번호:" << student->GetNum() << endl;
//    cout << "이름:" << student->GetName() << endl;
//    delete student;
//    return 0;
//}
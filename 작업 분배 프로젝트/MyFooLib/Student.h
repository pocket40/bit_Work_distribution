#pragma once
#ifdef KASFDJSDFHJKSDHFJKHSDFLKHSDFHGSDFHSDFG
#define MY_DLL __declspec(dllexport)
#else
#define MY_DLL __declspec(dllimport)
#endif

#include <string>
using namespace std;
class MY_DLL Student
{
public:
    Student(int num, string name);
    virtual int GetNum();
    virtual string GetName();
};
extern "C" MY_DLL Student * CreateStudent(int num, string name);


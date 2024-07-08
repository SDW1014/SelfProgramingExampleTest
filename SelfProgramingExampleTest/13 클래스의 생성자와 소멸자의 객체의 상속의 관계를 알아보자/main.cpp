// title : 상속의 생성자와 소멸자의 관계를 알아보자
// explanation : 생성자와 소멸자의 호출 순서를 알아보는 문제
// author : SDW
// date : 2024-07-08

// header 
#include <iostream>

// namespace
using namespace std;

// Base class (부모 클래스)
class Base {
public:
    Base() {
        cout << "Base Constructor ";
    }
    ~Base() {
        cout << "Base Destructor ";
    }
};

// Derived class (자식 클래스)
class Derived : public Base {
public:
    Derived() {
        cout << "Derived Constructor ";
    }
    ~Derived() {
        cout << "Derived Destructor ";
    }
};

// main function
int main() {
    // Derived 객체 생성
    Derived d;
    // Derived 객체 소멸
    return 0;
}

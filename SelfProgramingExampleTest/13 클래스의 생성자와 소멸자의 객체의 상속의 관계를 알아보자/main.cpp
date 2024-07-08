// title : ����� �����ڿ� �Ҹ����� ���踦 �˾ƺ���
// explanation : �����ڿ� �Ҹ����� ȣ�� ������ �˾ƺ��� ����
// author : SDW
// date : 2024-07-08

// header 
#include <iostream>

// namespace
using namespace std;

// Base class (�θ� Ŭ����)
class Base {
public:
    Base() {
        cout << "Base Constructor ";
    }
    ~Base() {
        cout << "Base Destructor ";
    }
};

// Derived class (�ڽ� Ŭ����)
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
    // Derived ��ü ����
    Derived d;
    // Derived ��ü �Ҹ�
    return 0;
}

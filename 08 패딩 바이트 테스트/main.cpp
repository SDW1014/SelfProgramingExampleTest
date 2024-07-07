// title : Size of Base and Derived class
// explanation : �� ���α׷���, ������ Ŭ�������� memory�� �󸶸�ŭ�� ������ �����ϴ��� Ȯ���ϴ� ���α׷��̴�.
// Base class�� 16 bytes, Derived class�� 24 bytes�� �����Ѵ�.
// �̴� Derived class�� Base class�� ��ӹ޾ұ� ������, Base class�� ��������� �Լ����� ��� �����ϰ� �ֱ� �����̴�.
// author : SDW
// date : 2024-07-07

#include <iostream>
using namespace std;

// Base class
class Base {
public:
    virtual void func1() {} // ���� �Լ��� 8 bytes�� �����Ѵ�. 32��Ʈ ��ǻ�Ϳ����� 4 bytes
    int x;                  // integer�� 4 bytes�� �����Ѵ�.
    double z;               // double�� 8 bytes�� �����Ѵ�.
};

// Derived class
class Derived : public Base {
public:
    void func2() {} // ��� �Լ��� 0 bytes�� �����Ѵ�. �Լ� ��ü�� ��ũ�η� ����, ������ó�� �̿�Ǳ� �����̴�. 
    double y;	  // double�� 8 bytes�� �����Ѵ�.
};

// �׷��� ������ ��Ȯ�� ����ִ� �޸𸮸� �����Ұ� ������ padding�� ���� �޸𸮸� �����Ѵ�.
// Ŭ���� ���ο��� ���� ū ������Ÿ���� �������� ������ �ϱ� ������, 8 bytes�� �������� ������ �Ѵ�.

// main function
int main() {
    Base b;
    Derived d;

    cout << "Size of Base: " << sizeof(b) << " bytes" << endl;
    cout << "Size of Derived: " << sizeof(d) << " bytes" << endl;

    return 0;
}
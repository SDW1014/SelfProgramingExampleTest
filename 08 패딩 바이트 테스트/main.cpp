// title : Size of Base and Derived class
// explanation : 이 프로그램은, 각각의 클래스들이 memory에 얼마만큼의 공간을 차지하는지 확인하는 프로그램이다.
// Base class는 16 bytes, Derived class는 24 bytes를 차지한다.
// 이는 Derived class가 Base class를 상속받았기 때문에, Base class의 멤버변수와 함수들을 모두 포함하고 있기 때문이다.
// author : SDW
// date : 2024-07-07

#include <iostream>
using namespace std;

// Base class
class Base {
public:
    virtual void func1() {} // 가상 함수는 8 bytes를 차지한다. 32비트 컴퓨터에서는 4 bytes
    int x;                  // integer은 4 bytes를 차지한다.
    double z;               // double은 8 bytes를 차지한다.
};

// Derived class
class Derived : public Base {
public:
    void func2() {} // 멤버 함수는 0 bytes를 차지한다. 함수 자체가 메크로로 인해, 컨벤션처럼 이용되기 때문이다. 
    double y;	  // double은 8 bytes를 차지한다.
};

// 그러면 각각이 정확히 들어있는 메모리만 차지할것 같지만 padding을 통해 메모리를 정렬한다.
// 클래스 내부에서 가장 큰 데이터타입을 기준으로 정렬을 하기 때문에, 8 bytes를 기준으로 정렬을 한다.

// main function
int main() {
    Base b;
    Derived d;

    cout << "Size of Base: " << sizeof(b) << " bytes" << endl;
    cout << "Size of Derived: " << sizeof(d) << " bytes" << endl;

    return 0;
}
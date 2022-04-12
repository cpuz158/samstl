#include <iostream>
#include <functional>
using namespace std::placeholders;

class Machine
{
public:
    void mf1(int a) {}
    void mf2(int a, int b) {}
};
void f1(int a) { printf("f1 : %d\n", a); }
void f2(int a, int b) { printf("f2 : %d, %d\n", a, b); }
void f3(int a, int b, int c) { printf("f3 : %d, %d, %d\n", a, b, c); }
void f4(int a, int b, int c, int d) { printf("f4 : %d, %d, %d, %d\n", a, b, c, d); }

int main()
{
    // STL ���� �Լ� ������ ���� ���� std::function<> �� �ֽ��ϴ�
    // ���� : std::function<�Լ�Ÿ��> 
    
    // void(*)(int) : �Լ� ������ Ÿ��
    // void(int)    : �Լ� Ÿ��
    std::function< void(int) > f;

    // ���� f �� �Լ� ������ ó�� ����ϸ� �˴ϴ�.
    f = &f1;
    f(10); // ok.  f1(10)


    // ���� 1. ������ ������ �ٸ� �Լ��� , std::bind()�� ����ϸ� 
    //        f�� ������ �ֽ��ϴ�.
//  f = &f2; // error
    f = std::bind(&f2, 7 , _1 );
    f(10); // f2(7, 10)

    // ���� 2. ��� �Լ��� ������ �ֽ��ϴ�.
    //        => ��� �Լ��� ȣ���Ϸ��� �ݵ�� ��ü�� �־�� �մϴ�.
//  f = &Machine::mf1; // error

    Machine m;
    f = std::bind(&Machine::mf1, &m, _1 ); // bind(����Լ�, &��ü, ���ڵ�)
    f(10); // m.mf1(10);

    // ��ü ������, �ּҷ� ������ �ǰ�, ������ ������ �˴ϴ�.
    // ������ ������ "����"�� �����ϰ� �ְ� �˴ϴ�.
    f = std::bind(&Machine::mf2, m, _1 , 9 ); 
    f(3); // m.mf2(3, 9);

    f = std::bind(&Machine::mf2, Machine(), _1, 9);

    // ���� 3. ���� ǥ���ĵ� �˴ϴ�.
    f = [](int a) { std::cout << "lambda " << a << std::endl; };
    f(3); // lambda : 3
}

// ��� : function ���� std::bind �� ������ ������
//      �Ϲ��Լ�, ��� �Լ�, �Լ���ü, ���� ǥ���� �� ���� ��� ȣ�Ⱑ���� ����
//      ������ �ֽ��ϴ�.


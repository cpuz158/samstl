#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"

int foo(int a, int b)
{
    return a + b;
}
int main()
{
    std::list<int> s1 = { 1,2,3,4,5 };
    std::list<int> s2 = { 6,7,8,9,10 };
    std::list<int> s3;

    // STL�� �Լ� ���޽�
    // 1. ��¥ �Լ��� ���� �����ص� �ǰ�
//    std::transform(s1.begin(), s1.end(),
//        s2.begin(),                                         
//        std::back_inserter(s3), 
//        foo);

    // 2. ������ �Լ� ���ٴ� "����ǥ����"�� ����ϴ� ���� �����ϴ�.
    // ����ǥ���� : C++11���� �����Ǵ� ����
    //            "�͸��� �Լ�"�� ����� ����
    std::transform(s1.begin(), s1.end(),
        s2.begin(),
        std::back_inserter(s3),
        [](int a, int b) { return a + b; } );

    // ���� : ��¥ �Լ��� �����ϴ°� ����, ���� ǥ������ �����ϴ�.
    //       ���� ǥ���� ����ϼ���..

    show(s3);


    return 0;
}



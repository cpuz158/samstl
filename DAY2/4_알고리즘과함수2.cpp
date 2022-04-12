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
    std::list<int> s1 = { 1,2,3,4,5};
    std::list<int> s2 = { 6,7,8,9,10 };
    std::list<int> s3;

    // transform �˰���
    std::transform( s1.begin(), s1.end(), // �� ������ �� ��Ҹ�
                    s2.begin(),           // �� ������ �� ��ҿ� �Բ� 
                                          // ������ ���ڷ� ���޵� �Լ��� ������.
                    std::back_inserter(s3), // �Լ��� ��ȯ���� ���⿡ �־� �޶�.
                    foo);

    show(s3);

	return 0;
}



















//

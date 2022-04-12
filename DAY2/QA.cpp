// QA
#include <iostream>
#include <functional>
#include <type_traits>
#include <concepts>

// 1. Sort() �� ������ ���ڷ� int 2���� ���Ҽ� �ִ� �Լ�(��ü)�� ����ϰ� �ֽ��ϴ�.
// 2. �׷���, ����ڰ� ���� ���þ��� "int k" �� ������ �ֽ��ϴ�.
// 3. Sort(int*, int*, int) �Լ��� �����ϰ�
//    ������ �Լ��� �ٽ� ������ �Ҷ�, cmp(0,1) ���� int cmp�� ȣ���Ҽ� ���ٰ���
/*
template<typename T>
void Sort(int*, int*, T cmp)
{
	cmp(0, 1);
}
*/
// C++�� �ƴ� ��κ��� ���� Generic ����(constraint) ��� ������ �ֽ��ϴ�.
// C++ �� Generic ���� ������ C++20���� ���ԵǾ����ϴ�.

// 1. C++11 ~ C++17 ������ enable_if ��� ���(������ �ƴ� ��ũ��)�� �ذ�
// 2. C++20 ������ concept �̶�� ���� ����.
/*
template<typename T> requires std::is_integral_v<T>
void Sort(int*, int*, T cmp)
{
//	cmp(0, 1);
}
*/

template<typename T> requires std::predicate<T, int, int> 
void Sort(int*, int*, T cmp)
{
	//	cmp(0, 1);
}

int cmp(int a, int b) { return 0; }

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	int k = 0;
//	double k = 0;

//	Sort(x, x+10, cmp); // ????
	Sort(x, x + 10, k); // ????

}
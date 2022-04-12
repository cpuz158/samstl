// 1_stream6
#include <iostream>
#include <iterator>
#include <list>
#include <algorithm> 
#include <fstream> 
#include "show.h"

/*
// �����̳� ����
template<typename Container> 
void show(const Container& c)
{
	for (auto& e : c)
	{
		std::cout << e << ", ";
	}
	std::cout << std::endl;
}
template<typename InputIter>
void show(InputIter first, InputIter last)
{
	// �Ʒ� ó�� �ϸ�, ��ü�� �ݺ��ڸ� �����ϰ�, raw pointer �� �ȵ˴ϴ�.
//	std::ostream_iterator< typename InputIter::value_type > p(std::cout, ", ");

	// �Ʒ� ó���ϴ� ���� ���� ���� �ڵ� �Դϴ�.
	std::ostream_iterator< typename std::iterator_traits<InputIter>::value_type > p(std::cout, ", ");

	std::copy(first, last, p);

	std::cout << std::endl;
}
*/
int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7 };
	int x[7] = { 1,2,3,4,5,6,7 };

	show(s);
	show(x);
	show(s.begin(), s.end());
	show(x, x + 7);

}
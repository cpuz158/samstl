#include <iostream>
#include <vector>
#include <list>

/*
void print_first_element(std::vector<int>& v)
{
	int n = v.front();
	std::cout << n << std::endl;
}
*/

/*
template<typename T>
void print_first_element(std::vector<T>& v)
{
	T n = v.front();

	std::cout << n << std::endl;
}
*/

template<typename T>
void print_first_element(T& v)
{
	// ?ä�� ������. auto ����.
	// T : list<double>
	// T::value_type ==> list<double>::value_type => double

	typename T::value_type n = v.front();

	// �׷���, C++11 ���Ŀ��� �׳� "auto" ����ϸ� �˴ϴ�.
	auto n2 = v.front();

	std::cout << n << std::endl;
}




int main()
{
//	std::vector<int>    v = { 1,2,3,4,5,6,7,8,9,10 };
//	std::vector<double> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<double>   v = { 1,2,3,4,5,6,7,8,9,10 };

	print_first_element(v);
}

// template ��� �����̳ʸ� ���鶧, �����̳ʰ� �����ϴ� Ÿ���� �ܺο��� �˰� �������� 
// �ֽ��ϴ�. �� ó�� print_first_element �Լ�����..

/*
// �׷��� ��Ģ�� �ֽ��ϴ�.
template<typename T> class list
{
public:
	using value_type = T;	// STL �� ��� �����̳ʿ��� �� �ڵ尡 �ֽ��ϴ�.
							// typedef T value_type;
						 
	// ....
};

list<int> s = { 1,2,3 };
list<int>::value_type n = s.front();
*/
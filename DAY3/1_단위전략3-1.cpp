#include <set> 
#include <functional>
#include "show.h"

// set �� "����å(���ø� 2��° ����)" ���� �����ϴ� Ÿ���� ������
// "operator()" �Լ��� ������ �˴ϴ�. - ��, "�Լ���ü"�� ������ �մϴ�.

template<typename T>
struct Greater
{
	// �Լ� ��ü ���鶧 "operator()" �� �� ��� ��� �Լ��� �ϼ���.
	// const Greater g; �� ������
	// if ( g(10, 20) ) �Ҽ� �־�� �մϴ� g.operator()(10,20) ȣ�Ⱑ���ϰ�
	inline bool operator()(T a, T b) const 
	{ 
		return a > b; 
	}
};

int main()
{
//	std::set<int, Greater<int> > s; 
	std::set<int, std::greater<int> > s;

	s.insert(15);
	s.insert(25);
	s.insert(5);
	s.insert(17);
	s.insert(10);

	show(s);
}
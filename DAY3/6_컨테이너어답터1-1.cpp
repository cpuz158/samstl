#include <iostream>

// list �� �̹� �ֽ��ϴ�
#include <list>
#include <vector>
#include <deque>

// �׷���, ������ �ʿ��մϴ�.
// 1. ���� ������.
// 2. list�� ����ó�� ���̰� ����.

// "Adapter Pattern" : �⺻ Ŭ������ �������̽�(�Լ��̸�)��
//					�����ؼ� ���ο� Ŭ������ ����� ������ ����.

template<typename T, typename Cont = std::deque<T> > class stack
{
	Cont c;
public:
	inline void push(const T& a) { c.push_back(a); }
	inline void pop() { c.pop_back(); }  
	inline T& top()   { return c.back(); }
};

#include <stack> // �� �ȿ� �� �ڵ尡 �ֽ��ϴ�.
				 // ���� "stack adapter" ��� ���� �θ��ϴ�.

int main()
{
	stack<int> s; // deque�� ����
	stack<int, std::list<int> > s1;   // list �� ����ó�� ���̰� �ش޶�°�
									  // �׷��� "stack adapter" ��� �մϴ�.
	stack<int, std::vector<int> > s2;

	s.push(10);
	s.push(20);

	std::cout << s.top() << std::endl;

}
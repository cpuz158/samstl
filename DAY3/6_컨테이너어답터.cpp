#include <iostream>

// list �� �̹� �ֽ��ϴ�
#include <list>
#include <vector>
#include <deque>

// �׷���, ������ �ʿ��մϴ�.
// 1. ���� ������.
// 2. list�� ����ó�� ���̰� ����.

template<typename T> class stack
{
	std::list<T> c;
public:
	// push_back() �̶�� �Լ� �̸��� push() ��� �̸����� �����ؼ� ����ó�� ���̰�
	void push(const T& a) { c.push_back(a); }
	void pop()			  { c.pop_back(); }    // ���Ÿ�, ��ȯ ����
	T& top()              { return c.back(); } // ��ȯ��, ���� ����
};


int main()
{
	stack<int> s;

	s.push(10);
	s.push(20);

	std::cout << s.top() << std::endl;

}
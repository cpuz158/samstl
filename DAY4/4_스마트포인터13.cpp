#include <iostream>
#include <memory>
#include <vector>

struct Point
{
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

int main()
{
	std::vector<Point> v1;
	v1.emplace(1, 1);
	v1.emplace(2, 2);
	// v1 �ı���, ��� ��ü �ڵ� �ı�.
	//-------------------------

	std::vector<Point*> v2;
	v2.push_back(new Point(1, 1));
	v2.push_back(new Point(2, 2));

	// v2�� �ı��Ǳ����� ����ڰ� new �Ѱ��� �� delete �ؾ� �մϴ�.
	for (auto p : v2)
		delete p;

	//-------------------------
	std::vector< std::shared_ptr<Point> > v3;

//	v3.push_back( new Point(1, 2) ); // error
	v3.push_back( std::shared_ptr<Point>(new Point(1, 2)) ); // ok

	v3.push_back( std::make_shared<Point>(1, 1) ); // �ּ��� �ڵ�
									// �ᱹ new Point(1,1) �� ���簴ü�� �����ϴ°�

}
// ����Ʈ ������ ���� : 1990��� ���� ����
// boost ���̺귯�� ���� 2000�� �濡 shared_ptr ����
// C++11 ���鶧 C++ ǥ������ "shared_ptr" ä��.

/*
void foo()
{
	int* p = new int;
	if (����)
	{
		delete p; // ��� �ؾ� �ϹǷ� ���� �մϴ�.
		return;
	}

	delete p;
}
*/
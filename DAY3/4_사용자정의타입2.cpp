#include <vector>
#include "show.h"

class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) 
	{
		std::cout << "Point()" << std::endl;
	}
	~Point() { std::cout << "~Point()" << std::endl; }
	
	Point(const Point& p)
	{
		std::cout << "Point(const Point&)" << std::endl;
	}
};
int main()
{
	std::vector<Point> v;

	// ������ ������ ������
	// 1. ��ü�� ������ �ֱ�.
//	Point pt(1, 2);
//	v.push_back(pt); 


	// 2. �ӽð�ü�� ����
	// �̰�쵵 ��ü�� 2�� �̹Ƿ�, �Ҹ��ڰ� 2�� ȣ��
	// ��, �ӽð�ü�̹Ƿ� �Ʒ� ������ ������ �ٷ� �ı�
//	v.push_back( Point(1, 2) );  

	// 3. {1,2} �� ���� �ӽð�ü ���� �Դϴ�.
//	v.push_back( { 1,2 } ); // Point{1,2} �� Point(1,2) �� ����


	// 4. �ӽð�ü�� ������ �ƴ�, 
	//    ��ü�� ����� ���� ������ ���ڸ� ����
	v.emplace_back(1, 2); // {1,2} �� �ƴ� 2���� ���� �Դϴ�.
						  // new Point(1,2) �� ����� �޶�� ��


	std::cout << "------------------" << std::endl;	
}

// �ٽ� 
// 1. �����̳ʰ� "����� ���� Ÿ���� ��" ���� �����ϴ� ���
// push_xxx() ���� emplace_xxx() �� �����ϴ�.

// 2. ��, int Ÿ���̳�, ��������� Ÿ���� ������(Point*)�� �����ϴ� ����
// �׳�, push_xxx() �� �־ �˴ϴ�. emplace_xxx() �� ��밡��


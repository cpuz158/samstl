// equality, Equivalency
#include "show.h"
#include <set>
#include "debug_alloc.h"

/*
// set find �� ����
if (root < findelem) // ��Ȯ���� less ��ü ���
	move left child;
else if (findelem < root )
	move right child
else 
	���ٰ� Ȯ��.. 

// ��, s.find �� ������ == �� �˻��� �ƴ϶�
// ũ���� �ʰ�, ������ ������ "ã�Ҵ�" ��� �Ǵ��մϴ�. - Equivalency
*/


struct Point
{
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}

	bool operator<(const Point& pt) const  { return x < pt.x;}
};

int main()
{
	std::set<Point> s;  

	s.emplace(3, 2); // Point(3,2)	
	s.emplace(2, 1); // Point(2,1)	
	s.emplace(1, 5); // Point(1,5)	

//	s.emplace(2, 5); // ����, ���� < �����ڴ� x�� ����ϹǷ�..
					// x ���� 2�� ���� �̹� (2,1) �� �����Ƿ�

	Point pt(3, 0);

	auto ret = s.find(pt);	// s.find(Point(3,2)) ó�� �ص� �˴ϴ�.
							// ����  �� �ڵ尡 �� ������ ������� ?
							// �˻��Ϸ��� == �� �ʿ����� ������� ?

	if (ret == s.end())
		std::cout << "�˻�����" << std::endl;
	else 
		std::cout << "�˻����� : " << ret->x << ", " << ret->y << std::endl;

	// �˰��� find �� "==" �������� �˻��մϴ�. - equality 
	auto ret2 = std::find(s.begin(), s.end(), pt); // error
											// Point �� "==" ������ �ȵ˴ϴ�

	// s.find    : ũ���� �ʰ� ������ ������ "����" - equivalency
	// std::find : == �� �˻� - equality
}



















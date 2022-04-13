#include <vector>
#include "show.h"

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
	// 1. �Ʒ� �ڵ�� Point �� ����Ʈ �����ڰ� 10�� ȣ��Ǵ� �ڵ��Դϴ�.
	// 2. Point ����Ʈ �����ڰ� ������ ���� �Դϴ�.
//	std::vector<Point> v(10); 

	// ����Ʈ �����ڰ� ���� Ÿ���� vector�� ��������
	// 1. 10�� ���鶧 ���� �ʱ�ȭ �ϱ� ���� ��ü�� ����
	Point pt(0, 0);
	std::vector<Point> v1(10, pt); 
	std::vector<Point> v2(10, Point(0,0) );
	std::vector<Point> v3(10, { 0, 0 } ); // C++11 ���ʹ� �� �ڵ嵵 ����

	// 2. ��� ��ҿ� �ʱⰪ�� �ٸ��� �Ϸ���
	std::vector<Point> v4 = { Point(0,0), Point(1,1), Point(2,2) };
	std::vector<Point> v5 = { {0,0}, {1,1},{2,2} }; // C++11 ���� ����
	std::vector<Point> v6 { {0,0}, {1,1},{2,2} };
	

	// 3. resize �� ��쵵 ����Ʈ �����ڰ� ������ �����ؾ� �մϴ�.
	std::vector<Point> v7(10, { 0,0 } );
//	v7.resize(15);  // �þ 5���� ���ؼ��� ������ ȣ���� �ʿ��ѵ�.
					// ����Ʈ �����ڰ� �����Ƿ� ���� 

	v7.resize(15, { 0, 0 }); // ok
//	v7.resize(7); // �پ��ٸ� ? ���� �����ؾ� �մϴ�.

	//--------------------------------
	// �Ʒ� 3���� �ڵ带 ������ ������
	std::vector< std::vector<int> > m1(10);
//	std::vector< std::vector<int> > m2(10, 10); // error
	std::vector< std::vector<int> > m3(10, { 10 }); // 10 * 1 �� matrix

	std::vector< std::vector<int> > m4(10, std::vector<int>(10));
	std::vector< std::vector<int> > m5(10, std::vector<int>(10, 3));

//	m1[2][2] = 10; // runtime error. m1�� 10������, m1[2]�� vector�� ũ�Ⱑ 0

	std::cout << m3[0][0] << std::endl; // 10
	std::cout << m5[0][0] << std::endl; // 3
}

// ����
// 1. ���� �����ڰ� ���� Ÿ���� �����̳ʿ� ������ �����ϴ�.
// 2. ����Ʈ �����ڰ� ���� Ÿ���� �� ��ó�� ������ ��ü�� �����ؾ� �մϴ�.


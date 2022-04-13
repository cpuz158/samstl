//5_���������Ÿ��5
#include <vector>
#include <iostream>

class Shape
{
public:
	// "��� ��� Ŭ������ �Ҹ��ڴ� �ݵ�� �����Լ� �̾�� �Ѵ�." ��� ��Ģ�� �����Ƿ�
	// �ᱹ, ����� ����ϴ� �ڵ�� ��κ� �����Լ��� �Ѱ� �̻��� �ֽ��ϴ�.
	virtual ~Shape() {}
};




class Point : public Shape
{
};
class Rect : public Shape
{
public:
	void draw() const {}
};

int main()
{
	// ��� Ŭ���� �����͸� �����ϸ� ��� �Ļ� Ŭ������ü�� ������ �ֽ��ϴ�
	std::vector<Shape*> v;
	v.push_back(new Point);
	v.push_back(new Rect);
	v.push_back(new Rect);
//	v.push_back(new int); // error

	// �׷���, v�� Shape* �� �����ϹǷ� Rect�� ���� ��� ������ �ȵ˴ϴ�.
//	v[2]->draw(); // error.

	// ���� ��� ������ �ʿ��ϸ� ĳ�����ؾ� �մϴ�
	// ��� 1. Ÿ���� ��Ȯ�� Ȯ���Ҽ� �ִٸ� static_cast �ϼ���
//	Rect* p1 = static_cast<Rect*>(v[2]);
//	p1->draw();

	// ��� 2. Ȯ���Ҽ� ���ٸ�, dynamic_cast �ϼ���
//	Rect* p2 = dynamic_cast<Rect*>(v[2]);
	Rect* p2 = dynamic_cast<Rect*>(v[0]);

	std::cout << p2 << std::endl;
}
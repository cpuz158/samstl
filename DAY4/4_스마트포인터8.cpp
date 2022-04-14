#include <memory>
#include <string>
#include <iostream>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People() { std::cout << name << " �ı�" << std::endl; }

//	std::shared_ptr<People> bf; // best friend

	// shared_ptr ��� raw pointer �� ����ϸ�
	// �ڿ� ���� ������ �ذ�Ǿ����ϴ�.
	// �׷���, �Ѱ��� ������ �ֽ��ϴ�.(8-1�� �ҽ�����)
	People* bf; // raw pointer �̹Ƿ� ������� ���� ����
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	std::shared_ptr<People> sp2(new People("lee"));


	sp1->bf = sp2.get();
	sp2->bf = sp1.get();
}



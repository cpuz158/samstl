#include <memory>
#include <string>
#include <iostream>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People() { std::cout << name << " �ı�" << std::endl; }

	std::shared_ptr<People> bf; // best friend
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	std::shared_ptr<People> sp2(new People("lee"));

	// shared_ptr ����
	// ��ȣ ����, ��ȯ ����(cycle reference) �߻���
	// �ڿ��� �ı����� �ʽ��ϴ�.
	sp1->bf = sp2;
	sp2->bf = sp1;
}



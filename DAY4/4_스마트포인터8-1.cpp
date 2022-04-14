#include <memory>
#include <string>
#include <iostream>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People() { std::cout << name << " �ı�" << std::endl; }

	// raw pointer �� ����ϸ� "��ȣ ����"�� �޸� ���� ������ �ذ�!!
	// ������ "dangling pointer" �� �߻��Ҽ� �ִ�!!!
	// �Ʒ� main �Լ� ����. 
	People* bf; 
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	{
		std::shared_ptr<People> sp2(new People("lee"));

		sp1->bf = sp2.get();
		sp2->bf = sp1.get();
	}

	if (sp1->bf != 0)
	{
		// bf �����Ͱ� 0�� �ƴϹǷ� �����ϴٰ� �����ϰ� ���
		std::cout << sp1->bf->name << std::endl;
	}
}



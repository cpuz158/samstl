#include <memory>
#include <string>
#include <iostream>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People() { std::cout << name << " �ı�" << std::endl; }

//	People* bf;

	std::weak_ptr<People> bf; // ��������� ���� ���� �ʴ� ����Ʈ ������
							  // ��ü�� �ı� ���ε� ���� �����ϴ�.
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	{
		std::shared_ptr<People> sp2(new People("lee"));

		sp1->bf = sp2;
		sp2->bf = sp1;
	}

	if (sp1->bf.expired() )
	{
		std::cout << "��ü�� �ı� �Ǿ���." << std::endl;
	}
	else
	{
		std::cout << "��ü�� �ı� ���� ����" << std::endl;
		
		// �ı� ���� ���� ���.. ��ü�� �����Ϸ���
		// 1. weak �δ� �����Ҽ� �����ϴ�.
		//	=> weak �� ��ü ���� �������� �����Ƿ�(������� ���� ����)
		//  => ��ü�� ��� �Լ� ȣ���߿� ��ü�� �ı� �ɼ��� �ֽ��ϴ�.
		//     �׷��� weak �� ��ü ���� �ȵ˴ϴ�.
		//auto ret = sp1->bf->name; // error. weak �� -> ������ ��������

		// weak �� ������ shared �� ���� �����ؾ� �մϴ�.
		std::shared_ptr<People> sp = sp1->bf.lock();

		if (sp) // �ٽ� ��ȿ�� Ȯ���� ���
		{
			std::cout << sp->name << std::endl;
		}
	}
}



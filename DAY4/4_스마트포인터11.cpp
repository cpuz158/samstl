#include <iostream>
#include <memory>

class Car
{
public:
	void Go() {}
	~Car() { std::cout << "~Car" << std::endl; }
};
int main()
{
	std::weak_ptr<Car>   wp;
	{
		std::shared_ptr<Car> p(new Car);

		wp = p;

	} // <== p�� �ı��ǹǷ� ��ü �ı�

//	if (!wp.expired()) // �ᱹ �Ʒ� if(sp)�� �����ϰ� �ǹǷ� ��� �˴ϴ�.
	{

		std::shared_ptr<Car> sp = wp.lock();

		if (sp)
		{
			sp->Go();
		}
		else
		{
			std::cout << "sp ��ȿ ���� ����" << std::endl;
		}
	}
	

}


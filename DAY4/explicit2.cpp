#include <string>
#include <vector>

void f1(std::string s)      {}
void f2(std::vector<int> v) {}

int main()
{
	std::string      s1("A"); // ok
	std::string      s2 = "A";// ok.. explicit �ƴ�.

	std::vector<int> v1(10);  // ok
	std::vector<int> v2 = 10; // error.

	// �Ʒ� 2���� �� ������ ������.. �Ǵ°� ������� ? �ȵǴ°� ������� ?
	f1("A"); // ok.  std::string s = "A" ���. ��, explicit ������ �ƴ�.

	f2(10);  // error. std::vector<int> v = 10; �� �ȵ�. 
			//						��, explicit ������

}
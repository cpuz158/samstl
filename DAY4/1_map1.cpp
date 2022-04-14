// 6_map1
#include "show.h"
#include <map>  

// map : pair �� �����ϴ� set,   key ������ value �� ����

int main()
{
	std::map<std::string, std::string> m;

	// ��� �ֱ�
	// 1. pair ���� �ֱ�
	std::pair<std::string, std::string> p1("mon", "������");

	m.insert(p1);


	// 2. make_pair
	m.insert( std::make_pair("tue", "ȭ����") );


	// 3. emplace
	m.emplace("wed", "������");


	// 4. [] ������ ���
	m["sun"] = "�Ͽ���";

	//------------------------
	
	// 2. �ݺ��ڿ� ���ؼ�
	// �ݺ��ڴ� "����� ������ ��Ȱ"�� �ϴµ�.
	// map �� ��Ҵ� "std::pair" �Դϴ�.
	// ����, map �� �ݺ��ڴ� "pair �� ������"
	// ó�� �����ϸ� �˴ϴ�.
	auto p2 = m.begin();

	std::cout << p2->first << std::endl;
	std::cout << p2->second << std::endl;


	// 3. [] �����ڿ� ���ؼ�
	std::string s1 = m["sun"]; // �ʾȿ� sun Ű�� �����Ƿ� s2�� "�Ͽ���"
	std::string s2 = m["sat"]; // ���� �ʾȿ� "sat" Ű�� �����ϴ�.
							   // �� ���� {"sat", ""} �� ������ �׸��� �߰��˴ϴ�.

	// �׷���, Ű���� �ִ��� �˻��Ҷ��� �Ʒ� ó������ ������
	if (m["aaa"] != "")  // ������ ������, �̼��� Ű���� ��������� �˴ϴ�.
	{					  // �ǵ��� �ܼ��� ���� ���µ�, �� �ڵ�� Ű���� �����̵˴ϴ�.

	}
	// ����� �Ʒ� �ڵ�� �ϼ���
	auto ret = m.find("sun");

	if ( ret == m.end() ) {} // "sun" �� ���� ���.


	// C++20 ���� �Ʒ� ��� �Լ��� �߰��Ǿ����ϴ�.
	if (m.contains("sun"))
	{
	}

}





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
	
	// �ݺ��ڿ� ���ؼ�
	// �ݺ��ڴ� "����� ������ ��Ȱ"�� �ϴµ�.
	// map �� ��Ҵ� "std::pair" �Դϴ�.
	// ����, map �� �ݺ��ڴ� "pair �� ������"
	// ó�� �����ϸ� �˴ϴ�.
	auto p2 = m.begin();

	std::cout << p2->first << std::endl;
	std::cout << p2->second << std::endl;







	// �ݺ��ڿ� ���ؼ�
	auto p = m.find("wed"); // find(Ű��)

	// p�� ����ؼ� "wed : ������" �̶�� ����غ�����

	// [] ������
	std::cout << m["sun"] << std::endl; 
}





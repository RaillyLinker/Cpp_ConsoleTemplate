#include "template.h"

// [��� ���� �Ҵ�]
int Template::sampleInt = 1;

// [��� �Լ� ����]
bool Template::sampleFunc(const std::string &sampleParam1, const std::string &sampleParam2)
{
	std::cout << "sampleParam1: " << sampleParam1 << ", sampleParam2: " << sampleParam2 << std::endl;
	return true;
}
#include <iostream>

int main()
{
	int student[5]{};
	int total = 0;

	for (int next = 0; next < 5; ++next)
	{
		std::cout << next + 1 << "��° �л���  ������ �Է��ϼ���. : ";
		std::cin >> student[next];
	}

	for (int next = 0; next < 5; ++next)
	{
		total += student[next];
	}

	std::cout << "�л����� ���� ���� : " << total << std::endl;
	std::cout << "�л����� ��� ���� : " << total / 5 << std::endl;

	return 0;
}
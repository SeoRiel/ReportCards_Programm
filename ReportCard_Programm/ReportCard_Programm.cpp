#include <iostream>

int main()
{
	int student[5]{};
	int total = 0;

	for (int next = 0; next < 5; ++next)
	{
		std::cout << next + 1 << "번째 학생의  성적을 입력하세요. : ";
		std::cin >> student[next];
	}

	for (int next = 0; next < 5; ++next)
	{
		total += student[next];
	}

	std::cout << "학생들의 총합 점수 : " << total << std::endl;
	std::cout << "학생들의 평균 점수 : " << total / 5 << std::endl;

	return 0;
}
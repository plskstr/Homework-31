#include <iostream>

template <typename T1, typename T2>
auto Diff(T1 number1, T2 number2) { return number1 - number2; }
template <typename T1, typename T2, typename T3>
auto Max(T1 number1, T2 number2, T3 number3)
{
	if ((number1 > number2 && number1 < number3) || (number2 > number1 && number1 < number3))
		auto max = number3;
	else
		if ((number1 > number3 && number1 < number2) || (number3 > number1 && number1 < number2))
			auto max = number2;
		else
			auto max = number1;
	return auto(max);
}

using std::cout;
using std::cin;

int main()
{
	cout << Max(4, 3, 3.05) << "\n";
	system("pause");
	return 0;
}

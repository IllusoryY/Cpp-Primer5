#include<iostream>
#include<string>

using std::cin; using std::cout; using std::endl;
using std::string;

int main10()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while (cin >> ch)
	{
		//×ª»»³ÉÐ¡Ð´
		ch = tolower(ch);

		if (ch == 'a') ++aCnt;
		else if (ch == 'e') ++eCnt;
		else if (ch == 'i') ++iCnt;
		else if (ch == 'o') ++oCnt;
		else if (ch == 'u') ++uCnt;
	}
	cout << "Number of vowel a(A): \t" << aCnt << '\n'
		<< "Number of vowel e(E): \t" << eCnt << '\n'
		<< "Number of vowel i(I): \t" << iCnt << '\n'
		<< "Number of vowel o(O): \t" << oCnt << '\n'
		<< "Number of vowel u(U): \t" << uCnt << endl;

	system("pause");
	return 0;
}
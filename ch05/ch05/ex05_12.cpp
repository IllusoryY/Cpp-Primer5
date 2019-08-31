#include<iostream>
#include<string>

using std::cin; using std::cout; using std::endl;

int main12()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, tabCnt = 0, newLineCnt = 0;
	unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;

	char ch, preCh = '\0';
	//use goto
	/*while (cin >> std::noskipws >> ch)
		isBegin: switch (ch)
		{
		case 'a':
		case 'A':
			++aCnt;
			break;
		case 'e':
		case 'E':
			++eCnt;
			break;
		case 'i':
		case 'I':
			++iCnt;
			break;
		case 'o':
		case 'O':
			++oCnt;
			break;
		case 'u':
		case 'U':
			++uCnt;
			break;
		case ' ':
			++spaceCnt;
			break;
		case '\t':
			++tabCnt;
			break;
		case '\n':
			++newLineCnt;
			break;
		case'f':
			while (cin >> ch) {
				switch (ch)
				{
				case'f':
					++ffCnt;
					goto isBegin;
				case'l':
					++flCnt;
					goto isBegin;
				case'i':
					++fiCnt;
					goto isBegin;
				default:
					goto isBegin;
				}
			}
		}*/

	//use storage previous alpahet
	while (cin >> std::noskipws >> ch) {
		switch (ch)
		{
		case 'a':
		case 'A':
			++aCnt;
			break;
		case 'e':
		case 'E':
			++eCnt;
			break;
		case 'i':
			if (preCh == 'f') ++fiCnt;
		case 'I':
			++iCnt;
			break;
		case 'o':
		case 'O':
			++oCnt;
			break;
		case 'u':
		case 'U':
			++uCnt;
			break;
		case ' ':
			++spaceCnt;
			break;
		case '\t':
			++tabCnt;
			break;
		case '\n':
			++newLineCnt;
			break;
		case'f':
			if (preCh == 'f') ++ffCnt;
			break;
		case'l':
			if (preCh == 'f') ++flCnt;
			break;
		}
		preCh = ch;
	}
	 

	cout << "Number of vowel a(A): \t" << aCnt << '\n'
		<< "Number of vowel e(E): \t" << eCnt << '\n'
		<< "Number of vowel i(I): \t" << iCnt << '\n'
		<< "Number of vowel o(O): \t" << oCnt << '\n'
		<< "Number of vowel u(U): \t" << uCnt << '\n'
		<< "Number of space: \t" << spaceCnt << '\n'
		<< "Number of tab char: \t" << tabCnt << '\n'
		<< "Number of new line: \t" << newLineCnt << '\n'
		<< "Number of string: ff: \t" << ffCnt << '\n'
		<< "Number of string: fl: \t" << flCnt << '\n'
		<< "Number of string fi: \t" << fiCnt << endl;

	system("pause");
	return 0;
}
/**
 * Testovací program pro zásobník implementovaný v poli.
 */
#include <iostream>
#include <iomanip>
#include <string>
#include "Stack.h"

using namespace std;
using namespace StackInArray;

/**
 * Funkce demonstruje testování parity závorek (, [, {, ), ], } pomocí zásobníku
  * 
 * @param Text Øetìzec obsahující výraz se závorkami
 * @return Funkce vrací true, pokud je výraz správnì uzávorkován, jinak vrací false.
 */
bool TestParentheses(string Text)
{
	Stack S;
	Init(S);
	for(unsigned int i = 0; i < Text.length(); i++)
	{
		switch (Text[i])
		{
		case '(':
			Push(S, ')');
			break;
		case '[':
			Push(S, ']');
			break;
		case '{':
			Push(S, '}');
			break;
		case ')':
		case ']':
		case '}':
			if (!IsEmpty(S))
			{
				char ch = Pop(S);
				if (ch != Text[i])
					return false;
			}
			else
			{
				return false;
			}
			break;
		}
	}
	return IsEmpty(S);
}

/**
 * Hlavní funkce programu
 */
void main()
{
	cout << TestParentheses("()") << endl;
	cout << TestParentheses(")(") << endl;
	cout << TestParentheses("(()())") << endl;
	cout << TestParentheses("[()()]") << endl;
	cout << TestParentheses("{()()()[()()]}") << endl;
	cout << TestParentheses("[()()") << endl;
	cout << TestParentheses("[(]()]") << endl;
	cout << TestParentheses("[[()]") << endl;
}


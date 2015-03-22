/**
 * Testovac� program pro z�sobn�k implementovan� v poli.
 */
#include <iostream>
#include <iomanip>
#include <string>
#include "Stack.h"

using namespace std;
using namespace StackInArray;

/**
 * Funkce demonstruje testov�n� parity z�vorek (, [, {, ), ], } pomoc� z�sobn�ku
  * 
 * @param Text �et�zec obsahuj�c� v�raz se z�vorkami
 * @return Funkce vrac� true, pokud je v�raz spr�vn� uz�vorkov�n, jinak vrac� false.
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
 * Hlavn� funkce programu
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


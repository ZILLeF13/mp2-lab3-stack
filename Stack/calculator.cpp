#include "calculator.h"
#include <string>
#include <iostream>



int TCalculator::Priority(char elem) 
{
	switch (elem)
	{
	case'(':return 1;
	case')':return 1;
	case'+':return 2;
	case'-':return 2;
	case'*':return 3; 
	case'/':return 3;
	default: return 0;
	}
}

bool TCalculator::CheckBrackets()
{
	st.Clear_Stack();
	for (int i = 0; i < infix.size(); i++)
	{
		if (infix[i] == '(')
		{
			st.Push(infix[i]);
		}
		else
			if (infix[i] == ')')
			{
				if (st.Empty() == true)
				{
					return false;
				}
				st.Pop();
			}
	}
	return st.Empty();
}

void TCalculator::ToPostfix()
{
	postfix = "";
	string src = "(" + infix + ")";
	char elem = '!';
	unsigned int i = 0;
	st.Clear_Stack();
	while (i < src.size())
	{
		if (src[i] == '+' || src[i] == '-' || src[i] == '*' || src[i] == '/')
		{
			postfix += " ";
			elem = st.Pop();
			while (Priority(elem) >= Priority(src[i]))
			{
				postfix += elem;
				elem = st.Pop();
			}
			st.Push(elem);
			st.Push(src[i]);
		}
		else
			if (src[i] == '(')
			{
				st.Push(src[i]);
			}
			else
				if (src[i] == ')')
				{
					elem = st.Pop();
					while (elem != '(')
					{
						postfix += elem;
						elem = st.Pop();
					}
				}
				else
					if (src[i] >= '0' && src[i] <= '9')
					{
						postfix += src[i];
					}
		i++;
	}
}

double TCalculator::CalcPostfix()
{
	unsigned int i = 0;
	st2.Clear_Stack();
	while (i < postfix.size())
	{
		if (postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/')
		{
			double k2 = st2.Pop();
			double k1 = st2.Pop();
			switch (postfix[i])
			{
			case'+': {st2.Push(k1 + k2); break; }
			case'-': {st2.Push(k1 - k2); break; }
			case'*': {st2.Push(k1 * k2); break; }
			case'/': {st2.Push(k1 / k2); break; }
			default: return 0;
			}
		}
		if (postfix[i] >= '0' && postfix[i] <= '9')
		{
			st2.Push(postfix[i] - '0');
		}
		i++;
	}
	return st2.Top();
}

double TCalculator::Calc()
{
	return 0;
}
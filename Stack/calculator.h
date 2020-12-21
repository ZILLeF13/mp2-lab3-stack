#pragma once
#include "stack.h"
#include <string>

using namespace std;

class TCalculator
{
private:
	string infix;
	string postfix;
	Stack<char> st;
	Stack<double> st2;
	int Priority(char elem);
public:
	
	TCalculator() : st(100), st2(100)
	{
		infix = "";
		postfix = "";
	}

	string GetExpression()
	{
		return infix;
	}

	void SetExpression(string expr)
	{
		infix = expr;
		if (CheckBrackets() != true)
		{
			throw "SetExperession";
		}
	}

	string GetPostfix()
	{
		return postfix;
	}
	
	bool CheckBrackets();

	void ToPostfix();

	double CalcPostfix();

};


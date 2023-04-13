#include <iostream>
#include <stack>
using namespace std;

void FIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int prec(char c)
{
	if (c == '+' || c == '-')
	{
		return 1;
	}
	else if (c == '*' || c == '/')
	{
		return 2;
	}
	else if (c == '^')
	{
		return 3;
	}
	else
	{
		return -1;
	}
}
void infixtopost(string s)
{
	stack<char> st;
	string result;
	for (int i = 0; i < s.length(); i++)
	{
		if ( (s[i] >= 'a' and s[i] <= 'z') || (s[i] >= 'A' and s[i] >= 'Z') )
		{
			result += s[i];
		}
		else if (s[i] == '(')
		{
			st.push(s[i]);
		}
		else if (s[i] == ')')
		{
			while (st.top() != '(')
			{
				result += st.top();
				st.pop();
			}
			st.pop();
		}
		else
		{
			while (st.size() and (prec(s[i]) <= prec(st.top()) ) )
			{
				result += st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while (s.size())
	{
		result += st.top();
		st.pop();
	}
	cout << result;
}
int main()
{
	FIO();

	string exp = "a+b*(c^d-e)^(f+g*h)-i";
	infixtopost(exp);
	return 0;
}
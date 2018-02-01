#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool is_balanced(string expression) {
	char *openb = "({[";
	char *closeb = ")}]";
	bool error = false;
	int length = expression.length();
	stack<char> st;
	for (int i = 0; i<length; i++){
		char ch = expression[i];
		if (ch == '{')
			st.push(ch);
		else if (ch == '[')
			st.push(ch);
		else if (ch == '(')
			st.push(ch);
		else{
			if (st.empty()){
				error = true;
				break;
			}
			char t = st.top();
			if ((ch == ')' && t == '(') || (ch == '}' && t == '{') || (ch == ']' && t == '['))
				st.pop();
			else{
				error = true;
				break;
			}
		}
	}
	if (error)
		return false;
	else if (!error && st.empty())
		return true;
}
#if 0
int main(){
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++){
		string expression;
		cin >> expression;
		bool answer = is_balanced(expression);
		if (answer)
			cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
#endif
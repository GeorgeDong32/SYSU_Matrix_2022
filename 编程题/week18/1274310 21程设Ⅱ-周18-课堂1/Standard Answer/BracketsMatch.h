#include <stack>
#include <iostream>
using namespace std;


bool Matched(const string& brackets, const int& length) {
	
	stack<char> judger;
	for(int i=0; i<length; ++i) {
		if(brackets[i] == '(' || brackets[i] == '[' || brackets[i] == '{') {
			judger.push(brackets[i]);
		}
		else {
			if(judger.empty()) {
				return false;
			}
			else if(brackets[i] == ')' && judger.top() != '(') {
				return false;
			}
			else if(brackets[i] == ']' && judger.top() != '[') {
				return false;
			}
			else if(brackets[i] == '}' && judger.top() != '{') {
				return false;
			}
			else {
				judger.pop();
			}
		}
	}
	
	return judger.empty();
}

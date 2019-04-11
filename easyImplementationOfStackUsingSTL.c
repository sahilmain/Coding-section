#include <iostream>
#include<stack>
using namespace std;
void show(stack<char> s)
{
    while(!s.empty())
    {
        cout<<s.top()<< " ";
        s.pop();
    }
}
int main() {
stack<char> s;
s.push('s');
s.push('a');
s.push('h');
s.push('i');
s.push('l');
s.push('s');
s.push('i');
s.pop();
s.pop();
show(s);
	return 0;
}
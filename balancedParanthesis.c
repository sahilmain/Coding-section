//PARANTHESIS MATCHING
#include <iostream>
#include<stack>
using namespace std;

bool check(string exp)
{
    char x;
 stack<char> s;
 for(int i=0;i<exp.length();i++)
 {
    if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        { 
        s.push(exp[i]);
        continue;
        }
     switch(exp[i])
     {
         case ')':
            x=s.top();
            if(x=='{' || x=='[')
           {
               return false;
           }
           else if(x=='(')
           {
               s.pop();
           }
           break;
           
            case '}':
            x=s.top();
            if(x=='(' || x=='[')
           {
               return false;
           }
           else if(x=='{')
           {
               s.pop();
           }
           break;
     
          case ']':
            x=s.top();
            if(x=='{' || x=='(')
           {
               return false;
           }
           else if(x=='[')
           {
               s.pop();
           }
           break;
     }
 }
return (s.empty());
    
}

int main() {
string s;
cin>>s;
if(check(s))
cout<<"BALANCED";
else
cout<<"UNBALANCED";
	return 0;
}
%{
#include <iostream>
using namespace std;
int mylineno = 0;
%}

%option noyywrap

string  \"[^\n"]+\"

ws      [ \t]+

name    [a-zA-Z_]([a-zA-Z0-9_])*

number  [1-9]*[0-9]
%%

{ws} { }

"/*"    {
    int c;
    while((c = yyinput()) != 0) {
        if(c == '\n')
            ++mylineno;
        else if(c == '*') {
            if((c = yyinput()) == '/')
                break;
            else
                unput(c);
        }
    }
}

{name}    cout << "name " << YYText() << '\n';
{number}  cout << "number " << YYText() << '\n';
\n        mylineno++;


%%



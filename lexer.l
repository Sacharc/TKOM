%{
#include <iostream>
using namespace std;
int mylineno = 0;
%}

%option noyywrap

ws      [ \t]+

name    [a-zA-Z_]([a-zA-Z0-9_])*
number  [1-9]*[0-9]
lp_operator [+\-]
hp_operator [*/]
conditional_operator (==)|(!=)|(<=)|(>=)|<|>
assignment =
separator ,
open_index_bracket \[
close_index_bracket \]
sublist :
open_list_bracket {
close_list_bracket }
open_bracket (
close_bracket )
if if
else else
foreach foreach
end end

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
{lp_operator}  cout << "lp_operator " << YYText() << '\n';
{hp_operator}  cout << "hp_operator " << YYText() << '\n';
{conditional_operator}  cout << "conditional_operator " << YYText() << '\n';
{assignment}  cout << "assignment " << YYText() << '\n';
{separator}  cout << "separator " << YYText() << '\n';
\n        mylineno++;


%%



%{
#include <iostream>
#include "TokenType.h"
using namespace std;
int mylineno = 0;
%}

%option noyywrap

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

"if"        return TokenType::If;
"else"      return TokenType::Else;
"foreach"   return TokenType::Foreach;
"end"       return TokenType::End;
"filter"    return TokenType::Filter;
"size"      return TokenType::Size;
"sort"      return TokenType::Sort;
"function"  return TokenType::Function;
{name}      return TokenType::Name;
{number}    return TokenType::Number;
"+"         return TokenType::Plus;
"-"         return TokenType::Minus;
"*"         return TokenType::Multiply;
"/"         return TokenType::Divide;
"="         return TokenType::Assignment;
"=="        return TokenType::Equality;
"!="        return TokenType::Inequality;
">="        return TokenType::GreaterOrEqual;
"<="        return TokenType::LessOrEqual;
"<"         return TokenType::Less;
">"         return TokenType::Greater;
","         return TokenType::Separator;
"{"         return TokenType::OpenListBracket;
"}"         return TokenType::CloseListBracket;
"["         return TokenType::OpenIndexBracket;
"]"         return TokenType::CloseIndexBracket;
":"         return TokenType::Sublist;
"("         return TokenType::OpenBracket;
")"         return TokenType::CloseBracket;
\n          mylineno++;


%%



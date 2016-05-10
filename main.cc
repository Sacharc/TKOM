#include <iostream>
#include <FlexLexer.h>
#include "TokenType.h"

int main()
{
    FlexLexer* lexer = new yyFlexLexer;
    while(1) {
        int token = lexer->yylex();
        if(token == 0)
            break;
        std::cout<< getTokenName(token) <<" " <<lexer->YYText() <<std::endl;
    }

    return 0;
}

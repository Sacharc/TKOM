//
// Created by msacharc on 10.05.16.
//

#ifndef PROJECT_TOKENTYPE_H
#define PROJECT_TOKENTYPE_H

enum TokenType {
    Name,
    Number,
    Separator,
    OpenIndexBracket,
    CloseIndexBracket,
    Sublist,
    OpenListBracket,
    CloseListBracket,
    OpenBracket,
    CloseBracket,
    If,
    Else,
    Foreach,
    End,
    Filter,
    Size,
    Sort,
    Assignment,
    Or,
    And,
    Equality,
    Inequality,
    Less,
    Greater,
    LessOrEqual,
    GreaterOrEqual,
    Plus,
    Minus,
    Multiply,
    Divide,
};

#endif //PROJECT_TOKENTYPE_H

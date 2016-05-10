//
// Created by msacharc on 10.05.16.
//

#ifndef PROJECT_TOKENTYPE_H
#define PROJECT_TOKENTYPE_H

#include <string>

enum TokenType {
    Name = 1,
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

inline std::string getTokenName(int token) {
    switch(token) {
        case Name:              return "Name";
        case Number:            return "Number";
        case Separator:         return "Separator";
        case OpenIndexBracket:  return "OpenIndexBracket";
        case CloseIndexBracket: return "CloseIndexBracket";
        case Sublist:           return "Sublist";
        case OpenListBracket:   return "OpenListBracket";
        case CloseListBracket:  return "CloseListBracket";
        case OpenBracket:       return "OpenBracket";
        case CloseBracket:      return "CloseBracket";
        case If:                return "If";
        case Else:              return "Else";
        case Foreach:           return "Foreach";
        case End:               return "End";
        case Filter:            return "Filter";
        case Size:              return "Size";
        case Sort:              return "Sort";
        case Assignment:        return "Assignment";
        case Or:                return "Or";
        case And:               return "And";
        case Equality:          return "Equality";
        case Inequality:        return "Inequality";
        case Less:              return "Less";
        case Greater:           return "Greater";
        case LessOrEqual:       return "LessOrEqual";
        case GreaterOrEqual:    return "GreaterOrEqual";
        case Plus:              return "Plus";
        case Minus:             return "Minus";
        case Multiply:          return "Multiply";
        case Divide:            return "Divide";
        default:                return "";
    }
}

#endif //PROJECT_TOKENTYPE_H

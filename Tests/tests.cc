#include <gtest/gtest.h>
#include <FlexLexer.h>
#include <sstream>
#include "TokenType.h"
#include <string>

int getTokenFromString(std::string str) {
    std::stringstream ss(str);
    FlexLexer* lexer = new yyFlexLexer(&ss);
    return lexer->yylex();
}

TEST(Nametest, PositiveNos) {
    ASSERT_EQ(TokenType::Name, getTokenFromString("name"));
}

TEST(SquaotTest, PositiveNos) {
    ASSERT_EQ(TokenType::Number, getTokenFromString("5"));
}

TEST(SeparatorTest, PositiveNos) {
    ASSERT_EQ(TokenType::Separator, getTokenFromString(","));
}

TEST(Test, PositiveNos) {
    ASSERT_EQ(TokenType::Separator, getTokenFromString(","));
}

TEST(OpenIndexBracketTest, PositiveNos) {
    ASSERT_EQ(TokenType::OpenIndexBracket, getTokenFromString("["));
}

TEST(CloseIndexBracketTest, PositiveNos) {
    ASSERT_EQ(TokenType::CloseIndexBracket, getTokenFromString("]"));
}

TEST(SublistTest, PositiveNos) {
    ASSERT_EQ(TokenType::Sublist, getTokenFromString(":"));
}

TEST(OpenListBracketTest, PositiveNos) {
    ASSERT_EQ(TokenType::OpenListBracket, getTokenFromString("{"));
}

TEST(CloseListBracketTest, PositiveNos) {
    ASSERT_EQ(TokenType::CloseListBracket, getTokenFromString("}"));
}

TEST(OpenBracketTest, PositiveNos) {
    ASSERT_EQ(TokenType::OpenBracket, getTokenFromString("("));
}

TEST(CloseBracketTest, PositiveNos) {
    ASSERT_EQ(TokenType::CloseBracket, getTokenFromString(")"));
}

TEST(IfTest, PositiveNos) {
    ASSERT_EQ(TokenType::If, getTokenFromString("if"));
}

TEST(ElseTest, PositiveNos) {
    ASSERT_EQ(TokenType::Else, getTokenFromString("else"));
}

TEST(ForeachTest, PositiveNos) {
    ASSERT_EQ(TokenType::Foreach, getTokenFromString("foreach"));
}

TEST(EndTest, PositiveNos) {
    ASSERT_EQ(TokenType::End, getTokenFromString("end"));
}

TEST(FilterTest, PositiveNos) {
    ASSERT_EQ(TokenType::Filter, getTokenFromString("filter"));
}

TEST(SizeTest, PositiveNos) {
    ASSERT_EQ(TokenType::Size, getTokenFromString("size"));
}

TEST(SortTest, PositiveNos) {
    ASSERT_EQ(TokenType::Sort, getTokenFromString("sort"));
}

TEST(AssignmentTest, PositiveNos) {
    ASSERT_EQ(TokenType::Assignment, getTokenFromString("="));
}

TEST(OrTest, PositiveNos) {
    ASSERT_EQ(TokenType::Or, getTokenFromString("||"));
}

TEST(AndTest, PositiveNos) {
    ASSERT_EQ(TokenType::And, getTokenFromString("&&"));
}

TEST(EqualityTest, PositiveNos) {
    ASSERT_EQ(TokenType::Equality, getTokenFromString("=="));
}

TEST(InequalityTest, PositiveNos) {
    ASSERT_EQ(TokenType::Inequality, getTokenFromString("!="));
}

TEST(LessTest, PositiveNos) {
    ASSERT_EQ(TokenType::Less, getTokenFromString("<"));
}

TEST(GreaterTest, PositiveNos) {
    ASSERT_EQ(TokenType::Greater, getTokenFromString(">"));
}

TEST(LessOrEqualTest, PositiveNos) {
    ASSERT_EQ(TokenType::LessOrEqual, getTokenFromString("<="));
}

TEST(GreaterOrEqualTest, PositiveNos) {
    ASSERT_EQ(TokenType::GreaterOrEqual, getTokenFromString(">="));
}

TEST(PlusTest, PositiveNos) {
    ASSERT_EQ(TokenType::Plus, getTokenFromString("+"));
}

TEST(MinusTest, PositiveNos) {
    ASSERT_EQ(TokenType::Minus, getTokenFromString("-"));
}

TEST(MultiplyTest, PositiveNos) {
    ASSERT_EQ(TokenType::Multiply, getTokenFromString("*"));
}

TEST(DivideTest, PositiveNos) {
    ASSERT_EQ(TokenType::Divide, getTokenFromString("/"));
}

TEST(FunctionTest, PositiveNos) {
    ASSERT_EQ(TokenType::Function, getTokenFromString("function"));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

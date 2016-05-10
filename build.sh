#Temp buildscript
flex -+ lexer.l
g++ main.cc lex.yy.cc -std=c++11 -o lexer
#Temp buildscript
flex -+ lexer.l
g++ main.cc lex.yy.cc -o lexer
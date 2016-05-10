lexer: main.cc lex.yy.cc
	g++ main.cc lex.yy.cc -std=c++11 -o lexer

lex.yy.cc: lexer.l
	flex -+ lexer.l


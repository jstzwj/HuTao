parser grammar HutaoParser;

options {
    tokenVocab=HutaoLexer;
}


stmt: simple_stmt;
simple_stmt: small_stmt (';' small_stmt)* (';')? NEWLINE;

small_stmt: (pass_stmt);

pass_stmt: 'pass';

single_input: NEWLINE | simple_stmt | NEWLINE;
file_input: (NEWLINE | stmt)* EOF;
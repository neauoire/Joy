/*
    module  : trunc.c
    version : 1.3
    date    : 07/19/23
*/
#ifndef TRUNC_C
#define TRUNC_C

/**
1690  trunc  :  F  ->  I
I is an integer equal to the float F truncated toward zero.
*/
PRIVATE void trunc_(pEnv env)
{
    ONEPARAM("trunc");
    FLOAT("trunc");
    UNARY(INTEGER_NEWNODE, (int64_t)FLOATVAL);
}
#endif

/*
    module  : usetop.h
    version : 1.2
    date    : 01/22/24
*/
#ifndef USETOP_H
#define USETOP_H

#define USETOP(PROCEDURE, NAME, TYPE, BODY)				\
    PRIVATE void PROCEDURE(pEnv env)					\
    {									\
	ONEPARAM(NAME);							\
	TYPE(NAME);							\
	if (!env->ignore)						\
	    BODY;							\
	POP(env->stck);							\
    }
#endif

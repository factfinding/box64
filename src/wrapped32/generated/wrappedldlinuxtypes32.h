/******************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.1.1) *
 ******************************************************************/
#ifndef __wrappedldlinuxTYPES32_H_
#define __wrappedldlinuxTYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void* (*pFv_t)(void);
typedef void* (*pFp_t)(void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(___tls_get_addr, pFv_t) \
	GO(__tls_get_addr, pFp_t)

#endif // __wrappedldlinuxTYPES32_H_

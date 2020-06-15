#ifndef _DEBUG_H_
#define _DEBUG_H_

#ifdef DEBUG
    #define DEBUG_RUN 1
#else
    #define DEBUG_RUN 0
#endif

#define DEB(fmt, ...) 	            	          \
    do {                                          \
        if (DEBUG_RUN) 	                          \
        fprintf(stderr,                           \
            "Debug information ::: "              \
            "FILE: %s FUNC: %s() LINE:%d - "      \
            fmt,                                  \
            __FILE__,                             \
            __func__, 	                          \
            __LINE__,                             \
            __VA_ARGS__);                         \
        else ;                                    \
    } while (0)

#endif //_DEBUG_H_

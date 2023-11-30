#ifndef ASSERT_HANDLER_H_
#define ASSERT_HANDLER_H_

#define ASSERT(expression)      \
    do                          \
    {                           \               
        if (!(expression))      \
        {                       \
            assert_handler();   \
        }                       \
    } while(0)                  \

#endif

void assert_handler(void);
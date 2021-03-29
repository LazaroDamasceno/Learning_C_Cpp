#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("%s", "****Limit size*****");
    printf("\nCHAR_BIT: %lld" , CHAR_BIT);
    printf("\nCHAR_MIN: %lld" , CHAR_MIN);
    printf("\nCHAR_MAX: %lld" , CHAR_MAX);
    printf("\nUCHAR_MAX: %lld " , UCHAR_MAX);
    printf("\nSCHAR_MIN: %lld " , SCHAR_MIN);
    printf("\nSCHAR_MAX: %lld " , SCHAR_MAX);
    printf("\nMB_LEN_MAX: %lld " , MB_LEN_MAX);
    printf("\nSHRT_MIN: %lld " , SHRT_MIN);
    printf("\nSHRT_MAX: %lld " , SHRT_MAX);
    printf("\nUSHRT_MAX: %lld " , USHRT_MAX);
    printf("\nINT_MIN: %lld " , INT_MIN);
    printf("\nINT_MAX: %lld " , INT_MAX);
    printf("\nUINT_MAX: %lld " , UINT_MAX);
    printf("\nLONG_MIN: %lld " , LONG_MIN);
    printf("\nLONG_MAX: %lld " , LONG_MAX);
    printf("\nULONG_MAX: %lld " , ULONG_MAX);
    printf("\nLLONG_MIN: %lld " , LLONG_MIN);
    printf("\nLLONG_MAX: %lld " , LLONG_MAX);
    printf("\nULLONG_MAX: %lld " , ULLONG_MAX);
    printf("\nLONG_LONG_MIN: %lld " , LONG_LONG_MIN);
    printf("\nLONG_LONG_MAX: %lld ", LONG_LONG_MAX);
    printf("\nULONG_LONG_MAX: %lld " , ULONG_LONG_MAX);
    printf("\n****Size in bits****");
    printf("\nCHAR_BIT: %lld " , sizeof(CHAR_BIT));
    printf("\nCHAR_MIN: %lld " , sizeof(CHAR_MIN));
    printf("\nCHAR_MAX: %lld " , sizeof(CHAR_MAX));
    printf("\nUCHAR_MAX: %lld " , sizeof(UCHAR_MAX));
    printf("\nSCHAR_MIN: %lld " , sizeof(SCHAR_MIN));
    printf("\nSCHAR_MAX: %lld " , sizeof(SCHAR_MAX));
    printf("\nMB_LEN_MAX: %lld " , sizeof(MB_LEN_MAX));
    printf("\nSHRT_MIN: %lld " , sizeof(SHRT_MIN));
    printf("\nSHRT_MAX: %lld " , sizeof(SHRT_MAX));
    printf("\nUSHRT_MAX: %lld " , sizeof(USHRT_MAX));
    printf("\nINT_MIN: %lld " , sizeof(INT_MIN));
    printf("\nINT_MAX: %lld " , sizeof(INT_MAX));
    printf("\nUINT_MAX: %lld" , sizeof(UINT_MAX));
    printf("\nLONG_MIN: %lld" , sizeof(LONG_MIN));
    printf("\nLONG_MAX: %lld" , sizeof(LONG_MAX));
    printf("\nULONG_MAX: %lld" , sizeof(ULONG_MAX));
    printf("\nLLONG_MIN: %lld" , sizeof(LLONG_MIN));
    printf("\nLLONG_MAX: %lld" , sizeof(LLONG_MAX));
    printf("\nULLONG_MAX: %lld" , sizeof(ULLONG_MAX));
    printf("\nLONG_LONG_MIN: %lld" , sizeof(LONG_LONG_MIN));
    printf("\nLONG_LONG_MAX: %lld", sizeof(LONG_LONG_MAX));
    printf("\nULONG_LONG_MAX: %lld" , sizeof(ULONG_LONG_MAX));
}

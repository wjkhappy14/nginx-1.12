#include <ngx_config.h>

// ��� �޷��������ⲿ���� ___iob_func�Ĵ��� VS2015֮��汾�����˱��
FILE* __cdecl __iob_func(unsigned i) 
{
    return __acrt_iob_func(i);
}
#include <stdio.h>
#include <stdlib.h>

#ifndef __thiscall
  #define __thiscall __attribute__((thiscall))
#endif
#ifndef __cdecl
  #define __cdecl __attribute__((cdecl))
#endif
#ifndef __stdcall
  #define __stdcall __attribute__((stdcall))
#endif

typedef struct A {
    int a;
    int b;
    int c;
} A;

int __thiscall method1(A* _this, int a) {
    _this->c = a * _this->b;

    return _this->c;
}

int main(int argc, const char **argv, const char **envp) {
    A a;
    a.b = argc;

    printf("argc = %d\n", argc);

    printf("result = %d\n", method1(&a, 9));

    system("pause");

    return 0;
}

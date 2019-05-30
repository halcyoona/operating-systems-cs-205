global _test

_test:
    push    ebp
    mov     ebp, esp
    push    ebx
    mov     eax, [ebp+8]
    mov     ebx, [ebp+12]
    div     ebx
    pop     ebp
    ret
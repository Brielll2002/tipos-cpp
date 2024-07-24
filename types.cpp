#include <iostream>
#include <locale.h>
#include <xmmintrin.h>//__m's
#include <emmintrin.h>//__m128d

void return_nothing(){
    std::cout<<"Funcao 'return_nothing\n";
}

int main(){
    setlocale(LC_ALL, "");

    //VOID
    return_nothing();
    void *pv;//ponteiro void recebe qualquer tipo
    int *pint, i;

    pv = &i;
    pint = (int *)pv;
    std::cout<<"Local de memoria da variavel 'pint': "<<pint<<'\n';
    //

    //BOOL
    bool bb = 1;
    printf("true: %d\n",bb);
    bb = 0;
    printf("false: %d\n",bb);
    //

    //CHAR
    char ch1{'a'};
    wchar_t ch2{L'a'};
    char16_t ch3{u'a'};
    char32_t ch4{U'a'};

    printf("Valor da variavel 'ch1' na tabela ASCII: %i", ch1);
    //

    //INT
    __int8 nSmall; //inteiro de 8-bit | __int8 é sinônimo do tipo char
    __int16 nMedium; //inteiro de 16-bit | __int16 é sinônimo do tipo short
    __int32 nLarge; //inteiro de 32-bit | __int32 é sinônimo do tipo int
    __int64 nHuge; //inteiro de 64-bit | __int64 é sinônimo do tipo long long
    //

    //__m
    __m64 x;//não há suporte para o tipo de dados __m64 em processadores x64
    __m128 y;//não há suporte para o tipo de dados __m128 em processadores ARM
    __m128d yd;//não há suporte para o tipo de dados __m128d em processadores ARM
    __m128i yi;//não há suporte para o tipo de dados __m128i em processadores ARM
    //

    //__ptr
    int * __ptr32 p32;//ponteiro de 32-bit
    int * __ptr64 p64;//ponteiro de 64-bit

    p32 = (int * __ptr32)malloc(4);
    *p32 = 32;
    std::cout<<*p32<<"\n";
    free(p32);

    p64 = (int * __ptr64)malloc(4);
    *p64 = 64;
    std::cout<<*p64<<"\n";
    free(p64);
    //

    return 0;
}
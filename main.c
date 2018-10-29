#include <stdio.h>

int main(int argc, const char * argv[])
    {
    // ilk 1 kac satir olacagi. sonraki 10 arrayin icindeki arrayin boyutu. yani adın uzunlugu
    char **twoDimensional[2][2]={
                                 {'a','b'},
                                 {'c','d'}
                                };
    char firstChar[10]={"necdet"};
    int i=0;
    printf("%c",twoDimensional[0][0]);
    printf("%c\n",twoDimensional[0][1]);
    printf("%c",twoDimensional[1][0]);
    printf("%c\n",twoDimensional[1][1]);
    /*while (*(firstChar+i)!='\0')
        {
            printf("%c\n",*(firstChar+i));
            i++;
        }*/
    }


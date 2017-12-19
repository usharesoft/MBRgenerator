#include <stdio.h>
#include "mbr_win7.h"

int main() {

    // This main file output the first 440 Bytes of MBR

    int i;
    for(i=0;i<440;i++){
        printf("%c",mbr_win7_0x0[i]);
    }
    return 0;
}
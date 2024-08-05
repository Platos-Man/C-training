#include <stdio.h>

int main(){

    short int a = 32767; // 2 bytes (-32768 to 32767) %hd 
    printf("short int %hd\n", a);
    
    unsigned short int b = 65535; // 2 bytes (0 to 65535) %hu
    printf("unsigned short int %hu\n", b);

    int c = 2147483647; // 4 bytes (-2,147,483,648 to 2,147,483,647) %d
    printf("int %d\n", c);

    unsigned int d = 4294967295; // 4 bytes (0 to 4,294,967,295) %u
    printf("unsigned int %u\n", d);

    long long int e = 9223372036854775807; // 8 bytes (-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807) %lld
    printf("long long int %lld\n", e);

    unsigned long long int f = 18446744073709551615U; // 8 bytes (0 to 18,446,744,073,709,551,615) %llu | U at end removes warning
    printf("usigned long long int %llu\n", f);

    return 0;
}

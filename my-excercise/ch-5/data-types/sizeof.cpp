#include <cstdio>
#include <cstdint>
using namespace std;

int main( int argc, char ** argv ) {
    printf("size of char is %ld bits\n", sizeof(char) * 8);
    printf("size of short int is %ld bits\n", sizeof(short int) * 8);
    printf("size of int is %ld bits\n", sizeof(int) * 8);
    printf("size of long int is %ld bits\n", sizeof(long int) * 8);
    printf("size of long long int is %ld bits\n", sizeof(long long int) * 8);
    
    printf("\n");
    
    printf("size of int8_t is %ld bits\n", sizeof(int8_t) * 8);
    printf("size of int16_t is %ld bits\n", sizeof(int16_t) * 8);
    printf("size of int32_t is %ld bits\n", sizeof(int32_t) * 8);
    printf("size of int64_t is %ld bits\n", sizeof(int64_t) * 8);

    return 0;
}

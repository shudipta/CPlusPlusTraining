#include <cstdio>
#include <cstdint>
using namespace std;

int main( int argc, char ** argv ) {
    long int x = 4;
    printf("01. value of x is %ld\n", x);

    long int xL = 4L;
    printf("02. value of xL is %ld\n", xL);

    long long int xLL = 4LL;
    printf("03. value of xLL is %lld\n", xLL);

    long long unsigned int xU = 4U;
    printf("04. value of xU is %llu\n", xU);

    x = 0227;
    printf("05. value of x is %ld\n", x);

    x = 0x11f32;
    printf("06. value of x is %ld\n", x);

    x = 0b1001001;
    printf("07. value of x is %ld\n", x);

    return 0;
}

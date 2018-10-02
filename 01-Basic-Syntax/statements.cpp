#include<cstdio>
using namespace std;

int main(int argc, char ** argv) {
    // puts statement that print a string followed by a newline in stdout
    puts("Hello world!");

    // var declaration
    int x;
    // assignment
    x = 42;
    // print statement with '%d' specifier
    printf("x is %d\n", x);
    printf("x is %d\n", x = x * 23 + 34);

	return 0; 
}

#include <cstdio>
using namespace std;

// a very simple class
class Class1 {
// access modifier is 'private' by default
    int i;
public:
    void setvalue( const int value );
    int getvalue() const;
};

void Class1::setvalue( const int value ) {
    i = value;
}

int Class1::getvalue() const {
    return i;
}

int main(int argc, char const *argv[])
{
    int i = 47;
    Class1 object1;

    object1.setvalue(i);
    printf("value is %d\n", object1.getvalue());
    return 0;
}

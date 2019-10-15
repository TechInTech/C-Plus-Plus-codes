#include <iostream>
#include <climits>

int main()
{
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long long n_long = LONG_MAX;
    char c = 'a';
    double d = 3.0;
    float f = 0.348;
    typedef struct test_04
    {
        /* data */
        int id;
        char name[6];
        long long time;
        char add[4];
    }data;

    char name[6];
    cout << "name\t" << sizeof(name) << endl;

    cout << "data" << sizeof(data) << endl;  



    cout << "int is  " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof(n_short) << " bytes." << endl;
    cout << "long is " << sizeof(n_long) << " bytes." << endl;
    cout << "char is " << sizeof(c) << " bytes." << endl;
    cout << "double is " << sizeof(d) << " bytes." << endl;
    cout << "double is " << sizeof(n_long) << " bytes." << endl;
    cout << "float is " << sizeof(f) << " bytes." << endl << endl;

    cout << "Maximum values: " << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl << endl;

    cout << "Minium int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    return 0;
}
#include <iostream>
#include <bitset>
#include <cstdint>

using namespace std;

int main(int argc, char *argv[])
{

    int x = 4, n;
    int c = 18;
    int f = 10;

    bitset<4> a{0b1101};
    bitset<4> b{0b0001};

    cout << "NOT\n";
    cout << "a: " << a << "\n";
    cout << "~a: " << (~a) << "\n\n";

    cout << "OR\n";
    cout << "a: " << a << "\nb: " << b << "\n";
    cout << (a | b) << "\n\n";

    cout << "AND\n";
    cout << "a: " << a << "\nb: " << b << "\n";
    cout << (a & b) << "\n\n";

    cout << "XOR\n";
    cout << "a: " << a << "\nb: " << b << "\n";
    cout << (a ^ b) << "\n\n";

    cout << "SHIF LEFT\n";
    cout << "a: " << a << "\n";
    cout << "<<a: " << (a << 3) << "\n\n";

    cout << "SHIF RIGHT\n";
    cout << "b: " << b << "\n";
    cout << ">>b: " << (b >> 3) << "\n";

    //part 2
    cout << "--------------------------\n" << "BIT TO NUMBER\n";

    cout << "Enter bit: ";
    cin >> n;
    x ^= 1 << n;
    cout << x << "\n";

    cout << "--------------------------\n" << "ON/OFF BIT \n";


    const unsigned char option = 0x01;
    const unsigned char option2 = 0x02;
    
    unsigned char myflags = 0;

    myflags |= option;
    myflags &= ~option2;

    cout << static_cast<bool>(myflags & option) << '\n';
    cout << static_cast<bool>(myflags & option2) << '\n';

    cout << "--------------------------\n" << "SWAP \n";

    cout << "c: " << c << "\nd: " << f << "\n";

    c = c ^ f;
    f = c ^ f;
    c = c ^ f;

    cout << "c: " << c << "\nd: " << f << "\n";

    return 0;
}
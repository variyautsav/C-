#include <iostream>
using namespace std;

int main() {
    char ch = 'A', ch1 = 'Z', ch2 = 'a';
    int ch3 = 122;
    cout << "chr: " << ch << " - value: " << int(ch) << endl;
    cout << "chr: " << ch1 << " - value: " << int(ch1) << endl;
    cout << "chr: " << ch2 << " - value: " << int(ch2) << endl;
    cout << "chr: " << char(ch3) << " - value: " << ch3 << endl;

    return 0;
}
//  chr: A  - value:65
//  chr: Z  - value:90
//  chr: a  - value:97
//  chr: z  - value:122

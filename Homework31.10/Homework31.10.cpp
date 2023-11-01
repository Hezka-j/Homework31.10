#include <iostream>
using namespace std;

int main()
{
    int m;
    int n;
    int* pm = &m;
    int* pn = &n;
    
    cout << pm << "\n";
    cout << pn << "\n";
    
    
    cout << "Int count definition: " << (pn - pm) / sizeof(int) << "\n";
    cout << "Int definition: " << pn - pm << "\n";
    cout << "Byte defenition: " << (pn - pm) * sizeof(int) << "\n";
}


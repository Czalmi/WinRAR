#include <iostream>
#include "rar.hpp"
#include <cstdlib>

using namespace std;

int main(int argc,char ** argv)
{
if(argc!=2) return 1;
size_t size;
unsigned char* data = (unsigned char*)readFile(argv[1],size);
cout << "rozmiar: " << size << endl;
cout << data;
delete data;
return 0;
}

#include <iostream>
#include <fstream>
#include <list>

#include "smart_pointer.h"

using namespace std;

int main()
{
    fstream c_m;
    c_m.open("cat_m.txt");
    if(!c_m)
    {
        cerr<<"Error 404"<<endl;
        return -1;
    }
     while(!c_m.eof())
    {
        c_m>>
    }
    cout<<endl;
    c_m.close();
}

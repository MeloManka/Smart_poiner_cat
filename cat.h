#ifndef CAT_H_INCLUDED
#define CAT_H_INCLUDED

#include "smart_poiner.h"
#include<iostream>

class Cat{

    int health;
    int honors;

    Cat(int a, int b)
    {
        health = a;
        honors = b;
    }

    public:
        SmartPointer<Cat> ptr;

        static bool test_pair(const Cat &cat_w,const Cat &cat_m)
        {
            return ((cat_m.health == cat_w.health)&&(cat_m.honors == cat_w.honors))? true : false;
        }

        friend istream & operator>>(ostream &,Cat);
};

istream & operator >> (ostream * stream,class Cat &cat)
{
    stream >> cat.health >> cat.honors;
    return stream;
}




#endif // CAT_H_INCLUDED


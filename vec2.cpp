#include<iostream>
#include<vector>
#include"easy_list.h"
using namespace std;

void itc_rev_list(vector <int> &mass)//Number 6
{
    int i, len;
    len = mass.size();
    if (len > 0)
        for (i = 0; i < len/2 + len%2; i++)
        {
                if(mass[i] != mass[len - (i+1)])
                {
                    mass[i] = mass[len-(i+1)] + mass[i];
                    mass[len - (i+1)] = mass[i] - mass[len - (i+1)];
                    mass[i] = mass[i] - mass[len - (i+1)];
                }
        }

}

void itc_rev_par_list(vector <int> &mass)//Number 7
{
    int i;
        for (i = 0; i < mass.size(); i = i + 2)
        {
            if (mass.size() % 2 == 0)
            {
                mass[i] = mass[i+1] + mass[i];
                mass[i+1] = mass[i] - mass[i+1];
                mass[i] = mass[i] - mass[i+1];
            }
            else
            {
                if (i != mass.size() - 1)
                {
                    mass[i] = mass[i+1] + mass[i];
                    mass[i+1] = mass[i] - mass[i+1];
                    mass[i] = mass[i] - mass[i+1];
               }

        }

    }
}

void itc_rshift_list(vector <int> &mass){ //Number 8
    int i, cif;
    i = mass.size();
    cif = mass[mass.size() - 1];
    for(i; i > 0; i--)
        mass[i] = mass[i - 1];
    mass[0] = cif;
}

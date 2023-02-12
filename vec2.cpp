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

void itc_rshift_list(vector <int> &mass){
    int i, cif;
    if (mass.size() > 0)
    {
    i = mass.size() - 1;
    cif = mass[i];
    for(i; i > 0; i--)
        mass[i] = mass[i - 1];
    mass[0] = cif;
    }
}

void itc_lshift_list(vector <int> &mass){
    int i, cif;
    if (mass.size() > 0)
    {
    i = 1;
    cif = mass[0];
    for(i; i < mass.size(); i++)
        mass[i - 1] = mass[i];
    mass[mass.size() - 1] = cif;
    }
}

void itc_super_shift_list(vector <int> &mass, int n){
    int i;
    if (n > 0)
        for (i = 0; i < n; i++)
            itc_rshift_list(mass);
    if (n < 0)
    {
        n = n * (- 1);
        for (i = 0; i < n; i++)
            itc_lshift_list(mass);
    }
}

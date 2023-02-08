#include<iostream>
#include<vector>
#include"easy_list.h"
using namespace std;

void itc_even_index_list(const vector <int> &mass, vector <int> &mass2) //Number 1
{
    int i;
    if (mass.size() > 0)
        for(i = 0; i < mass.size(); i++)
            if (i % 2 == 0)
                mass2.push_back(mass[i]);
}

void itc_even_parts_list (const vector <int> &mass1, vector <int> &mass2)//Number 2
{
    int i;
    for (i = 0; i < mass1.size(); i++)
        if(mass1[i] % 2 == 0)
            mass2.push_back(mass1[i]);
}

int itc_positive_list(const vector <int> &mass) //Number 3
{
    int i, kol;
    kol = 0;
    if (mass.size() > 0)
    for (i = 0; i < mass.size(); i++)
        if (mass[i] > 0)
            kol++;
    return kol;
}

int itc_sl_list(const vector <int> &mass)//Number 4
{
    int i, kol;
    kol = 0;
    if (mass.size() > 0)
    for (i = 0; i < mass.size(); i++)
        if (mass[i] > mass[i - 1])
            kol++;
    return kol;
}

bool itc_same_parts_list(const vector <int> &mass)//Number 5
{
    int i;
    for (i = 1; i < mass.size(); i++)
        if((mass[i] > 0 && mass[i - 1] > 0) || (mass[i] < 0 && mass[i - 1] < 0))
            return 1;
        return 0;
}

#include<iostream>
#include<vector>
#include"easy_list.h"
using namespace std;

void itc_rev_list(vector <int> &mass)//Number 6
{
    int i;
    if (mass.size() > 0)
        for (i = mass.size(); i > 0; i--)
            cout << mass[i - 1] << " ";
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

#include<iostream>
#include<vector>
#include"easy_list.h"
using namespace std;

void itc_rev_list(const vector <int> &mass)//Number 6
{
    int i;
    if (mass.size() > 0)
        for (i = mass.size(); i > 0; i--)
            cout << mass[i - 1] << " ";
}

void itc_rev_par_list(const vector <int> &mass)//Number 7
{
    int i;
        for (i = 0; i < mass.size(); i++)
        {
            if(i % 2 == 0)
                cout << mass[i + 1] << " ";
            else
            if (i == (mass.size() - 1))
                cout << mass[i];
            else
                cout << mass[i - 1] << " ";

        }

}

#include<iostream>
#include<vector>
#include"easy-list.h"
using namespace std;

void itc_even_index_list(const vector <int> &mass1, vector <int> &mass2){
    int i;
    for(i = 0; i < mass1.size(); i++)
    {
        if (i % 2 == 0)
            mass2.push_back(mass1[i]);
    }
}

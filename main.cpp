#include "make_random_vector.hpp"
#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int fun1(int a, int b)
{
    return a > b;
}

int fun2(int a, int b)
{
    return a < b;
}

struct comp
{
    comp() : c(0) {}
    int operator()(int a, int b) 
    { 
        if (a < b) {
            c++;
            cout << "this: " <<  this->c << '\n';
        }
        return a > b;
    }
    int c;
};

struct comp2
{
    comp2() : c(0) {}
    int operator()(int a, int b)
    {
        if (a < b) {
            c++;
            cout << "this: " << this->c << '\n';
        }
        return a > b;
    }
    int operator()(int a) { return a < b; }
    int b;
    int c;
};


int main()
{
    /*cout << "Works fine!\n" << endl;
    auto rand_vec = make_random_vector(10, 0, 10);
    for (auto& it : rand_vec) {
        cout << it << endl;
    }
    
    cout << "-----------ZAD 1-----------" << endl;
    sort(rand_vec.begin(), rand_vec.end(), comp());
    for (auto& it : rand_vec) {
        cout << it << endl;
    }

    cout << "\n-----------ZAD 2-----------" << endl;
    
    int No = count(rand_vec.begin(), rand_vec.end(), 7);
    cout << "Liczba wystapien liczby 7: " << No << endl;

    cout << "\n-----------ZAD 3-----------" << endl;

    comp cop;
    sort(rand_vec.begin(), rand_vec.end(), cop);

    cout << "\n-----------ZAD 4-----------" << endl;
    int count_more_than = std::count_if(rand_vec.begin(), rand_vec.end(), comp2());
    cout << count_more_than << endl;


    cout << "\n-----------ZAD 5-----------" << endl;
    int bb;
    cin >> bb;
    comp2 cop2;
    cop2.b = bb;
    int zlicz = std::count_if(rand_vec.begin(), rand_vec.end(), cop2);
    cout << zlicz << endl;*/

    cout << "\n-----------Cwiczenia-----------" << endl;
    string aa;
    cin >> aa;

    /*cout << aa << endl;
    auto aaa = std::adjacent_find(aa.begin(), aa.end());
    if (aaa != aa.end()) {
        cout << *aaa << endl;
    }*/


    /*string search_kitty = "kotek";
    string search_doggo = "piesek";
    auto search = std::search(aa.begin(), aa.end(), search_doggo.begin(), search_doggo.end());
    
    if (search != aa.end()) {
        cout << "Znaleziono: " << search_doggo << endl;
    }*/

    /*cout << aa << endl;
    reverse(aa.begin(), aa.end());
    cout << aa << endl;*/

    vector< double > a(10, 100);
    vector< double > b(10, 2);

    cout << inner_product(a.begin(), a.end(), b.begin(), 0) << endl;
}
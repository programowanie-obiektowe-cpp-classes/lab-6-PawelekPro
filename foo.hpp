#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    std::for_each(people.rbegin(), people.rend(), [&](auto& a) {
        static int i = 0;
        a.birthday();
        if (a.isMonster()) {
            ret_v[i] = 'n';
        }
        else {
            ret_v[i] = 'y';
        }
        i++;
    });

    return ret_v;
}
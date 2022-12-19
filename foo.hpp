#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    std::transform(people.begin(), people.end(), ret_v.rbegin(), [](Human& human){human.birthday(); char tmp = human.isMonster() ? 'n': 'y'; return tmp;});

    return ret_v;
}
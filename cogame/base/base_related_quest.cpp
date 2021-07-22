//
//  base_related_quest.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/22/21.
//

#include "base_related_quest.hpp"


using namespace co;

bool related_quest::is_related(const int & quest_id) const
{
    return _related_quest_ids.contains(quest_id);
}


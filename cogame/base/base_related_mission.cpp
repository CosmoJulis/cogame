//
//  base_related_mission.cpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#include "base_related_mission.hpp"
#include "mission.hpp"


using namespace co;
using namespace base;
using namespace mission_ns;

bool related_mission::is_related_mission(const int & mission_id) const {
    return _related_mission_ids.contains(mission_id);
}

bool related_mission::is_related_mission(const mission & m) const {
    return _related_mission_ids.contains(m.get_id());
}

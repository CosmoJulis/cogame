//
//  base_related_mission.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#pragma once

#include <unordered_set>


namespace co {

namespace mission_ns { class mission; }

namespace base {


class related_mission {
protected:
    std::unordered_set<int> _related_mission_ids;
public:
    bool is_related_mission(const int & mission_id) const;
    bool is_related_mission(const mission_ns::mission & m) const;
};

}

}

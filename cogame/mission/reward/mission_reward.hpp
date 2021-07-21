//
//  mission_reward.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#pragma once

#include "base.hpp"


namespace co::mission_ns {

class reward : public base::property {
public:
    // TODO: reward 对应 单个奖励
    // TODO: 支持奖励多选一
    reward(int id = 0);
    virtual ~reward();
};

}

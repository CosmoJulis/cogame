//
//  mission.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/16/21.
//

#ifndef mission_hpp
#define mission_hpp

#include <boost/poly_collection/base_collection.hpp>

namespace co {

class mission {
public:
    mission() { }
    virtual ~mission() { }
};

class mission_manager {
public:
    
    boost::base_collection<mission> missions;
    
};

}

#endif /* mission_hpp */

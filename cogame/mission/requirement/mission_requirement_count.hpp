//
//  mission_requirement_count.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/21/21.
//

#pragma once

#include "common.hpp"
#include <thread>
#include <chrono>


namespace co {

namespace item_ns { class item; }
namespace creature_ns { class creature; }

namespace mission_ns {

template <typename T>
class requirement_count {
public:
    requirement_count(const T & t, int count) :
    _t(t), _count(count)
    {
//        std::cout << "t.id" << this->get_id() << std::endl;
//        auto s = std::thread([this](){
//            std::this_thread::sleep_for(std::chrono::seconds(1));
//            std::cout << "t.id" << this->get_id() << std::endl;
//        });
//        s.detach();
    }
    
    requirement_count(const requirement_count & rc) :
    _t(rc._t), _count(rc._count)
    {
        
    }
    
    
    virtual ~requirement_count() { }
    
//    std::shared_ptr<T> get_entry() const {
//        return std::make_shared<T>(_t);
//    }
    
    int get_id() const {
        return _t.get_id();
    }
    
    int get_count() const {
        return _count;
    }

    bool is_checked() const;


protected:
    T _t;
    const int _count;
};


template <typename T>
inline
constexpr
auto make_requirement_count(const T & t, int count) {
    return requirement_count<T>(t, count);
}

}

}


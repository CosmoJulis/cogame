//
//  common.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#pragma once

//#include <boost/poly_collection/base_collection.hpp>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include "base.hpp"


namespace co {

namespace base {

class exception : public std::exception
{
public:
    exception(const std::string & error) noexcept :
    _error(error) { }
    
    const char * what() const noexcept override
    {
        return _error.c_str();
    }
private:
    std::string _error;
};

}


/*
template <typename T, typename U>
struct is_kind_of {
    static constexpr bool value = std::is_base_of<U, T>::value;
};

template <typename T>
struct is_kind_of<T, T> : public std::true_type { };

template<typename T, typename U>
inline
constexpr
bool is_kind_of_v = is_kind_of<T, U>::value;

#define micro_co_is_kind_of(CLASSNAME) \
    class CLASSNAME; \
    template <typename T> \
    struct is_kind_of_##CLASSNAME \
    : public co::is_kind_of<T, CLASSNAME > { }; \
    template <typename T> \
    inline \
    constexpr \
    bool is_kind_of_##CLASSNAME##_v = co::is_kind_of_v<T, CLASSNAME >;

*/

/*
 // <name>
 template <typename T>
 struct is_kind_of_<name> : public is_kind_of<T, <name>> { };

 template <typename T>
 inline
 constexpr
 bool is_kind_of_<name>_v = is_kind_of_v<T, <name>>;
 */




}

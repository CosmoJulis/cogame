//
//  common.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#pragma once

#include <iostream>

namespace co {

//template <typename T, typename U>
//constexpr
//bool is_kind_of(const T & t) {
//    return static_cast<const U *>(&t);
//}
//
//template <typename T, typename U>
//constexpr
//bool is_virtual_of(const T & t) {
//    return dynamic_cast<const U *>(&t);
//}

//template<typename T, typename U>
//struct {
//
//}

template <typename T, typename U>
struct is_kind_of {
//    static bool value = std::is_base_of<T, U>::value;
};

template <typename T>
struct is_kind_of<T, T> : public std::true_type { };

template<typename T, typename U>
bool is_kind_of_v = is_kind_of<T, U>::value;


}

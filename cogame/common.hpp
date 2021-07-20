//
//  common.hpp
//  cogame
//
//  Created by Cosmo Julis on 7/20/21.
//

#pragma once

#include <iostream>

namespace co {

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

}

// Copyright 2009-present MongoDB, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#if !defined(BSONCXX_V1_CONFIG_CONFIG_HPP)
#define BSONCXX_V1_CONFIG_CONFIG_HPP

/* #undef BSONCXX_POLY_USE_IMPLS */
#define BSONCXX_POLY_USE_STD

///
/// @file
/// Provides macros describing the bsoncxx library configuration.
///

#if defined(BSONCXX_PRIVATE_DOXYGEN_PREPROCESSOR)

#if !defined(BSONCXX_POLY_USE_IMPLS)
#define BSONCXX_POLY_USE_IMPLS
#endif // !defined(BSONCXX_POLY_USE_IMPLS)

#if !defined(BSONCXX_POLY_USE_STD)
#define BSONCXX_POLY_USE_STD
#endif // !defined(BSONCXX_POLY_USE_IMPLS)

#endif // BSONCXX_PRIVATE_DOXYGEN_PREPROCESSOR

///
/// @def BSONCXX_POLY_USE_IMPLS
/// Defined when configured to use bsoncxx's own C++17 polyfill implementations.
///

///
/// @def BSONCXX_POLY_USE_STD
/// Defined when configured to use the C++ standard library for C++17 features.
///

#endif // !defined(BSONCXX_V1_CONFIG_CONFIG_HPP)

cmake_minimum_required(VERSION 3.10)

set(SUORCE_FILES permutation_bits_algorithm.cpp permutation_byts_algorithm.cpp steganograpthy_algorithm.cpp protector_impl.cpp)

add_library(crypto_core SHARED src/permutation_bits_algorithm.cpp)
cmake_minimum_required(VERSION 3.10)

add_executable(crypto_app src/crypto_app.cpp)

target_link_libraries(crypto_core)
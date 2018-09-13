cmake_minimum_required(VERSION 3.12)
project(cmake_numpy)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -stdlib=libc++ -std=c++1y") # FIX ISSUE: use C++14 feature


#find_library (LIBSTDCXX NAMES stdc++)  # FIX ISSUE: ld: symbol(s) not found for architecture x86_64
#add_compile_options(-stdlib=libstdc++)

# BOOST CONFIGURATION
#set(Boost_USE_STATIC_LIBS ON)
set(BOOST_ROOT "/usr/local/Cellar/boost/1.67.0_1")  # BOOST ROOT configuration
#set(Boost_INCLUDE_DIR /usr/local/Cellar/boost/1.67.0_1)
#set(Boost_LIBRARY_DIR /usr/local/Cellar/boost/1.67.0_1/lib)
find_package(Boost COMPONENTS system filesystem REQUIRED)
#include_directories("/Users/zhenwang/anaconda3/envs/opencv3/include/python3.6m")
#include_directories("/Users/zhenwang/anaconda3/include/python3.6m")
include_directories(${Boost_INCLUDE_DIRS})

set(SOURCE_FILES main.cpp)
add_executable(cmake_numpy ${SOURCE_FILES})

#target_link_libraries(cmake_numpy ${LIBSTDCXX} ${Boost_LIBRARIES})
target_link_libraries(cmake_numpy ${Boost_LIBRARIES})
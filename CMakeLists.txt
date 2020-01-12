cmake_minimum_required(VERSION 3.0)
project(ping-core LANGUAGES CXX VERSION 0.0.1)
file(GLOB ping_SRCS "src/ping/*.cpp")

include("cmake/PingProto.cmake")

# 3rd-party libraries
find_package(Threads REQUIRED)
find_package(clog)
# find_package(Dot)

# ping-core compiler configuration
add_library(ping-core ${ping_SRCS})
target_compile_features(ping-core PRIVATE cxx_range_for)

target_include_directories(ping-core PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

# link libraries
target_link_libraries(ping-core PRIVATE ping-core-proto)
target_link_libraries(ping-core PRIVATE clog::clog)
# target_link_libraries(ping-core PRIVATE ${CLOG_LIBS})
# target_link_libraries(ping-core PRIVATE ${DOT_LIBS})

enable_testing()
add_subdirectory(test)
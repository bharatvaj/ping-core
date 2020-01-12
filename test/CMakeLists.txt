cmake_minimum_required(VERSION 3.15.4)

# example
list(APPEND TEST_TARGETS api)

foreach(TEST_TARGET ${TEST_TARGETS})
    add_executable(${TEST_TARGET} ${TEST_TARGET}_test.cpp)
    target_link_libraries(${TEST_TARGET} PRIVATE ping-core)
    add_test(${TEST_TARGET}_test ${TEST_TARGET})
endforeach()

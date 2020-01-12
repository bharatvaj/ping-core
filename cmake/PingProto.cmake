project(ping-core)

file(GLOB PING_PROTOS "proto/*.proto")

find_package(Protobuf 3.11.0 REQUIRED)

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${PING_PROTOS})

add_library(ping-core-proto INTERFACE)
target_sources(ping-core-proto INTERFACE ${PROTO_SRCS})
target_include_directories(ping-core-proto INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
)

target_link_libraries(ping-core-proto INTERFACE protobuf::libprotobuf)
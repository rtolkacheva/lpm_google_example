cmake_minimum_required(VERSION 3.5)
project(LPM_GOOGLE_EXAMPLE CXX)

add_executable(lpm_google_example
               libfuzzer_example.cc)

find_package(protobuf REQUIRED)

add_library(lpm_google_example-proto)

protobuf_generate(LANGUAGE cpp
                  TARGET lpm_google_example-proto
                  PROTOS libfuzzer_example.proto)

set_property(TARGET lpm_google_example-proto
             PROPERTY COMPILE_FLAGS ${NO_FUZZING_FLAGS})

target_link_libraries(lpm_google_example
                      lpm_google_example-proto
                      protobuf-mutator-libfuzzer
                      protobufd
                      )

set(FUZZING_FLAGS "-fsanitize=fuzzer-no-link,address")
set(FUZZING_FLAGS_BINARY "-fsanitize=fuzzer,address")

set_property(TARGET lpm_google_example
             PROPERTY COMPILE_FLAGS ${FUZZING_FLAGS})
set_property(TARGET lpm_google_example
             PROPERTY LINK_FLAGS ${FUZZING_FLAGS})

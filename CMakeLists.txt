cmake_minimum_required(VERSION 3.5)
project(LPM_GOOGLE_EXAMPLE CXX)

# External dependencies
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake/external)
include(ProtobufMutator)
include(protobuf) # FIXME double building protobuf

add_executable(lpm_google_example
               libfuzzer_example.cc)

add_library(lpm_google_example-proto)

foreach(lib ${LPM_LIBRARIES})
    find_library(${lib} REQUIRED_FILES)
endforeach(lib)

protobuf_generate(LANGUAGE cpp
                  TARGET lpm_google_example-proto
                  PROTOS libfuzzer_example.proto)
target_link_libraries(lpm_google_example-proto
                      ${PROTOBUF_LIBRARIES}
                      )

set_property(TARGET lpm_google_example-proto
             PROPERTY COMPILE_FLAGS ${NO_FUZZING_FLAGS})
             include(CMakePrintHelpers)
             cmake_print_variables(LPM_LIBRARIES)
target_link_libraries(lpm_google_example
                      lpm_google_example-proto
                      protobuf-mutator-libfuzzer
                      )

set(FUZZING_FLAGS "-fsanitize=fuzzer-no-link,address")
set(FUZZING_FLAGS_BINARY "-fsanitize=fuzzer,address")

# set_property(TARGET lpm_google_example
#              PROPERTY COMPILE_FLAGS ${FUZZING_FLAGS})
set_property(TARGET lpm_google_example
             PROPERTY LINK_FLAGS ${FUZZING_FLAGS_BINARY})
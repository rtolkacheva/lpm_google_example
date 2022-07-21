TARGET := lpm_google_example
CXX := clang++
CXXFLAGS := -g -fsanitize=fuzzer-no-link 
CXXLIBS := -lprotobuf-mutator -lprotobuf-mutator-libfuzzer -lprotobufd
CXX_LD_FLAGS :=-fsanitize=fuzzer,address 

$(TARGET): libfuzzer_example.pb.o libfuzzer_example.cc
	$(CXX) $(CXXFLAGS) $(CXXLIBS) $(CXX_LD_FLAGS) $< -o $@

libfuzzer_example.pb.h: proto
libfuzzer_example.pb.cc: proto
proto:
	protoc libfuzzer_example.proto --fatal_warnings --cpp_out=.

libfuzzer_example.pb.o: libfuzzer_example.pb.cc
	$(CXX) -g $< -c -o $@

clean:
	rm -f *.pb.* $(TARGET)

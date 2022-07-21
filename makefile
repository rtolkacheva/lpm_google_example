TARGET := lpm_google_example
CXX := clang++
CXXFLAGS := -g -fsanitize=fuzzer,address 
CXXLIBS := -lprotobuf-mutator -lprotobuf-mutator-libfuzzer -lprotobufd

$(TARGET): libfuzzer_example.pb.o libfuzzer_example.cc
	$(CXX) -v $(CXXFLAGS) $(CXXLIBS) $< -o $@

libfuzzer_example.pb.h: proto
libfuzzer_example.pb.cc: proto
proto:
	protoc libfuzzer_example.proto --fatal_warnings --cpp_out=.

libfuzzer_example.pb.o: libfuzzer_example.pb.cc
	$(CXX) -g $< -c -o $@

clean:
	rm -f *.pb.* $(TARGET)

CXX=clang++
CXXFLAGS=-Wall

Descendo: main.o
        $(CXX) -o $@ $(LDFLAGS) $^

main.o: main.cpp Battle.h Role.h Animation.h ExceptionHandling.h
        $(CXX) -c $(CXXFLAGS) -o $@ $<

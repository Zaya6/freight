SRC = $(wildcard src/*.cpp)
INCLUDE = -Iinclude -Iextern/fmt/include -Iextern/toml11
CXXFLAGS := -std=c++17 -Wall -g -Bstatic
LIB = extern/fmt/build/libfmt.a

.PHONY : clean all build clean_build

all: build/freight
	

build/freight: build

### run target
.PHONY : run
run:
	./build/freight

### building phonys

.PHONY : clean_build
clean_build: clean build

.PHONY : build
build:
	g++ $(CXXFLAGS) $(SRC) -o build/freight $(INCLUDE) --static $(LIB) -Wl,--as-needed 


### cleaning

.PHONY : clean
clean:
	rm -rf build/*

.PHONY : cleanall
cleanall:
	rm -rf .frieght/extern/*
	rm -rf .frieght/includes/*
	rm -rf .frieght/libraries/*

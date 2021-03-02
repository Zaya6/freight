SRC = src/main.cpp
LIB = -lfmt

.PHONY : clean all build clean_build

all: build/freight
	

build/freight: build

clean_build: clean build

build:
	g++ -g -std=c++17 -Wall $(SRC) -L .freight_backup/lib $(LIB) -I .freight_backup/include -o build/freight 

### fmt library

#.frieght/include/fmt: .frieght/extern/fmt
#	cp $(wildcard .frieght/extern/fmt/*.a) .frieght/lib/
#	cp -r $(wildcard extern/fmt/include/*) .frieght/include/
	
#.frieght/extern/fmt:
#	mkdir .frieght/extern/fmt
#	cmake -S extern/fmt -B .frieght/extern/fmt
#	$(MAKE) -C .frieght/extern/fmt

### boost filesystem library

#.frieght/include/boost: .frieght/extern/filesystem
#	cp $(wildcard .frieght/extern/filesystem/*.a) .frieght/libraries/
#	cp -r $(wildcard extern/filesystem/include/*) .frieght/include/

#.frieght/extern/filesystem:
#	mkdir .frieght/extern/filesystem
#	cmake -S extern/filesystem -B .frieght/extern/filesystem
#	$(MAKE) -C .frieght/extern/filesystem

### cleaning



clean:
	rm -rf build/*

cleanall:
	rm -rf .frieght/extern/*
	rm -rf .frieght/includes/*
	rm -rf .frieght/libraries/*

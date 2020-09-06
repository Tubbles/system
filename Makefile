mkfile_path := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

src_path := $(mkfile_path)/src
olc_path := $(mkfile_path)/olcPixelGameEngine

inc_dirs := -I$(olc_path)

srcs := $(wildcard $(src_path)/*.cpp)
incs := $(olc_path)/olcPixelGameEngine.h

all: system

clean:
	-rm system

system: $(srcs) $(incs) $(MAKEFILE_LIST)
	g++ $(inc_dirs) $(srcs) -o system -ggdb -std=c++20 -lX11 -lGL -lpthread -lpng -lstdc++fs

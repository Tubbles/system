mkfile_path := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

src_path := $(mkfile_path)/src
olc_path := $(mkfile_path)/olcPixelGameEngine

inc_dirs := -I$(olc_path)

srcs := $(src_path)/main.cpp $(src_path)/font.cpp $(src_path)/keyparse.cpp
incs := $(olc_path)/olcPixelGameEngine.h

all: system

system: $(srcs) $(incs)
	g++ $(inc_dirs) $(srcs) -o system -std=c++20 -lX11 -lGL -lpthread -lpng -lstdc++fs

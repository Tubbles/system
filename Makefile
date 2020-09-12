Q := @

mkfile := $(realpath $(lastword $(MAKEFILE_LIST)))
mkfile_path := $(dir $(mkfile))

src_path := $(mkfile_path)/src
olc_path := $(mkfile_path)/olcPixelGameEngine

inc_dirs := -I$(olc_path)

srcs := $(wildcard $(src_path)/*.cpp)
incs := $(olc_path)/olcPixelGameEngine.h

flags := -ggdb -std=c++20 -lX11 -lGL -lpthread -lpng -lstdc++fs
depflags = -MT $@ -MMD -MP -MF $<.d

clean_dep := $(filter clean, $(MAKECMDGOALS))

all: system

.SUFFIXES:

-include $(patsubst %,%.d,$(srcs))

system: $(patsubst %,%.o,$(srcs)) $(incs) $(mkfile) $(clean_dep)
	@echo "  [LINK] $@"
	$(Q)g++ $(flags) $(patsubst %,%.o,$(srcs)) -o system

$(src_path)/%.o: $(src_path)/% $(mkfile) $(clean_dep)
	@echo "  [COMPILE] $< -> $@"
	$(Q)g++ $(flags) $(depflags) $(inc_dirs) -c $< -o $@

.PHONY: clean
clean:
	$(Q)rm -fr system $(src_path)/*.o

.PHONY: all cmake_prepare cmake_build clean run
.SILENT: all cmake_prepare cmake_build clean run

all: cmake_prepare cmake_build
	echo "* done"

cmake_prepare:
	echo "* prepare build with cmake"
	cmake -Bbuild/ .

cmake_build:
	echo "* build with cmake"
	make -s --directory=build -j$(nproc)

clean:
	echo "* cleaning"
	rm -rf build
	echo "* done"

run:
	./build/demo

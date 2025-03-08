cmake -S ./lib -B ./lib/build_vs
cmake --build ./lib/build_vs --config MinSizeRel

cmake -S ./linux -B ./linux/build_vs
cmake --build ./linux/build_vs --config MinSizeRel

cmake -S ./macos -B ./macos/build_vs
cmake --build ./macos/build_vs --config MinSizeRel

cmake -S ./src/core/ -B ./src/core/build_vs
cmake --build ./src/core/build_vs --config MinSizeRel

cmake -S ./test -B ./test/build_vs
cmake --build ./test/build_vs --config MinSizeRel

ninja -C ./windows/build

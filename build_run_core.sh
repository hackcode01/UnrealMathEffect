#!/bin/bash

cmake -S ./src/core/ -B build
cmake --build ./build
./build/math_core

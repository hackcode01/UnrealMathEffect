#!/bin/bash

cmake -S .\src\core\ -B build_vs
cmake --build .\build_vs\ --config MinSizeRel
.\build_vs\MinSizeRel\math_core.exe

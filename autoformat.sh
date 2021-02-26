#!/bin/bash
find src/ -name '*.cpp' -o -name '*.hpp' -o -name '*.c' -o -name '*.h' | xargs clang-format-13 -i

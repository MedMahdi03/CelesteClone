#!/bin/bash
libs="-luser32 -lopengl32 -lgdi32"
warnings="-Wno-writable-strings -Wno-format-security -Wno-deprecated-declarations"
includes="-Ithrid_party -Ithrid_party/Include"
clang++ $includes -g src/main.cpp -oPlatformerEngine.exe $libs $warnings
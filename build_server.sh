#!/usr/bin/sh

mkdir -p server/build/
cd server/build
cmake ..
&& cmake --build .

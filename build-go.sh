#! /usr/bin/env bash

root="$(dirname "$(readlink -f "$0")")"
rm -rf "$root/build" "$root/librawgo"
mkdir "$root/build"
cd "$root/build" && cmake .. && make
mv "$root/build/librawgo.go" ./librawgo
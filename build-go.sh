#! /usr/bin/env bash

root="$(dirname "$(readlink -f "$0")")"
rm -rf "$root/build"
mkdir "$root/build"
cd "$root/build" && cmake .. && make
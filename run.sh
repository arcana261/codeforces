#!/usr/bin/env bash

mkdir -p .out
touch .current

if [ ! -z "$1" ]; then
    echo "$1" > .current
fi

CURRENT="$(cat .current)"

if [ -z "$CURRENT" ]; then
    echo "you have to first select a problem"
    exit -1
fi

rm -f .out/$CURRENT

g++ problems/$CURRENT.cpp -o .out/$CURRENT && \
    chmod +x .out/$CURRENT && \
    ./.out/$CURRENT

#!/bin/sh
filename="$1"    # input filename

cat "${filename}" | sed -r 's/\\/\\x5C/g'|
    sed -r 's/'\''/\\x27/g'|
    sed -r 's/\//\\x2F/g'|
    sed -r 's/É/\\x90/g'|
    sed -r 's/░/\\xB0/g'|
    sed -r 's/▒/\\xB1/g'|
    sed -r 's/▓/\\xB2/g'|
    sed -r 's/\|/\\xB3/g'|
    sed -r 's/█/\\xDB/g'|

    sed -r 's/\@/\\x40/g' > out.txt

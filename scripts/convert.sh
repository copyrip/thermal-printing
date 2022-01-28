#!/bin/sh
filename="$1"    # input filename

cat "${filename}" | sed -r 's/\\/\\x5C/g'|

    sed -r 's/\//\\x2F/g'|

    sed -r 's/!/\\x21/g'|
    sed -r 's/\"/\\x22/g'|
    sed -r 's/'\''/\\x23/g'|
    sed -r 's/'\''/\\x24/g'|
    sed -r 's/'\''/\\x25/g'|
    sed -r 's/'\''/\\x26/g'|
    sed -r 's/'\''/\\x27/g'|
    sed -r 's/'\''/\\x28/g'|
    sed -r 's/'\''/\\x29/g'|
    sed -r 's/'\''/\\x2A/g'|
    sed -r 's/'\''/\\x2B/g'|
    sed -r 's/'\''/\\x2C/g'|
    sed -r 's/'\''/\\x2D/g'|
    sed -r 's/'\''/\\x2E/g'|

    sed -r 's/É/\\x90/g'|
    sed -r 's/░/\\xB0/g'|
    sed -r 's/▒/\\xB1/g'|
    sed -r 's/▓/\\xB2/g'|
    sed -r 's/\|/\\xB3/g'|
    sed -r 's/█/\\xDB/g'|

    sed -r 's/\@/\\x40/g' > out.txt

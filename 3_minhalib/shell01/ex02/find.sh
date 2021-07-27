#!/bin/sh
#find . \( -name '*.sh' \) -print | sed 's/\(.*\)\///g' | sed 's/\.sh//g'
find . -type f \( -name "*.sh" \) | xargs basename -s .sh
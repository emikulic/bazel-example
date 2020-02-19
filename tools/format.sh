#!/bin/bash
set -e
set -x
buildifier WORKSPACE $(find . -name BUILD)
clang-format-9 -style=Google -i $(find . -name \*.cc) $(find . -name \*.h)
echo Formatted.

# Doxygen Documentation Guide

## Overview
Doxygen extracts comments from source code files to generate structured HTML and PDF documentation.

## Common Documentation Tags
- @file: Designates the file name and general description.
- @brief: Single-line summary of what a function or module does.
- @param: Describes an input argument and its purpose.
- @return: Explains the return value and error states.

## How to Build the Documentation
1. Generate configuration template: doxygen -g Doxyfile
2. Run compilation: doxygen Doxyfile
3. View output by opening html/index.html in any web browser.

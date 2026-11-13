# Doxygen Documentation Guide

## Overview
Doxygen extracts structured comments directly from source code files to automatically generate navigable HTML and printable PDF developer manuals.

## Common Documentation Tags
- `@file`: Designates the file name and provides a high-level module overview.
- `@brief`: Single-line summary describing what a function, class, or variable does.
- `@param`: Explains each input argument and its expected constraints.
- `@return`: Documents the return value and possible error states.

## How to Build the Documentation
1. Generate a default configuration file: `doxygen -g Doxyfile`
2. Compile the documentation from source comments: `doxygen Doxyfile`
3. View the generated site by opening `html/index.html` in any web browser.

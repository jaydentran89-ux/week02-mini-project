# Week 02 Mini Project: Temperature Conversion App

## Purpose
A terminal program that converts a temperature between Celsius and Fahrenheit.

## Input/output contract
Input is a direction code and a temperature, separated by a space.
Supported directions: `C2F` (Celsius to Fahrenheit) and `F2C` (Fahrenheit to Celsius).

| Input     | Output                         |
|-----------|--------------------------------|
| `C2F 0`   | `0 C = 32 F`                   |
| `F2C 32`  | `32 F = 0 C`                   |
| `K2C 100` | `Error: unsupported direction` |
| `F2C -40` | `-40 F = -40 C`                |
| `C2F abc` | `Error: invalid temperature`   |

Edge cases: `F2C -40` checks negative temperatures (−40 is equal on both scales), and `C2F abc` checks non-numeric input.

## Setup
    git clone https://github.com/jaydentran89-ux/week02-mini-project.git
    cd week02-mini-project

## Build and test
    g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o build/app
    ./build/app
    bash test.sh

## Limitations
- Only Celsius and Fahrenheit are supported (no Kelvin).
- Direction codes are case-sensitive: `c2f` is rejected.
- Anything typed after the temperature is ignored.

## AI-use disclosure
I used Claude to help plan the steps, draft the code and tests, and draft parts of this README. I ran, tested, and reviewed everything myself.
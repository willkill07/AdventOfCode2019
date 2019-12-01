# Advent of Code - 2019

All implementations are written in C++, mostly adhering to C++17/C++20 guidelines.

## Prerequisites

* clang (>= 5.0)
* libc++ (>= 5.0)
* CMake (>= 3.14)
* macOS or Linux (only two systems I've tested on, but i think it should work on Windows)

## Compiling

* Your standard cmake-enabled project

## Running

* Invoke `./Advent` to execute all the days
* To run a specific day, invoke `./Advent -f <dayXX>`
* To run a specific part, invoke `./Advent -p <1,2>`
* To see more detailed help, consult `./Advent --help`

## Metrics

* Lines: Number of lines given by `wc`
* Code: `Lines` - `(# preprocessor lines)` - `(lines with no alphanumeric chars)`
* Bytes: Number of total characters
* Chars: Number of non-whitespace characters
* Time: Time in milliseconds to execute each part independently (separate runs)
* Source: link to implementation
* Headers: C++ includes used for solution

## Leaderboard Highlights:

Hahahaha probably nothing this year :)

## Detailed Information

 Day | Lines | Code  | Bytes | Time (ms) | Source | Headers
:---:|:-----:|:-----:|:-----:|:---------:|:------:|:-------
1|29|21|     660|`0.0450`|[Day01.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day01.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp) `range/v3/all.hpp`
2|13|10|     306|`0.0130`|[Day02.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day02.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
3|13|10|     306|`0.0120`|[Day03.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day03.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
4|14|11|     282|`0.0110`|[Day04.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day04.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
5|14|11|     286|`0.0110`|[Day05.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day05.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
6|14|11|     286|`0.0110`|[Day06.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day06.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
7|14|11|     286|`0.0110`|[Day07.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day07.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
8|14|11|     282|`0.0110`|[Day08.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day08.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
9|14|11|     282|`0.0120`|[Day09.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day09.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
10|14|11|     285|`0.0120`|[Day10.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day10.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
11|14|11|     289|`0.0110`|[Day11.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day11.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
12|12|9|     285|`0.0120`|[Day12.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day12.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
13|12|9|     285|`0.0110`|[Day13.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day13.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
14|12|9|     285|`0.0110`|[Day14.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day14.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
15|12|9|     285|`0.0110`|[Day15.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day15.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
16|12|9|     285|`0.0110`|[Day16.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day16.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
17|12|9|     285|`0.0110`|[Day17.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day17.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
18|12|9|     285|`0.0100`|[Day18.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day18.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
19|12|9|     285|`0.0100`|[Day19.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day19.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
20|12|9|     285|`0.0100`|[Day20.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day20.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
21|12|9|     285|`0.0110`|[Day21.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day21.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
22|12|9|     285|`0.0110`|[Day22.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day22.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
23|12|9|     285|`0.0110`|[Day23.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day23.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
24|12|9|     285|`0.0110`|[Day24.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day24.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
25|12|9|     285|`0.0100`|[Day25.cpp](https://github.com/willkill07/AdventOfCode2019/blob/master/src/Day25.cpp)|[`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)
**TOTAL**|**335**|**255**|**7540**|**0.311**| |  [`Solution.hpp`](https://github.com/willkill07/AdventOfCode2019/blob/master/include/Solution.hpp)&nbsp;<sup>**`25`**</sup>  `range/v3/all.hpp`&nbsp;<sup>**`1`**</sup> 

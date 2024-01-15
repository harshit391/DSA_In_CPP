cmake_minimum_required(VERSION 3.27)
project(CPP)

set(CMAKE_CXX_STANDARD 23)

add_executable(CPP main.cpp
        "January Files/10 Jan/InsertInArray.cpp"
        "January Files/11 Jan/BinarySearch.cpp"
        "January Files/12 Jan/ReverseOrderBinarySearch.cpp"
        "January Files/12 Jan/RotatedBinarySearch.cpp"
        "January Files/12 Jan/RotatedKeyBinarySearch.cpp"
        "January Files/15 Jan/SearchLowestEvenNumber.cpp"
        "January Files/15 Jan/TwoSumBinarySearch.cpp"
        "January Files/15 Jan/FirstMissingPositive.cpp")

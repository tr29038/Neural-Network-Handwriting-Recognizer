cmake_minimum_required(VERSION 3.22)
project(neural_network_handwriting_recognizer VERSION 1.0)

include_directories(neural_network_handwriting_recognizer ${CMAKE_CURRENT_SOURCE_DIR}/libs)

add_executable(neural_network_handwriting_recognizer
    main.cpp
    libs/data.h
    libs/input_parser.h
    libs/input_parser.cpp
    libs/encoder.h
    libs/encoder.cpp
    libs/outputter.h
    libs/outputter.cpp
)

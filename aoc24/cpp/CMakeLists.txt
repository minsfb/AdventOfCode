cmake_minimum_required(VERSION 3.28)
project(aoc24)

set(CMAKE_CXX_STANDARD 17)

add_executable(aoc24
        main.cpp
        lib/doctest.h
        util/TestHelper.h
        util/TestHelper.cpp
        01_historian_hysteria/HistorianHysteria.h
        01_historian_hysteria/HistorianHysteriaPart1.cpp
        01_historian_hysteria/HistorianHysteriaPart2.cpp
        01_historian_hysteria/test/HistorianHysteriaTest.cpp
        02_red_nosed_reports/RedNosedReports.h
        02_red_nosed_reports/RedNosedReportsPart1.cpp
        02_red_nosed_reports/RedNosedReportsPart2.cpp
        02_red_nosed_reports/test/RedNosedReportsTest.cpp
        03_mull_it_over/MullItOver.h
        03_mull_it_over/MullItOverPart1.cpp
        03_mull_it_over/MullItOverPart2.cpp
        03_mull_it_over/test/MullItOverTest.cpp)

file(GLOB INPUT_FILES ../info/**/input/*)
file(COPY ${INPUT_FILES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

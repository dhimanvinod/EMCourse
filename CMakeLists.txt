cmake_minimum_required(VERSION 3.10)

project(DataSeriesExamples LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
	mean
	mean.cpp
	DataSeries.cpp
	)


add_executable(
	max
	max.cpp
	DataSeries.cpp
	)

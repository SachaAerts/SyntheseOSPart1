cmake_minimum_required(VERSION 3.29)
project(OSPart1 C)

set(CMAKE_C_STANDARD 90)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90 -Wpedantic -Wall -Werror")

set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -std=c90 -Wpedantic -Wall -Werror")

set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -std=c90 -Wpedantic -Wall -Werror")

add_executable(OSPart1 main.c
        domain/chap2/temperature.c
        view/mainMenu.c
        view/mainMenu.h
        view/chap2/temperatureMenu.c
        domain/chap2/temperature.h
        domain/chap3/chaineCaractere.c
        domain/chap3/chaineCaractere.h
        view/chap3/chaineCaractereMenu.c
        view/chap3/chaineCaractereMenu.h
)

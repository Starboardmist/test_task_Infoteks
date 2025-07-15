cmake_minimum_required(VERSION 3.10)
project(sqlite3_shared LANGUAGES C)

# Устанавливаем флаги компиляции
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O2 -fPIC -DSQLITE_ENABLE_FTS5 -DSQLITE_THREADSAFE=0")

# Заголовочные файлы
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Собираем динамическую библиотеку (.so)
add_library(sqlite3 SHARED sqlite3.c sqlite3.h sqlite3ext.h)

# Название выходного файла будет libsqlite3.so
set_target_properties(sqlite3 PROPERTIES OUTPUT_NAME sqlite3)
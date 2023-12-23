cmake_minimum_required(VERSION 3.15)
project(cpp-no-loop-exercise)

set(DID_FIRST_RUN OFF CACHE BOOL "did first run")
set(HAS_IMAGE OFF CACHE BOOL "do you already have the docker image")
if (NOT DID_FIRST_RUN)
    if (NOT HAS_IMAGE)
        execute_process(
                COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/build_exercise.sh
                WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                COMMAND_ERROR_IS_FATAL ANY
                COMMAND_ECHO STDOUT)
    endif ()
    execute_process(
            COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/stdex start
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            COMMAND_ERROR_IS_FATAL ANY
            COMMAND_ECHO STDOUT)
    set(DID_FIRST_RUN ON CACHE BOOL "did first run" FORCE)
endif ()


add_custom_target(verify_stage1
        COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/stdex verify stage1
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
add_custom_target(verify_stage2
        COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/stdex verify stage2
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
add_custom_target(verify_stage3
        COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/stdex verify stage3
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
add_custom_target(verify_stage4
        COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/stdex verify stage4
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
add_custom_target(verify_stage5
        COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/stdex verify stage5
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(debug_stage1 stage1.cpp)
add_executable(debug_stage2 stage2.cpp)
add_executable(debug_stage3 stage3.cpp)
add_executable(debug_stage4 stage4.cpp)
add_executable(debug_stage5 stage5.cpp)
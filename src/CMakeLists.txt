add_subdirectory(DudeCT)

set(SOURCE_FILES_01 main.c)
set(EXECUTABLE_NAME_01 app_ctts_dudect_stats)

set(LIBRARY_NAME_01 ctts_lib_01)

set(DUDECT_LIB_HEADER_FILES_01
        global_parameters.h DudeCT/dudect.h DudeCT/ctts_dudect_main.h
)

set(DUDECT_LIB_SOURCE_FILES_01
        DudeCT/ctts_dudect_main.c
)

add_executable(${EXECUTABLE_NAME_01} ${SOURCE_FILES_01})
add_library(${LIBRARY_NAME_01} SHARED ${DUDECT_LIB_SOURCE_FILES_01} ${DUDECT_LIB_HEADER_FILES_01})

target_link_libraries(${LIBRARY_NAME_01} PUBLIC ${SUBMODULE_LIBRARY_NAME_01})
target_include_directories(${LIBRARY_NAME_01} PUBLIC ${PROJECT_SOURCE_DIR}/submodules/test_project)

target_link_libraries(${EXECUTABLE_NAME_01} PUBLIC ${LIBRARY_NAME_01} m)
target_compile_options(${EXECUTABLE_NAME_01} PUBLIC "$<$<CONFIG:DEBUG>:${DEBUG_FLAGS}>")
target_compile_options(${EXECUTABLE_NAME_01} PUBLIC "$<$<CONFIG:RELEASE>:${RELEASE_FLAGS}>")

target_include_directories(${LIBRARY_NAME_01} PUBLIC ${PROJECT_SOURCE_DIR})
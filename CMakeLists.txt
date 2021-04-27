project(libVmdMolFilePlugins_project)
cmake_minimum_required(VERSION 2.8)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SOURCES)

add_library(vmdMolFilePlugins STATIC ${SOURCES} ${HEADERS})
target_include_directories(vmdMolFilePlugins PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(vmdMolFilePlugins PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)

set_property(TARGET vmdMolFilePlugins PROPERTY POSITION_INDEPENDENT_CODE ON)

install(TARGETS vmdMolFilePlugins DESTINATION lib)

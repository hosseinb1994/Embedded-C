cmake_minimum_required (VERSION 3.8)

if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("EmbeddedC")
set(SubProjects
examples)

add_executable (EmbeddedC "main.cpp")

foreach(Project IN LISTS SubProjects)
	include_directories(${Project})
	if(NOT TARGET ${Project})
	add_subdirectory(${Project})
	endif()
	target_link_libraries(${PROJECT_NAME} ${Project})
endforeach()

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET EmbeddedC PROPERTY CXX_STANDARD 20)
endif()


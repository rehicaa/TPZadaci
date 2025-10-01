cmake_minimum_required(VERSION 3.10)
project(TPZadaci)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Pronađi sve .cpp fajlove rekurzivno (relativno prema source dir)
file(GLOB_RECURSE CPP_FILES RELATIVE ${CMAKE_SOURCE_DIR} "*.cpp")

foreach(SOURCE_FILE IN LISTS CPP_FILES)
    # Napravi "sigurno" ime targeta iz relativne putanje: zamijeni non-alnum znakove sa _
    # Tako će target biti jedinstven čak i ako postoje više main.cpp u različitim folderima.
    string(REGEX REPLACE "[^A-Za-z0-9]" "_" TARGET_NAME_TMP "${SOURCE_FILE}")
    # Ukloni moguće vodeće/viške _
    string(REGEX REPLACE "^_+" "" TARGET_NAME_TMP "${TARGET_NAME_TMP}")
    string(REGEX REPLACE "_+$" "" TARGET_NAME_TMP "${TARGET_NAME_TMP}")
    # Osiguraj da target ime nije prazno
    if(TARGET_NAME_TMP STREQUAL "")
        message(FATAL_ERROR "Couldn't generate a target name for ${SOURCE_FILE}")
    endif()

    # Ako target već postoji (iz nekog razloga), dodaj suffix da bude sigurno jedinstveno
    set(TGT_NAME "${TARGET_NAME_TMP}")
    set(_i 1)
    while(TARGET ${TGT_NAME})
        math(EXPR _i "${_i} + 1")
        set(TGT_NAME "${TARGET_NAME_TMP}_${_i}")
    endwhile()

    # Kreiraj izvršni target samo sa tim jednim izvornim fajlom (bez hardkodiranih dodataka)
    add_executable(${TGT_NAME} "${SOURCE_FILE}"
            TestZad/arrTest.cpp
            "UDEMY-COURSE/Challenges/Vectors - Challenge 2/main.cpp"
            "UDEMY-COURSE/Challenges/Currency - Challenge 3/main.cpp"
            "UDEMY-COURSE/Challenges/Looping and More - Challenge 4/main.cpp"
            "UDEMY-COURSE/Challenges/Substitution Cypher - Challenge 5/main.cpp")

    # Postavi FOLDER property radi bolje organizacije u CLion-u (koristi folder path)
    get_filename_component(SOURCE_PATH "${SOURCE_FILE}" DIRECTORY)
    if(SOURCE_PATH)
        set_target_properties(${TGT_NAME} PROPERTIES FOLDER "${SOURCE_PATH}")
    else()
        set_target_properties(${TGT_NAME} PROPERTIES FOLDER "Root Files")
    endif()
endforeach()

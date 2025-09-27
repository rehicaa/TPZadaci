cmake_minimum_required(VERSION 3.10)
project(TPZadaci)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Pronađi sve .cpp fajlove rekurzivno
file(GLOB_RECURSE CPP_FILES RELATIVE ${CMAKE_SOURCE_DIR} "*.cpp")

foreach(SOURCE_FILE ${CPP_FILES})
    # Dobij ime izvršnog fajla (bez ekstenzije)
    get_filename_component(EXEC_NAME ${SOURCE_FILE} NAME_WE)

    # Dobij putanju do foldera u kojem se fajl nalazi
    get_filename_component(SOURCE_PATH ${SOURCE_FILE} DIRECTORY)

    # Kreiraj izvršni fajl
    add_executable(${EXEC_NAME} ${SOURCE_FILE}
            "UDEMY-COURSE/Challenges/Variables - Challenge 1/main.cpp")

    # --- KLJUČNI DIO ---
    # Postavi "FOLDER" property za ovaj target
    # Ovo će CLion-u reći gdje da ga vizuelno smjesti
    if(SOURCE_PATH)
        # Ako je fajl u podfolderu, postavi ime foldera
        set_target_properties(${EXEC_NAME} PROPERTIES FOLDER "${SOURCE_PATH}")
    else()
        # Ako je fajl u glavnom (root) folderu, možeš ga staviti u grupu "Main" ili ostaviti bez foldera
        set_target_properties(${EXEC_NAME} PROPERTIES FOLDER "Root Files")
    endif()
endforeach()
file(
    GLOB_RECURSE
        SOURCES
            librelogic/src/util.c
            librelogic/src/vm/*.c
            port/*.c
            
)

idf_component_register(
    SRCS ${SOURCES}
    INCLUDE_DIRS
        librelogic/include
        librelogic/src/
        port/
)

set_property(TARGET ${COMPONENT_LIB} APPEND PROPERTY ESP32)

file(
    GLOB_RECURSE
        SOURCES
            librelogic/src/util.c
            librelogic/src/vm/*.c
            librelogic/src/hw/*.c
            port/*.c
            
)

idf_component_register(
    SRCS ${SOURCES}
    INCLUDE_DIRS
        librelogic/include
        librelogic/src/
        librelogic/src/hw
        port/
)

set_property(TARGET ${COMPONENT_LIB} APPEND PROPERTY ESP32)

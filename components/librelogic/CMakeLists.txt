file(
    GLOB_RECURSE
        SOURCES
            port/*.c
            librelogic/src/util.c
            librelogic/src/vm/*.c
            librelogic/src/hw/*.c            
)

idf_component_register(
    SRCS ${SOURCES}
    INCLUDE_DIRS
        librelogic/include
        librelogic/src/
        librelogic/src/hw
        port/
)
component_compile_options("-Wno-implicit-fallthrough")
add_definitions( -DHW_EXTERNAL=Esp32 )
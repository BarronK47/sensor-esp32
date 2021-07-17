# Edit following two lines to set component requirements (see docs)
set(COMPONENT_REQUIRES )
set(COMPONENT_PRIV_REQUIRES )

set(COMPONENT_SRCS "thing_speak.c")
set(COMPONENT_ADD_INCLUDEDIRS ". include")
set(COMPONENT_PRIV_REQUIRES main oap-common oap-wifi)

register_component()
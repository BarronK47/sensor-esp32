# Edit following two lines to set component requirements (see docs)
set(COMPONENT_REQUIRES )
set(COMPONENT_PRIV_REQUIRES )

set(COMPONENT_SRCS "oap_common.c oap_debug.c oap_storage.c oap_version.c c_list.c")
set(COMPONENT_ADD_INCLUDEDIRS ". include")
set(COMPONENT_PRIV_REQUIRES main)

register_component()
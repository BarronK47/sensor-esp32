# Edit following two lines to set component requirements (see docs)
set(COMPONENT_REQUIRES )
set(COMPONENT_PRIV_REQUIRES )

set(COMPONENT_SRCS "bootwifi.c server_cpanel.c mongoose.c server.c cpanel.c")
set(COMPONENT_ADD_INCLUDEDIRS ". include")
set(COMPONENT_PRIV_REQUIRES main)

register_component()
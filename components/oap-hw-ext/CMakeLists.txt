# Edit following two lines to set component requirements (see docs)
set(COMPONENT_REQUIRES )
set(COMPONENT_PRIV_REQUIRES )

set(COMPONENT_SRCS "ctrl_btn.c rgb_led.c")
set(COMPONENT_ADD_INCLUDEDIRS ". include")
set(COMPONENT_PRIV_REQUIRES main)

register_component()
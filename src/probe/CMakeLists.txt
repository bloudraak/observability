add_library(probe probe.c)

install (TARGETS probe DESTINATION bin)
install (FILES probe.h DESTINATION include)

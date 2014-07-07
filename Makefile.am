# moronic/Makefile.am

ACLOCAL_AMFLAGS = -I m4 -I build-aux

#AM_CPPFLAGS = -I$(top_srcdir)

AM_CFLAGS = -Werror -Wall -Wpedantic -Wno-strict-aliasing



noinst_LTLIBRARIES = libmoronic.la

libmoronic_la_SOURCES = moronic.cpp moronic.hpp


bin_PROGRAMS = moronic

moronic_SOURCES = main.cpp

moronic_LDADD = libmoronic.la


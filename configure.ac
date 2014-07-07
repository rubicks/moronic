# moronic/configure.ac

#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])

AC_INIT([moronic],
        [0.1.0],
        [rubicks00@gmail.com],
        [moronic],
        [https://github.com/rubicks/moronic])

AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_AUX_DIR([build-aux])
AC_LANG_PUSH([C++])
AM_INIT_AUTOMAKE([subdir-objects])
LT_PREREQ([2.4])
LT_INIT([dlopen])
AC_CONFIG_SRCDIR([moronic.cpp])
AC_CONFIG_HEADERS([config.h])


# Checks for programs.
AC_PROG_LIBTOOL
AC_PROG_CXX
AC_PROG_CXXCPP
AC_PROG_INSTALL
AC_PROG_LN_S

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_CHECK_LIB([m],[floor])
AC_CHECK_FUNCS([floor pow sqrt])


# checks for libraries
BOOST_REQUIRE([1.52.0])
AX_CXX_HAVE_STD
AX_CXX_HAVE_STL

AC_CONFIG_FILES([Makefile])

AC_OUTPUT

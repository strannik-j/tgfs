#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([tgfs], [0.1])

[
	echo '   [Configuring telegram-cli]   ' | sed -e's/./-/g'
	echo '   [Configuring telegram-cli]   '
	echo '   [Configuring telegram-cli]   ' | sed -e's/./-/g'
]
cd tg
./configure --disable-libconfig --disable-liblua --disable-python || exit
cd ..

[
	echo '   [Configuring tgfs]   ' | sed -e's/./-/g'
	echo '   [Configuring tgfs]   '
	echo '   [Configuring tgfs]   ' | sed -e's/./-/g'
]

# Checks for programs.
AC_PROG_CC
AC_PROG_MAKE_SET

# Checks for libraries.
AC_SEARCH_LIBS([fuse_main], [fuse])

# Checks for header files.
AC_CHECK_HEADERS([fcntl.h malloc.h stddef.h stdint.h stdlib.h string.h sys/socket.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_MODE_T
AC_TYPE_OFF_T
AC_TYPE_SIZE_T
AC_TYPE_SSIZE_T
AC_TYPE_UINT32_T
AC_TYPE_UINT64_T

# Checks for library functions.
AC_FUNC_MALLOC
AC_FUNC_MKTIME
AC_FUNC_REALLOC
AC_CHECK_FUNCS([memset socket strtol])

AC_CONFIG_FILES([Makefile])

mkdir -p build bin
AC_OUTPUT

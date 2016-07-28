

DEFINES += QUAZIP_STATIC #from QuaLib documentation

HEADERS += Q7BZipUnzip/Q7BZipUnzip.h \
    Q7BZipUnzip/quazip/zlib.h \
    Q7BZipUnzip/quazip/zip.h \
    Q7BZipUnzip/quazip/zconf.h \
    Q7BZipUnzip/quazip/unzip.h \
    Q7BZipUnzip/quazip/quazipnewinfo.h \
    Q7BZipUnzip/quazip/quazipfileinfo.h \
    Q7BZipUnzip/quazip/quazipfile.h \
    Q7BZipUnzip/quazip/quazip_global.h \
    Q7BZipUnzip/quazip/quazip.h \
    Q7BZipUnzip/quazip/quacrc32.h \
    Q7BZipUnzip/quazip/quachecksum32.h \
    Q7BZipUnzip/quazip/quaadler32.h \
    Q7BZipUnzip/quazip/JlCompress.h \
    Q7BZipUnzip/quazip/ioapi.h \
    Q7BZipUnzip/quazip/crypt.h
 

		   
SOURCES += Q7BZipUnzip/main.cpp \
           Q7BZipUnzip/QuaZipWrapper.cpp \
    Q7BZipUnzip/quazip/quazipnewinfo.cpp \
    Q7BZipUnzip/quazip/quazipfile.cpp \
    Q7BZipUnzip/quazip/quazip.cpp \
    Q7BZipUnzip/quazip/quacrc32.cpp \
    Q7BZipUnzip/quazip/quaadler32.cpp \
    Q7BZipUnzip/quazip/qioapi.cpp \
    Q7BZipUnzip/quazip/JlCompress.cpp \
    Q7BZipUnzip/quazip/zip.c \
    Q7BZipUnzip/quazip/unzip.c
         

## $Id
AUTOMAKE_OPTIONS=foreign no-dependencies

noinst_LIBRARIES = libprofinet.a

SUBDIRS = dissect send util

libprofinet_a_SOURCES =

libprofinet_a_LIBADD = \
dissect/Dissector.o \
dissect/DissectorRegister.o \
dissect/DissectionUtils.o \
dissect/dissectors/PacketDissector.o \
dissect/dissectors/EthernetDissector.o \
dissect/dissectors/PNRTDissector.o \
dissect/dissectors/PNRTADissector.o \
dissect/dissectors/DCPDissector.o \
dissect/dissectors/BlockDissector.o \
dissect/dissectors/OptionDissector.o \
dissect/buffer/Buffy.o \
dissect/tree/ProtocolTree.o \
send/Sender.o \
send/UnixSocketSender.o \
send/Truffle.o \
util/DArray.o \
util/HashMap.o \
util/ScopeAlloc.o

INCLUDES = @INCLUDES@

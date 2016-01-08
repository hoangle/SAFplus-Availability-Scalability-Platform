import sys
import string
import xml.dom.minidom
from string import Template

makefileTemplate = Template("""\

################################################################################
#
# Makefile for project config library
#
# Auto-generated by OpenClovis IDE
#
################################################################################
include $(CLOVIS_ROOT)/SAFplus/mk/preface.mk

# Component name (using all lowercase):
COMPNAME        := config

# List local source files needed for the component server:

SRC_FILES       :=      $(wildcard *.c)

# List other ASP components of which client libraries your component depends on:
DEP_COMP_LIST   := utils osal timer buffer cnt ioc rmd eo event debug ckpt cor om hal name fault cm alarm prov snmp med amf txn idl


# List any third party libs needed to get this server built (or None):
THIRD_PARTY_EZXML_PATH = $(CLOVIS_ROOT)/ASP/3rdparty/ezxml/stable
THIRDPARTY_LIBS	+= $(HPI_LIBS)
EXTRA_CPPFLAGS  += $(CM_CFLAGS) -I$(THIRD_PARTY_EZXML_PATH)
                                                                                                                                                
# Library name:
LIB_NAMES       = libClConfig

# If there are more than one client libraries to be built here, you
# need to list the object files that will make up each library:
#
# Example:
#     libClTmpcomp_basic: file1.o file2.o
#     libClTmpcomp_advanced: file1.o file2.o file3.o file4.o
#
# If your component builds one library only, than this list will automatically
# obtained from the SRC_FILES variable above, so you don't need to create it.
#

include $(CLOVIS_ROOT)/ASP/mk/make-config.mk

""")

S7 := 1
include ./mk/preface.mk

all:
	echo "completed"


#? Removes all SAFplus targets and intermediate files
clean:
	rm -rf $(TEST_DIR) $(LIB_DIR) $(BIN_DIR)/* $(PLUGIN_DIR) $(MWOBJ_DIR) $(OBJ_DIR)

#? Removes all SAFplus and third party targets and intermediate files
cleanall:
	rm -rf $(SAFPLUS_TARGET)

include ./mk/safplus_targets.mk

ifdef NOT_WORKING
ifndef PARALLEL
parallel:
	$(MAKE) -j 8 PARALLEL=1 parallel
else
export NO_SUB_BUILD:=1

parallel: pa pb
	echo "parallel build completed"
endif
endif

all: $(ThirdPartySOs) $(SAFplusTools) $(SAFplusSOs) $(SAFplusPlugins) $(SAFplusServices) $(SAFplusTests) $(LIB_DIR)/libmw.so $(Languages)

tools: $(SAFplusTools)

$(LIB_DIR)/libmw.so: $(SAFplusSOs)
	$(LINK_SO) $@  $(MWOBJ_DIR)/*.o $(LINK_STD_LIBS)


ARCH_lowercase = $(shell echo $(ARCH) | tr A-Z a-z)


rv32_isa_tests += ./isa/rv64ui/cnci.S

ifneq (,$(findstring m,$(ARCH_lowercase)))
rv32_isa_tests += ./isa/rv64ui/cnci.S      
endif ## ifeq (m,$(findstring m,$(ARCH_lowercase)))


ARCH_lowercase = $(shell echo $(ARCH) | tr A-Z a-z)


rv32_isa_tests += isa/rv32um/rem.S          \
isa/rv32ui/sub.S      \
              isa/rv32ui/beq.S          \
		isa/rv32um/rem.S

ifneq (,$(findstring m,$(ARCH_lowercase)))
rv32_isa_tests += isa/rv32um/rem.S      
endif ## ifeq (m,$(findstring m,$(ARCH_lowercase)))

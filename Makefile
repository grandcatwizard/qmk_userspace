
USER_PATH = users/badcombos/keyboards
KEYBOARDS = planck mini36

# keyboard names 
NAME_planck = planck
NAME_mini36 = mini36

all: $(KEYBOARDS)

.PHONY: $(KEYBOARDS)
$(KEYBOARDS):
	cd qmk_firmware/; qmk compile $(USER_PATH)/$(NAME_$@).json

	# since qmk's makefile does not support changing the output dirctory of qmk compile
	rm -rf .build/ # clear old firmwares
	mkdir .build/
	mv qmk_firmware/.build/*.{bin,uf2} $(shell pwd)/.build > /dev/null || true

clean:
	rm -rf ./qmk_firmware/
	rm -rf ./build/
	rm -rf qmk_firmware/users/$(USER)

setup:
	git submodule update --init --recursive
	git submodule foreach git pull origin master
	git submodule foreach make git-submodule 
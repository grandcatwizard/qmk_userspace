USER = badcombos
USER_PATH = users/$(USER)/keyboards
KEYBOARDS = planck mini36 oxymoron orthomoron willy

# keyboard names 
NAME_planck = planck
NAME_mini36 = mini36
NAME_oxymoron = oxymoron
NAME_orthomoron = orthomoron
NAME_willy = willy


all: $(KEYBOARDS)

.PHONY: $(KEYBOARDS)
$(KEYBOARDS):
	# cleanup old symlinks
	rm -rf qmk_firmware/users/$(USER)

	# add new symlinks
	ln -s $(shell pwd)/userspace qmk_firmware/users/$(USER)

	cd qmk_firmware/; qmk compile $(USER_PATH)/$(NAME_$@).json

	# since qmk's makefile does not support changing the output dirctory of qmk compile we move them into ./build for easy access
	rm -rf .build/ # clear old firmwares
	mkdir .build/
	mv qmk_firmware/.build/*.{bin,uf2,hex} $(shell pwd)/.build > /dev/null || true

clean:
	rm -rf ./qmk_firmware/
	rm -rf ./build/
	rm -rf qmk_firmware/users/$(USER)

setup:
	git submodule update --init --recursive
	git submodule foreach git pull origin master
	git submodule foreach make git-submodule 

	# copying files into folder under my own folder in qmk_firmware/keyboards/ in order to prevent naming collisions 
	cp -a $(shell pwd)/linkers/ ./qmk_firmware/keyboards/badcombos

links:
	# this command is here mainly for debugging the adding of new keyboards	
	rm -rf ./qmk_firmware/keyboards/badcombos

	# copying files into folder under my own folder in qmk_firmware/keyboards/ in order to prevent naming collisions 
	cp -a $(shell pwd)/linkers/ ./qmk_firmware/keyboards/badcombos
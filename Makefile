bin_name = ttl-changer

build:
	cc main.c -o $(bin_name)
install:
	cp $(bin_name) /usr/local/bin/$(bin_name)
	chown root:root /usr/local/bin/$(bin_name)
	chmod u+s /usr/local/bin/$(bin_name)
clean:
	rm $(bin_name)

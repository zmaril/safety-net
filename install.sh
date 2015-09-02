mkdir -p /lib/modules/$(uname -r)/extra/hello
cp -p /vagrant/hello/* /lib/modules/$(uname -r)/extra/hello/
depmod


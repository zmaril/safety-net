sudo apt-get update -y

sudo apt-get install -y \
    build-essential \
    apt-utils \
    make \
    gcc \
    module-init-tools \
    linux-headers-$(uname -r) 

sudo apt-get install --reinstall  linux-image-$(uname -r) -y

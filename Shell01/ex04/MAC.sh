ifconfig | awk '/ether/ {print $2}' | grep -E '^[0-9a-fA-F:]{17}$'

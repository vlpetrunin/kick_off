ls -lh "$1" | awk 'NF > 2{print $9,$5}' | sort -k 1

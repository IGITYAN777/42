printf "%s\n" "$(find . -print | wc -l | awk '{$1=$1;print}')"

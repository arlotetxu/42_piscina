#find . -type f -name '*.sh' | tr -d '.sh'
#find . -type f -name '*.sh' | tr -d '\.\sh' | cut -c 2-
find . -type f -name '*.sh' | sed "s/\.\sh//" | sed "s/.*\///"

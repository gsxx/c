
FILE="$1"
BASENAME="${FILE%.*}"

sudo wine ./bin/lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o "$BASENAME.o" "$FILE"
sudo wine ./bin/lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -o "$BASENAME.gb" "$BASENAME.o"

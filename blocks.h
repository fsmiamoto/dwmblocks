typedef struct {
  char *icon;
  char *command;
  unsigned int interval;
  unsigned int signal;
} Block;

static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"",   "cat ~/.pacupdate | sed /📦0/d",                           0,  9},
    {"🧠", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 30, 0},
    {"",   "~/bin/statusbar/volume",                                  0,  10},
    {"☀",  "xbacklight | sed 's/\\..*//'",                            0,  11},
    {"",   "~/bin/statusbar/battery",                                 5,  0},
    {"🌡",  "sensors | awk '/^temp1:/{print $2}'",                     5,  0},
    {"",   "~/bin/statusbar/clock",                                   5,  0},
};

static char delim = '|';

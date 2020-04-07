typedef struct {
  char *icon;
  char *command;
  unsigned int interval;
  unsigned int signal;
} Block;

static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval in secs*/ /*Update Signal*/
    {"",     "volume",                0, 10},
    {"mem ", "mem-perc",              5, 0},
    {"cpu ", "cpu-perc",              5, 0},
    {"",    "date +'%H:%M - %m/%d'", 5, 0},
    /* {"📦 ",  "pacman-update",         3600, 9}, */
    /* {"🌡 ",   "sensors | awk '/^temp1:/{print $2}'", 5,   0}, */
};

static char* delim = " | ";

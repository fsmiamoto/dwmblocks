typedef struct {
  const char *icon;
  const char *command;
  const unsigned int interval; // in seconds
  const unsigned int signal;
} Block;

static const Block blocks[] = {
    {"", "volume", 0, 10},
    {"mem ", "mem-perc", 5, 0},
    {"cpu ", "cpu-perc", 5, 0},
    {"", "date +'%H:%M - %m/%d'", 5, 0},
};

static const char *delim = " | ";

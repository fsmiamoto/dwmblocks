typedef struct {
  const char *icon;
  const char *command;
  const unsigned int interval; // in seconds
  const unsigned int signal;
} Block;

static const Block blocks[] = {
    {"", "volume", 0, 10},
    {" ", "xbacklight -get | awk '{print $1 \"%\"}' ", 0, 11},
    {"", "battery", 5, 0},
    {" ", "mem-perc", 5, 0},
    {" ", "cpu-perc", 5, 0},
    {" ", "df | grep '/$' | awk '{print $5}'", 5, 0},
    {" ", "date +'%H:%M - %m/%d'", 5, 0},
};

static const char *delim = " | ";

#include <iostream>
#include <vector>
#include "Zone.h"
#include "Weather.h"
#include "Hurricane.h"
#include "Player.h"

class Board {
  public:

  private:
    std::vector<Zone> allZones;
    std::vector<Weather> drawWeather;
    std::vector<Weather> discardWeather;
    std::vector<Hurricane> activeHurricanes;
    std::vector<Hurricane> inactiHurricanes;
    std::vector<Player> allPlayers;
}


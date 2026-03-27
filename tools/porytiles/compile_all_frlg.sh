#!/bin/bash

# Directories

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
DIR="$(cd "$SCRIPT_DIR/../.." && pwd)"
DIR_PRIMARY="${DIR}/data/tilesets/primary/"
DIR_SECONDARY="${DIR}/data/tilesets/secondary/"
METATILE="${DIR}/include/constants/metatile_behaviors.h"
porytiles compile-primary -target-base-game pokefirered -pals-primary-override=7 -o  ${DIR_PRIMARY}building_frlg ${DIR_PRIMARY}building_frlg/.src ${METATILE}

porytiles compile-primary -target-base-game pokefirered -pals-primary-override=7 -o  ${DIR_PRIMARY}general_frlg ${DIR_PRIMARY}general_frlg/.src ${METATILE}

porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}vermilion_gym_frlg ${DIR_SECONDARY}vermilion_gym_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}vermilion_city_frlg ${DIR_SECONDARY}vermilion_city_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}unused_gatehouse_2_frlg ${DIR_SECONDARY}unused_gatehouse_2_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}viridian_forest_frlg ${DIR_SECONDARY}viridian_forest_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}viridian_city_frlg ${DIR_SECONDARY}viridian_city_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}viridian_gym_frlg ${DIR_SECONDARY}viridian_gym_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}berry_forest_frlg ${DIR_SECONDARY}berry_forest_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}bike_shop_frlg ${DIR_SECONDARY}bike_shop_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}cable_club_frlg ${DIR_SECONDARY}cable_club_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}burgled_house_frlg ${DIR_SECONDARY}burgled_house_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}celadon_gym_frlg ${DIR_SECONDARY}celadon_gym_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}celadon_city_frlg ${DIR_SECONDARY}celadon_city_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}cave_frlg ${DIR_SECONDARY}cave_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}cerulean_city_frlg ${DIR_SECONDARY}cerulean_city_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}cerulean_cave_frlg ${DIR_SECONDARY}cerulean_cave_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}cinnabar_gym_frlg ${DIR_SECONDARY}cinnabar_gym_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}cerulean_gym_frlg ${DIR_SECONDARY}cerulean_gym_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}condominiums_frlg ${DIR_SECONDARY}condominiums_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}cinnabar_island_frlg ${DIR_SECONDARY}cinnabar_island_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}department_store_frlg ${DIR_SECONDARY}department_store_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}digletts_cave_frlg ${DIR_SECONDARY}digletts_cave_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}fan_club_daycare_frlg ${DIR_SECONDARY}fan_club_daycare_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}fuchsia_gym_frlg ${DIR_SECONDARY}fuchsia_gym_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}fuchsia_city_frlg ${DIR_SECONDARY}fuchsia_city_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}game_corner_frlg ${DIR_SECONDARY}game_corner_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}generic_building_2_frlg ${DIR_SECONDARY}generic_building_2_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}generic_building_1_frlg ${DIR_SECONDARY}generic_building_1_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
# porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}hoenn_building_frlg ${DIR_SECONDARY}hoenn_building_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}hall_of_fame_frlg ${DIR_SECONDARY}hall_of_fame_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}indigo_plateau_frlg ${DIR_SECONDARY}indigo_plateau_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}island_harbor_frlg ${DIR_SECONDARY}island_harbor_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}lab_frlg ${DIR_SECONDARY}lab_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}lavender_town_frlg ${DIR_SECONDARY}lavender_town_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}mart_frlg ${DIR_SECONDARY}mart_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}mt_ember_frlg ${DIR_SECONDARY}mt_ember_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}museum_frlg ${DIR_SECONDARY}museum_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}navel_rock_frlg ${DIR_SECONDARY}navel_rock_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}pallet_town_frlg ${DIR_SECONDARY}pallet_town_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}pewter_gym_frlg ${DIR_SECONDARY}pewter_gym_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}pewter_city_frlg ${DIR_SECONDARY}pewter_city_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}pokemon_center_frlg ${DIR_SECONDARY}pokemon_center_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}pokemon_league_frlg ${DIR_SECONDARY}pokemon_league_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}pokemon_mansion_frlg ${DIR_SECONDARY}pokemon_mansion_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}power_plant_frlg ${DIR_SECONDARY}power_plant_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}pokemon_tower_frlg ${DIR_SECONDARY}pokemon_tower_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}rock_tunnel_frlg ${DIR_SECONDARY}rock_tunnel_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}restaurant_hotel_frlg ${DIR_SECONDARY}restaurant_hotel_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}safari_zone_building_frlg ${DIR_SECONDARY}safari_zone_building_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}saffron_gym_frlg ${DIR_SECONDARY}saffron_gym_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}saffron_city_frlg ${DIR_SECONDARY}saffron_city_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}sea_cottage_frlg ${DIR_SECONDARY}sea_cottage_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}school_frlg ${DIR_SECONDARY}school_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}seafoam_islands_frlg ${DIR_SECONDARY}seafoam_islands_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}sevii_islands_123_frlg ${DIR_SECONDARY}sevii_islands_123_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}sevii_islands_45_frlg ${DIR_SECONDARY}sevii_islands_45_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}sevii_islands_67_frlg ${DIR_SECONDARY}sevii_islands_67_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
# porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}silph_co_frlg ${DIR_SECONDARY}silph_co_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}tanoby_ruins_frlg ${DIR_SECONDARY}tanoby_ruins_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}ss_anne_frlg ${DIR_SECONDARY}ss_anne_frlg/.src ${DIR_PRIMARY}general_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}trainer_tower_frlg ${DIR_SECONDARY}trainer_tower_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}underground_path_frlg ${DIR_SECONDARY}underground_path_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
porytiles compile-secondary -target-base-game pokefirered -o ${DIR_SECONDARY}unused_gatehouse_1_frlg ${DIR_SECONDARY}unused_gatehouse_1_frlg/.src ${DIR_PRIMARY}building_frlg/.src ${METATILE}
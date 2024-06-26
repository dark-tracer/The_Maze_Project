#ifndef RAYCASTING_H
#define RAYCASTING_H

typedef struct {
    float x;
    float y;
    float angle;
} t_player;

void raycasting_init(t_player *player, t_map *maze);
void raycasting_draw_walls(SDL_Renderer *renderer, t_player *player, t_map *maze);

#endif  // RAYCASTING_H

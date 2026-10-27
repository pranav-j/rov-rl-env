#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;
    Vector2 pos = {400, 225};


    InitWindow(screenWidth, screenHeight, "rov-rl-env");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        // DrawText("Hello, raylib!", 190, 200, 20, LIGHTGRAY);
        if(IsKeyDown(KEY_UP)) {
            pos.y -= 4;
        }
        if(IsKeyDown(KEY_DOWN)) {
            pos.y += 4;
        }
        if(IsKeyDown(KEY_RIGHT)) {
            pos.x += 4;
        }
        if(IsKeyDown(KEY_LEFT)) {
            pos.x -= 4;
        }
        DrawCircleV(pos, 40, DARKBLUE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}

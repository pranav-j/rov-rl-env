#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;
    int x = 400;
    int y = 225;


    InitWindow(screenWidth, screenHeight, "rov-rl-env");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        // DrawText("Hello, raylib!", 190, 200, 20, LIGHTGRAY);
        if(IsKeyDown(KEY_UP)) {
            y -= 4;
        }
        if(IsKeyDown(KEY_DOWN)) {
            y += 4;
        }
        if(IsKeyDown(KEY_RIGHT)) {
            x += 4;
        }
        if(IsKeyDown(KEY_LEFT)) {
            x -= 4;
        }
        DrawCircle(x, y, 40, DARKBLUE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}

#include <raylib.h>
#include <stdio.h>


int main(void)
{
      const int screenWidth  = 800;
      const int screenHeight = 600;

      InitWindow(screenWidth, screenHeight, "You must water the Flowers");

      SetTargetFPS(60);

      while (!WindowShouldClose())
      {
            BeginDrawing();

            ClearBackground(WHITE);

            DrawText("You must water the flowers.", 190, 200, 20, BLACK);

            EndDrawing();
      }

      return 0;
}

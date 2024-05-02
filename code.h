#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

struct Book{
    recipes ** recipes;
    int total_recipes;
}

struct Ingredient{
    char * name;
    int nutrition;
}

struct Recipe{
    char * name;
    ingredient ** ingredient;
    int ingredient_num;
    int quantity;
    int servings;
}

struct Pantry{
    ingredient ** ingredient;
    int quantity;
}

struct Book newBook();
struct Recipe newRecipe(char* name, int serving);
struct Ingredient newIngredient(char * name, int caloriesPerGram);
struct Pantry newPantry();

void addRecipe(struct Book *book, struct Recipe *recipe);
void addIngredient(struct Recipe *recipe, struct Ingredient *ingredient, int quantity);
void storeIngredient(struct Pantry *pantry, struct Ingredient *ingredient, int quantity);

struct book canMakeAny(struct Pantry pantry, struct Book book);
struct book* canMakeAll(struct Pantry pantry, struct Book book);
struct book withinCaloriesLimit(struct Pantry pantry, struct Book book, int limit);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "code.h"



struct book newBook(){

    struct book *book;
    book = malloc(sizeof(struct book));
    book -> total_recipe = 0;

    return *book;
}

struct recipe newRecipe(char* name, int servings){

    struct recipe *current_recipe;
    current_recipe = malloc(sizeof(struct recipe));

    current_recipe -> name = name;
    current_recipe -> servings = servings;
    current_recipe -> ingredient_num = 0;
    return *current_recipe;
}

struct ingredient newIngredient(char* name, int caloriesPerGram){

    struct ingredient *ingredient;
    ingredient = malloc(sizeof(struct ingredient));

    ingredient -> name = name;
    ingredient -> nutrition = caloriesPerGram;
    return *ingredient;
}

struct pantry newPantry(){
    struct pantry *pantry;
    pantry = malloc(sizeof(struct pantry));
    return *pantry;
}



void addRecipe(struct book *book, struct recipe recipe){
    book -> recipe[book -> total_recipe] = recipe;
    book -> total_recipe ++;
    
}

void addIngredient(struct recipe *recipe, char* ingredient, int quantity){
    int num_recipe = recipe -> ingredient_num;

    recipe -> quantity = quantity;
    recipe -> ingredients = ingredient;
}

void storeIngredient(struct pantry *pantry, char* ingredient, int quantity){
    pantry -> quantities = quantity;
    pantry -> ingredients = ingredient;
}

struct book canMakeAny(struct pantry *pantry, struct book *book){
    struct book *newbook;
    newbook = malloc(sizeof(struct book));
    struct recipe *recipe = book -> recipe ;
    int total = book -> total_recipe;

    for (int i = 0; i < total; i++){
        recipe[i] -> 
    }
}

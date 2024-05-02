#include <stdio.h>
#include "code.h"
#include <string.h>

Test(lpr, test00){
    soup=newRecipe("soup",1);
    carr=newIngredient("carreort",5);

    cr_assert(strcmp(soup->name,"soup")==0)
    cr_assert(soup->servings==1)
    addIngredient(new,carr,2);
    cr_assert(soup-> quantity==2)
    cr_assert(strcmp(soup->ingredient->name,"carreort")==0)
    
}

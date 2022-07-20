#include "header.h"

void print2DUtil(Node *root, int space)
{
    // Base case
    if (root == NULL)
        return;
 
    // Increase distance between levels
    space += COUNT;
 
    // Process right child first
    print2DUtil(root->right, space);
 
    // Print current node after space
    // count
    cout<<endl;
    for (int i = COUNT; i < space; i++)
        cout<<" ";
    cout<<root->data<<"\n";
 
    // Process left child
    print2DUtil(root->left, space);
}

void print2D(Node *root)
{
    // Pass initial space count as 0
    print2DUtil(root, 0);
}

int maxDepth(Node* node)
{
    if (node == NULL)
        return 0;
    else
    {
        /* compute the depth of each subtree */
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
     
        /* use the larger one */
        if (lDepth > rDepth)
            return(lDepth + 1);
        else return(rDepth + 1);
    }
}

Node *lava() {
  Node *lava = new Node("lava");
  lava->left = new Node("earth");
  lava->right = new Node("fire");
  return lava;
}

Node *stone() {
  Node *stone = new Node("stone");
  stone->left = lava();
  stone->right = new Node("water");
  return stone;
}

Node *sand() {
  Node *sand = new Node("sand");
  sand->left = stone();
  sand->right = new Node("water");
  return sand;
}

Node *swamp() {
  Node *swamp = new Node("swamp");
  swamp->left = new Node("earth");
  swamp->right = new Node("water");
  return swamp;
}

Node *clay() {
  Node *clay = new Node("clay");
  clay->left = sand();
  clay->right = swamp();
  return clay;
}

Node *steam() {
  Node *steam = new Node("steam");
  steam->left = lava();
  steam->right = new Node("water");
  return steam;
}

Node *metal() {
  Node *metal = new Node("metal");
  metal->left = new Node("fire");
  metal->right = stone();
  return metal;
}

Node *energy() {
  Node *energy = new Node("energy");
  energy->left = new Node("air");
  energy->right = new Node("fire");
  return energy;
}

Node *boiler() {
  Node *boiler = new Node("boiler");
  boiler->left = metal();
  boiler->right = steam();
  return boiler;
}

Node *electricity() {
  Node *electricity = new Node("electricity");
  electricity->left = metal();
  electricity->right = energy();
  return electricity;
}

Node *alcohol() {
  Node *alcohol = new Node("alcohol");
  alcohol->left = new Node("fire");
  alcohol->right = new Node("water");
  return alcohol;
}

Node *vodka() {
  Node *vodka = new Node("vodka");
  vodka->left = alcohol();
  vodka->right = new Node("water");
  return vodka;
}

Node *glass() {
  Node *glass = new Node("glass");
  glass->left = new Node("fire");
  glass->right = sand();
  return glass;
}

Node *bricks() {
  Node *bricks = new Node("bricks");
  bricks->left = clay();
  bricks->right = new Node("fire");
  return bricks;
}

Node *storm() {
  Node *storm = new Node("storm");
  storm->left = energy();
  storm->right = new Node("air");
  return storm;
}

Node *dust() {
  Node *dust = new Node("dust");
  dust->left = new Node("air");
  dust->right = new Node("earth");
  return dust;
}

Node *ash() {
  Node *ash = new Node("ash");
  ash->left = new Node("fire");
  ash->right = dust();
  return ash;
}

Node *life() {
  Node *life = new Node("life");
  life->left = swamp();
  life->right = energy();
  return life;
}

Node *egg() {
  Node *egg = new Node("egg");
  egg->left = life();
  egg->right = stone();
  return egg;
}

Node *seeds() {
  Node *seeds = new Node("seeds");
  seeds->left = life();
  seeds->right = sand();
  return seeds;
}

Node *golem() {
  Node *golem = new Node("golem");
  golem->left = life();
  golem->right = clay();
  return golem;
}

Node *human() {
  Node *human = new Node("human");
  human->left = life();
  human->right = golem();
  return human;
}

Node *sex() {
  Node *sex = new Node("sex");
  sex->left = human();
  sex->right = human();
  return sex;
}

Node *weeds() {
  Node *weeds = new Node("weeds");
  weeds->left = life();
  weeds->right = new Node("water");
  return weeds;
}

Node *bacteria() {
  Node *bacteria = new Node("bacteria");
  bacteria->left = life();
  bacteria->right = swamp();
  return bacteria;
}

Node *moss() {
  Node *moss = new Node("moss");
  moss->left = weeds();
  moss->right = swamp();
  return moss;
}

Node *mushroom() {
  Node *mushroom = new Node("mushroom");
  mushroom->left = weeds();
  mushroom->right = new Node("earth");
  return mushroom;
}

Node *fern() {
  Node *fern = new Node("fern");
  fern->left = swamp();
  fern->right = moss();
  return fern;
}

Node *grass() {
  Node *grass = new Node("grass");
  grass->left = new Node("earth");
  grass->right = moss();
  return grass;
}

Node *plankton() {
  Node *plankton = new Node("plankton");
  plankton->left = new Node("water");
  plankton->right = bacteria();
  return plankton;
}

Node *worm() {
  Node *worm = new Node("worm");
  worm->left = bacteria();
  worm->right = swamp();
  return worm;
}

Node *sulfur() {
  Node *sulfur = new Node("sulfur");
  sulfur->left = bacteria();
  sulfur->right = swamp();
  return sulfur;
}

Node *fish() {
  Node *fish = new Node("fish");
  fish->left = bacteria();
  fish->right = plankton();
  return fish;
}

Node *shell() {
  Node *shell = new Node("shell");
  shell->left = stone();
  shell->right = plankton();
  return shell;
}

Node *limestone() {
  Node *limestone = new Node("limestone");
  limestone->left = shell();
  limestone->right = stone();
  return limestone;
}

Node *cement() {
  Node *cement = new Node("cement");
  cement->left = clay();
  cement->right = limestone();
  return cement;
}

Node *concrete() {
  Node *concrete = new Node("concrete");
  concrete->left = new Node("water");
  concrete->right = cement();
  return concrete;
}

Node *house() {
  Node *house = new Node("house");
  house->left = bricks();
  house->right = concrete();
  return house;
}

Node *skyscraper() {
  Node *skyscraper = new Node("skyscraper");
  skyscraper->left = house();
  skyscraper->right = glass();
  return skyscraper;
}

Node *butterfly() {
  Node *butterfly = new Node("butterfly");
  butterfly->left = new Node("air");
  butterfly->right = worm();
  return butterfly;
}

Node *snake() {
  Node *snake = new Node("snake");
  snake->left = swamp();
  snake->right = worm();
  return snake;
}

Node *beetle() {
  Node *beetle = new Node("beetle");
  beetle->left = new Node("earth");
  beetle->right = worm();
  return beetle;
}

Node *scorpion() {
  Node *scorpion = new Node("scorpion");
  scorpion->left = beetle();
  scorpion->right = sand();
  return scorpion;
}

Node *tools() {
  Node *tools = new Node("tools");
  tools->left = human();
  tools->right = metal();
  return tools;
}

Node *weapon() {
  Node *weapon = new Node("weapon");
  weapon->left = tools();
  weapon->right = metal();
  return weapon;
}

Node *poison() {
  Node *poison = new Node("poison");
  poison->left = tools();
  poison->right = scorpion();
  return poison;
}

Node *poisonedWeapon() {
  Node *poisonedWeapon = new Node("poisonedWeapon");
  poisonedWeapon->left = weapon();
  poisonedWeapon->right = poison();
  return poisonedWeapon;
}

Node *hunter() {
  Node *hunter = new Node("hunter");
  hunter->left = human();
  hunter->right = weapon();
  return hunter;
}

Node *warrior() {
  Node *warrior = new Node("warrior");
  warrior->left = hunter();
  warrior->right = weapon();
  return warrior;
}

Node *dinosaur() {
  Node *dinosaur = new Node("dinosaur");
  dinosaur->left = egg();
  dinosaur->right = new Node("earth");
  return dinosaur;
}

Node *dragon() {
  Node *dragon = new Node("dragon");
  dragon->left = dinosaur();
  dragon->right = new Node("fire");
  return dragon;
}

Node *hero() {
  Node *hero = new Node("hero");
  hero->left = warrior();
  hero->right = dragon();
  return hero;
}

Node *bird() {
  Node *bird = new Node("bird");
  bird->left = new Node("air");
  bird->right = egg();
  return bird;
}

Node *blood() {
  Node *blood = new Node("blood");
  blood->left = bird();
  blood->right = hunter();
  return blood;
}

Node *vampire() {
  Node *vampire = new Node("vampire");
  vampire->left = human();
  vampire->right = blood();
  return vampire;
}

Node *lizard() {
  Node *lizard = new Node("lizard");
  lizard->left = swamp();
  lizard->right = egg();
  return lizard;
}

Node *beast() {
  Node *beast = new Node("beast");
  beast->left = new Node("earth");
  beast->right = lizard();
  return beast;
}

Node *werewolf() {
  Node *werewolf = new Node("werewolf");
  werewolf->left = vampire();
  werewolf->right = beast();
  return werewolf;
}

Node *domesticAnimal() {
  Node *domesticAnimal = new Node("domesticAnimal");
  domesticAnimal->left = human();
  domesticAnimal->right = beast();
  return domesticAnimal;
}

Node *milk() {
  Node *milk = new Node("milk");
  milk->left = domesticAnimal();
  milk->right = grass();
  return milk;
}

Node *fertilizer() {
  Node *fertilizer = new Node("fertilizer");
  fertilizer->left = domesticAnimal();
  fertilizer->right = grass();
  return fertilizer;
}

Node *tobacco() {
  Node *tobacco = new Node("tobacco");
  tobacco->left = new Node("fire");
  tobacco->right = grass();
  return tobacco;
}

Node *reed() {
  Node *reed = new Node("reed");
  reed->left = swamp();
  reed->right = grass();
  return reed;
}

Node *paper() {
  Node *paper = new Node("paper");
  paper->left = tools();
  paper->right = reed();
  return paper;
}

Node *turtle() {
  Node *turtle = new Node("turtle");
  turtle->left = sand();
  turtle->right = egg();
  return turtle;
}

Node *dolphin() {
  Node *dolphin = new Node("dolphin");
  dolphin->left = fish();
  dolphin->right = beast();
  return dolphin;
}

Node *whale() {
  Node *whale = new Node("whale");
  whale->left = beast();
  whale->right = new Node("water");
  return whale;
}

Node *meat() {
  Node *meat = new Node("meat");
  meat->left = bird();
  meat->right = hunter();
  return meat;
}

Node *feather() {
  Node *feather = new Node("feather");
  feather->left = bird();
  feather->right = hunter();
  return feather;
}

Node *wool() {
  Node *wool = new Node("wool");
  wool->left = beast();
  wool->right = hunter();
  return wool;
}

Node *book() {
  Node *book = new Node("book");
  book->left = paper();
  book->right = feather();
  return book;
}

Node *cigarette() {
  Node *cigarette = new Node("cigarette");
  cigarette->left = paper();
  cigarette->right = tobacco();
  return cigarette;
}

Node *alcoholic() {
  Node *alcoholic = new Node("alcoholic");
  alcoholic->left = human();
  alcoholic->right = alcohol();
  return alcoholic;
}

Node *wizard() {
  Node *wizard = new Node("wizard");
  wizard->left = human();
  wizard->right = energy();
  return wizard;
}

Node *demigod() {
  Node *demigod = new Node("demigod");
  demigod->left = wizard();
  demigod->right = energy();
  return demigod;
}

Node *corpse() {
  Node *corpse = new Node("corpse");
  corpse->left = human();
  corpse->right = new Node("fire");
  return corpse;
}

Node *assassin() {
  Node *assassin = new Node("assassin");
  assassin->left = human();
  assassin->right = poisonedWeapon();
  return assassin;
}

Node *thunderBird() {
  Node *thunderBird = new Node("thunderBird");
  thunderBird->left = storm();
  thunderBird->right = bird();
  return thunderBird;
}

Node *pheonix() {
  Node *pheonix = new Node("pheonix");
  pheonix->left = new Node("fire");
  pheonix->right = bird();
  return pheonix;
}

Node *hut() {
  Node *hut = new Node("hut");
  hut->left = human();
  hut->right = stone();
  return hut;
}

Node *ceramics() {
  Node *ceramics = new Node("ceramics");
  ceramics->left = human();
  ceramics->right = clay();
  return ceramics;
}

Node *fabric() {
  Node *fabric = new Node("fabric");
  fabric->left = tools();
  fabric->right = wool();
  return fabric;
}

Node *clothes() {
  Node *clothes = new Node("clothes");
  clothes->left = fabric();
  clothes->right = human();
  return clothes;
}

Node *tree() {
  Node *tree = new Node("tree");
  tree->left = new Node("earth");
  tree->right = seeds();
  return tree;
}

Node *wood() {
  Node *wood = new Node("wood");
  wood->left = tree();
  wood->right = tools();
  return wood;
}

Node *wheel() {
  Node *wheel = new Node("wheel");
  wheel->left = wood();
  wheel->right = tools();
  return wheel;
}

Node *cart() {
  Node *cart = new Node("cart");
  cart->left = wood();
  cart->right = wheel();
  return cart;
}

Node *coal() {
  Node *coal = new Node("coal");
  coal->left = tree();
  coal->right = new Node("fire");
  return coal;
}

Node *oil() {
  Node *oil = new Node("oil");
  oil->left = coal();
  oil->right = new Node("water");
  return oil;
}

Node *car() {
  Node *car = new Node("car");
  car->left = oil();
  car->right = cart();
  return car;
}

Node *airplane() {
  Node *airplane = new Node("airplane");
  airplane->left = car();
  airplane->right = new Node("air");
  return airplane;
}

Node *chariot() {
  Node *chariot = new Node("chariot");
  chariot->left = cart();
  chariot->right = beast();
  return chariot;
}

Node *steamEngine() {
  Node *steamEngine = new Node("steamEngine");
  steamEngine->left = boiler();
  steamEngine->right = coal();
  return steamEngine;
}

Node *locomotive() {
  Node *locomotive = new Node("locomotive");
  locomotive->left = steamEngine();
  locomotive->right = coal();
  return locomotive;
}

Node *boat() {
  Node *boat = new Node("boat");
  boat->left = wood();
  boat->right = new Node("water");
  return boat;
}

Node *ship() {
  Node *ship = new Node("ship");
  ship->left = wood();
  ship->right = boat();
  return ship;
}

Node *frigate() {
  Node *frigate = new Node("frigate");
  frigate->left = ship();
  frigate->right = fabric();
  return frigate;
}

Node *steamShip() {
  Node *steamShip = new Node("steamShip");
  steamShip->left = ship();
  steamShip->right = steamEngine();
  return steamShip;
}

Node *saltpetre() {
  Node *saltpetre = new Node("saltpetre");
  saltpetre->left = limestone();
  saltpetre->right = fertilizer();
  return saltpetre;
}

Node *gunPowder() {
  Node *gunPowder = new Node("gunPowder");
  gunPowder->left = saltpetre();
  gunPowder->right = sulfur();
  return gunPowder;
}

Node *firearm() {
  Node *firearm = new Node("firearm");
  firearm->left = weapon();
  firearm->right = gunPowder();
  return firearm;
}

Node *field() {
  Node *field = new Node("field");
  field->left = new Node("earth");
  field->right = tools();
  return field;
}

Node *wheat() {
  Node *wheat = new Node("wheat");
  wheat->left = seeds();
  wheat->right = field();
  return wheat;
}

Node *flour() {
  Node *flour = new Node("flour");
  flour->left = wheat();
  flour->right = stone();
  return flour;
}

Node *dough() {
  Node *dough = new Node("dough");
  dough->left = flour();
  dough->right = new Node("water");
  return dough;
}

Node *bread() {
  Node *bread = new Node("bread");
  bread->left = dough();
  bread->right = new Node("fire");
  return bread;
}

Node *beer() {
  Node *beer = new Node("beer");
  beer->left = bread();
  beer->right = alcohol();
  return beer;
}

Node *zombie() {
  Node *zombie = new Node("zombie");
  zombie->left = corpse();
  zombie->right = life();
  return zombie;
}

Node *ghoul() {
  Node *ghoul = new Node("ghoul");
  ghoul->left = corpse();
  ghoul->right = zombie();
  return ghoul;
}

Node *treant() {
  Node *treant = new Node("treant");
  treant->left = tree();
  treant->right = life();
  return treant;
}

Node *ghost() {
  Node *ghost = new Node("ghost");
  ghost->left = ash();
  ghost->right = life();
  return ghost;
}
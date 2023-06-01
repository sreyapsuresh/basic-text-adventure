// Created by Sreya Suresh (@sreyapsuresh)

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string item;
    string choice1;
    string choice2;
    string choice3;
    string choice4;
    string choice5;

    std::cout << "The day has finally come. After years of waiting, you are now ready to embark on your first adventure.\n";
    std::cout << "You get dressed, and quickly double-check your backpack for all your essentials -- WATER, a MAP, and a COMPASS.\n";
    std::cout << "Just as you are about to pack your HARMONICA and your DAGGER, you realize you only have space for one more item. You would have to carry the other in your hand.\n";
    std::cout << "Carry the HARMONICA or the DAGGER?\n";
    std::cin >> choice1;
    if (choice1 != "HARMONICA" || choice1 != "DAGGER")
    {
        if (choice1 == "HARMONICA")
        {
            std::cout << "You decide to hold your HARMONICA, and stuff the DAGGER into a side pocket.\n";
        } else if (choice1 == "DAGGER") {
            std::cout << "You decide to hold your DAGGER, and stuff the HARMONICA into a side pocket.\n";
        } else {
            std::cout << "That is not a valid action.\n";
            std::cout << "Carry the HARMONICA or the DAGGER?\n";
            std::cin >> choice1;
        }
    }
    std::cout << "After making sure you have everything, you make your way to the EVERGREEN FOREST.\n";
    std::cout << "-----------------------------\n";
    std::cout << "The EVERGREEN FOREST is eerily silent, with not a single sign of life in sight.\n";
    std::cout << "???: AGHHHH!\n";
    std::cout << "A scream echoes in the distance, and you freeze.\n";
    std::cout << "That person sounded like they really need help, but it could also be a bandit planning to rob you of your belongings...\n";
    std::cout << "APPROACH the sound or RUN?\n";
    std::cin >> choice2;
    
    if (choice2 != "APPROACH" || choice2 != "RUN")
    {
        if (choice2 == "APPROACH")
        {
            std::cout << "You approach the source of the noise.\n";
            std::cout << "As you get closer, you hear another blood-curdling scream and tightly grasp the ";
            if (choice1 == "HARMONICA"){
                std::cout << "HARMONICA";
            } else {
                std::cout << "DAGGER";
            }
            std::cout << " in your hand.\n";
            std::cout << "After what feels like forever, you finally reach a large clearing and see an ADVENTURER with their back towards you, sword in hand.\n";
            std::cout << "They seem to be heavily injured, as blood pools by their feet and their body shakes with every breath.\n";
            std::cout << "You step out beside them to get a closer look at what they're facing and nearly fall back in shock.\n";
            std::cout << "A Giant Beast stands in the clearing, seemingly preparing to charge at the ADVENTURER beside you.\n";
            std::cout << "???: What are you doing?! Get away, that's a FOREST BEAST!\n";
            std::cout << "The ADVENTURER beside you seems to be shocked to see anyone else in the EVERGREEN FOREST.\n";
            std::cout << "You: Don't worry, I can support you!\n";
            if (choice1 == "HARMONICA"){
                std::cout << "You pull out your HARMONICA, and the ADVENTURER stares in shock.\n";
                std::cout << "???: With that?\n";
                std::cout << "You could probably distract the Beast long enough if you THROW the instrument or PLAY a tune.\n";
                std::cin >> choice3;

                if (choice3 != "THROW" || choice3 != "PLAY")
                {
                    if (choice3 == "THROW")
                    {
                        std::cout << "Sure, a HARMONICA isn't the most ideal weapon but you could probably do some damage with it.\n";
                        std::cout << "You throw the HARMONICA towards the Beast.\n";
                        std::cout << "It barely glances at the HARMONICA before charging towards you and the ADVENTURER.\n";
                        std::cout << "As your vision fades to black, you can't help but wonder how your first adventure could turn out like this.\n";
                        std::cout << "-----------------------------\n";
                        std::cout << "BAD ENDING 2: A Heroic Attempt.\n";
                        std::cout << "-----------------------------\n";
                        return 0;
                    } else if (choice3 == "PLAY") {
                        std::cout << "Maybe some music could help soothe the Beast? You take a deep breathe and prepare to play a relaxing tune.\n";
                        std::cout << "Unfortunately, it seems like you bent some of the HARMONICA's pins some time when you were holding it.\n";
                        std::cout << "An ear-piercing screech plays from the HARMONICA in your hands, and the Beast stops in its tracks.\n";
                        std::cout << "Do you continue to PLAY or THROW the instrument?\n";
                        std::cin >> choice4;

                    if (choice4 != "PLAY" || choice4 != "THROW")
                    {
                        if (choice4 == "PLAY")
                        {
                            std::cout << "You decide to keep going with the awful medley of sound, steeling yourself in the process.\n";
                            std::cout << "As you continue, the Beast slowly backs away from you and the ADVENTURER.\n";
                            std::cout << "It seems to be more affected by the out-of-tune music than you had assumed, and the ADVENTURER takes this chance to run towards the beast.\n";
                            std::cout << "With a courageous yell, they stab their blade through the Beast's heart with so much force that it is pinned to the ground.\n";
                            std::cout << "You take a moment to catch your breath, watching the ADVENTURER pull their blood-stained sword from the Beast's chest.\n";
                            std::cout << "???: I owe you my thanks. I wouldn't have made it without your quick thinking.\n";
                            std::cout << "You simply offer a shaky smile back at the ADVENTURER as they walk over to you and hold out their hand.\n";
                            std::cout << "You hadn't even realized that your legs had given out.\n";
                            std::cout << "???: You can call me LEIF.\n";
                            std::cout << "LEIF shoots you a wide grin, and continues.\n";
                            std::cout << "LEIF: Now come on and stand up! We should get going as soon as we can.\n";
                            std::cout << "As you grab LEIF's hand and hoist yourself up, you get the feeling that you will go on to have many a great journey with the person in front of you.\n";
                            std::cout << "You can't help but feel that your first adventure, while short, was successful.\n";
                            std::cout << "-----------------------------\n";
                            std::cout << "GOOD ENDING: The Start of Something New.\n";
                            std::cout << "-----------------------------\n";

                        } else if (choice4 == "THROW") {
                            std::cout << "Sure, a HARMONICA isn't the most ideal weapon but you could probably do some damage with it.\n";
                            std::cout << "You throw the HARMONICA towards the Beast.\n";
                            std::cout << "It barely glances at the HARMONICA before charging towards you and the INJURED ADVENTURER.\n";
                            std::cout << "As your vision fades to black, you can't help but wonder how your first adventure could turn out like this.\n";
                            std::cout << "-----------------------------\n";
                            std::cout << "BAD ENDING 2: A Heroic Attempt.\n";
                            std::cout << "-----------------------------\n";
                        } else {

                            std::cout << "That is not a valid action.\n";
                            std::cout << "Do you continue to PLAY or THROW the instrument?\n";
                            std::cin >> choice4;
                        }
                    }

                    } else {
                        std::cout << "That is not a valid action.\n";
                        std::cout << "You could probably distract the Beast long enough if you THROW the instrument or PLAY a tune.\n";
                        std::cin >> choice3;
                    }
                }
            } else if (choice1 == "DAGGER"){
                std::cout << "You pull out your DAGGER, and the ADVENTURER looks relieved.\n";
                std::cout << "You both place your attention on the Beast in front of you, and the ADVENTURER speaks up.\n";
                std::cout << "???: Try to distract him, I'll deal the finishing blow.\n";
                std::cout << "A closer look at the Beast makes it clear that it needs a lot more than one blow.\nWhat if the ADVENTURER was trying to use you as bait?\n";
                std::cout << "Do you FOLLOW their strategy or CHARGE forward alone?\n";
                std::cin >> choice5;

                if (choice5 != "FOLLOW" || choice5 != "CHARGE")
                {
                    if (choice5 == "FOLLOW")
                    {
                        std::cout << "Still, there's not much else you can do. You decide to go with the ADVENTURER's plan.\n";
                        std::cout << "You quickly run to the left, and throw your DAGGER at the Beast.\n";
                        std::cout << "Somehow, your DAGGER pierces through the Beast's right eye and it keels over in pain.\n";
                        std::cout << "Without missing a beat, the ADVENTURER takes their chance to slay the Beast.\n";
                        std::cout << "With a courageous yell, they stab their blade through the Beast's heart with so much force that it is pinned to the ground.\n";
                        std::cout << "You take a moment to catch your breath, watching the ADVENTURER pull their blood-stained sword from the Beast's chest.\n";
                        std::cout << "???: I owe you my thanks. I wouldn't have made it without your quick thinking.\n";
                        std::cout << "You simply offer a shaky smile back at the ADVENTURER as they walk over to you and hold out their hand.\n";                       
                        std::cout << "You hadn't even realized that your legs had given out.\n";
                        std::cout << "???: You can call me LEIF.\n";
                        std::cout << "LEIF shoots you a wide grin, and continues.\n";
                        std::cout << "LEIF: Now come on and stand up! We should get going as soon as we can.\n";
                        std::cout << "As you grab LEIF's hand and hoist yourself up, you get the feeling that you will go on to have many a great journey with the person in front of you.\n";
                        std::cout << "You can't help but feel that your first adventure, while short, was successful.\n";
                        std::cout << "-----------------------------\n";
                        std::cout << "GOOD ENDING: The Start of Something New.\n";
                        std::cout << "-----------------------------\n";
                    } else if (choice5 == "CHARGE") {
                        std::cout << "You aren't sure if you can trust their strategy, especially since they were losing before your arrival.\n";
                        std::cout << "Even though it was your first adventure, you were sure you could tackle the beast by yourself.\n";
                        std::cout << "You quickly charge forward before the ADVENTURER could protest.\n";
                        std::cout << "???: What are you doing?! You're going to die!\n";
                        std::cout << "You ignore their yelling and continue forward, drawing your DAGGER forward to land the finishing blow.\n";
                        std::cout << "However, before you have the chance to swing, the Beast swats you aside without hesitation.\n";
                        std::cout << "As your vision fades to black, you can't help but wonder how your first adventure could turn out like this.\n";
                        std::cout << "-----------------------------\n";
                        std::cout << "BAD ENDING 3: Rookie Mistake.\n";
                        std::cout << "-----------------------------\n";
                    } else {
                        std::cout << "That is not a valid action.\n";
                        std::cout << "Do you FOLLOW their strategy or CHARGE forward alone?\n";
                        std::cin >> choice5;
                    }
                }
            }
        } else if (choice2 == "RUN") {
            std::cout << "You ignore the noise and keep walking.\n";
            std::cout << "Eventually, the EVERGREEN FOREST returns to its silent state.\n";
            std::cout << "As you walk forward with your eyes peeled for any small Beasts you could challenge, you fail to notice the looming shadow of a FOREST BEAST behind you.\n";
            std::cout << "By the time you notice the Beast, you are already in it's mouth.\n";
            std::cout << "As your vision fades to black, you can't help but wonder how your first adventure could turn out like this.\n";
            std::cout << "-----------------------------\n";
            std::cout << "BAD ENDING 1: Ended Before it Began.\n";
            std::cout << "-----------------------------\n";
        } else {
            std::cout << "That is not a valid action.\n";
            std::cout << "APPROACH the sound or RUN?\n";
            std::cin >> choice2;
        }
    }
}
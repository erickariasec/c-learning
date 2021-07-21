/* Create a program where you can recommend users the best movie depending on their favorite film genre.
This is a multiple choice program using SWITCH. */

#include <stdio.h>
#include <stdlib.h>     // We add this library to use exit() function
#define YES 1
#define NO 2

main()
{
    //SET UP VARIABLES
    int shortAnswer, movieGenreChoice, actionMovieChoice, romanceMovieChoice, comedyMovieChoice, horrorMovieChoice, scienceFictionMovieChoice, dramaMovieChoice;
    char userFirstName[10];



    printf("\n\n\t\t\t\t\t\tMOVIES RECOMMENDATION 2021\n");
    printf("\t\t\t\t\t\t--------------------------\n\n");


    // ASK FOR NAME
    printf("Before beginning, please tell us your name. (First Name Only)\n");
    scanf(" %s", userFirstName);
    printf("\nAlright %s! Nice to meet you!\n\n", userFirstName);

    printf("Would you like to see our best recommended movies depending on your interests? (Write number selection)\n");
    printf("1. YES\n");
    printf("2. NO\n");

    do
    {
        printf("\nEnter your choice: ");
        scanf(" %d", &shortAnswer);
        if (shortAnswer == YES)
        {
            printf("\nOk, let\'s go!\n\n");
        }
        if (shortAnswer == NO)
        {
            printf("\nOh, no! We really would like to recommend you the best movies!\n\a");
            printf("But no problem %s, see you the next time!\n\n", userFirstName);
            exit(1);
        }
        else if ((shortAnswer < YES) || (shortAnswer > NO))
        {
            printf("\n\n%d is not a valid choice.\n\a", shortAnswer);
            printf("Try Again %s!\n", userFirstName);
        }
    }
    while ((shortAnswer < YES) || (shortAnswer > NO));



    // FAVORITE GENRE SELECTION
    printf("Which is your favorite Film Genre?\n");
    printf("1. Action\n");
    printf("2. Romance\n");
    printf("3. Comedy\n");
    printf("4. Horror\n");
    printf("5. Science Fiction\n");
    printf("6. Drama\n\n");
    printf("7. EXIT THE PROGRAM\n");

    // MAIN DO
    do
    {
        printf("\nEnter your choice: ");
        scanf(" %d", &movieGenreChoice);
        switch(movieGenreChoice)
        {

            // ACTION MOVIES CHOICE
            case (1): printf("\nOh, so you like Action movies, that\'s cool!\n\n");
                      printf("Here is a list of our Recommendations for you %s:\n", userFirstName);
                      printf("\n\n\t\t\t\t\t\tTOP 5 ACTION MOVIES\n\n");
                      printf("1. Mortal Kombat\n");
                      printf("2. Black Window\n");
                      printf("3. Zack Snyder\'s Justice League\n");
                      printf("4. The Ice Road\n");
                      printf("5. Fast And Furious 9\n");

                      printf("\nWhich one would you like to see?\n");

                      do
                      {
                          printf("Enter your choice: ");
                          scanf(" %d", &actionMovieChoice);

                          // ACTION MOVIES RESUME
                          switch(actionMovieChoice)
                          {
                              case (1): printf("\nThe HBO Max and Warner Bros. decision to release their films in theaters and on streaming may be controversial, but it means that we got Mortal Kombat at our fingertips, right from the comfort of our dang couch. The reboot, based on the classic video game, will take us inside the most infamous and dangerous martial arts competition, making you scream out in nostalgia, FINISH HIM!\n\n");
                                        break;
                              case (2): printf("\nOne last run for Scarlett before she officially abdicates the role of Black Widow. The ill-fated superhero finally got her own long-awaited standalone movie, taking us back to her home where we meet a slew of new characters that will likely pop up throughout Phase Four. Also… Florence Pugh in the MCU? Yes please, right now.\n\n");
                                        break;
                              case (3): printf("\nIt's like The Justice League, but comprehensible. And significantly longer.\n\n");
                                        break;
                              case (4): printf("\nIt's literally like someone fictionalized Ice Road Truckers into a slightly more dramatic film. Ice road trucking is insane already, but when you put Liam Neeson at the wheel, my God.\n\n");
                                        break;
                              case (5): printf("\nVin Diesel’s done it again. The ninth installment of the high-speed-franchise-turned practically superhero movie will follow Dominic Toretto et al, as they face off with Dominic’s brother, Jakob, played by John Cena. Oh, did we forget to mention he’s an assassin?\n\n");
                                        break;
                              default:  printf("\n\n%d is not a valid choice.\n\a", actionMovieChoice);
                                        printf("Try Again %s!\n", userFirstName);
                                        break;
                          }
                      }
                      while ((actionMovieChoice < 1) || (actionMovieChoice > 5));
                      return 0;



            // ROMANCE MOVIES CHOICE
            case (2): printf("\nOh, so you like Romance movies, that\'s cool!\n\n");
                      printf("Here is a list of our Recommendations for you %s:\n", userFirstName);
                      printf("\n\n\t\t\t\t\t\tTOP 5 ROMANCE MOVIES\n\n");
                      printf("1. Malcolm & Marie\n");
                      printf("2. The Dig\n");
                      printf("3. The Right One\n");
                      printf("4. To All the Boys: Always and Forever\n");
                      printf("5. The Map of Tiny Perfect Things\n");

                      printf("\nWhich one would you like to see?\n");

                      do
                      {
                          printf("Enter your choice: ");
                          scanf(" %d", &romanceMovieChoice);

                          // ROMANCE MOVIES RESUME
                          switch(romanceMovieChoice)
                          {
                              case (1): printf("\nThis black and white feature was the first movie to be fully developed and filmed during the COVID pandemic. It takes place over the course of one night, during which, in an effort to keep busy while waiting for the reviews of Malcolm's latest film to start rolling in, the couple decides to busy themselves with dissecting their entire relationship and each other's lives. Naturally.\n\n");
                                        break;
                              case (2): printf("\nBased on the true story of the 1939 excavation of the Sutton Hoo archeological site in England, The Dig attempts to rewrite a major historical wrong by focusing largely on the efforts of archeologist Basil Brown, who led the project but whose contributions went uncredited for decades. This might not sound like the stuff of romance, but you'll change your mind when you catch wind of not one but two tragic romantic entanglements threaded throughout the film.\n\n");
                                        break;
                              case (3): printf("\nA note to all writers out there: Don't use the mysterious and handsome strangers you meet to get over your writer's block unless you're prepared to lose them. Unfortunately, struggling writer Sara (Coleman) has to learn that lesson the hard way in this rom-com, when she scares Godfrey (Thune) away just as they're starting to fall for one another. You'll have to tune in to see how she writes her way out of this one.\n\n");
                                        break;
                              case (4): printf("\nAll good things must come to an end—yes, even Netflix adaptations of beloved YA trilogies. This time around, the obstacle threatening to keep Lara Jean Covey and Peter Kavinsky apart is their upcoming high school graduation and their potentially differing plans for college. Here's hoping the third time's the charm for this chronically star-crossed couple.\n\n");
                                        break;
                              case (5): printf("\nThe last year has seen the release of plenty of adaptations of the Groundhog Day time-loop concept (wonder why!), but this one might be the sweetest. Two teens discover they're reliving the same day over and over, and decide to take advantage of the glitch to make the titular map of the best things that happen that day—until one of them starts trying to find a way out of the time warp. If the trailer is any indication, this one will go from a laugh-out-loud comedy to a tearjerking romantic drama in about five seconds flat.\n\n");
                                        break;
                              default:  printf("\n\n%d is not a valid choice.\n\a", romanceMovieChoice);
                                        printf("Try Again %s!\n", userFirstName);
                                        break;
                          }
                      }
                      while ((romanceMovieChoice < 1) || (romanceMovieChoice > 5));
                      return 0;


            // COMEDY MOVIES CHOICE
            case(3): printf("\nOh, so you like Comedy movies, that\'s cool!\n\n");
                      printf("Here is a list of our Recommendations for you %s:\n", userFirstName);
                      printf("\n\n\t\t\t\t\t\tTOP 5 COMEDY MOVIES\n\n");
                      printf("1. Friends: The Reunion\n");
                      printf("2. Bad Trip\n");
                      printf("3. Jackass 4\n");
                      printf("4. Space Jam: A New Legacy\n");
                      printf("5. Don't Look Up\n");

                      printf("\nWhich one would you like to see?\n");

                      do
                      {
                          printf("Enter your choice: ");
                          scanf(" %d", &comedyMovieChoice);

                          // COMEDY MOVIES RESUME
                          switch(comedyMovieChoice)
                          {
                              case (1): printf("\nWhile not technically a ~movie,~ the Friends cast has reunited to reminisce on the show's '90s glory that ran for 10 epic seasons. You can expect the same humor during the reunion as the cast reflects on some of their favorite moments and plays trivia games.\n\n");
                                        break;
                              case (2): printf("\nOne word: pranks. Sold to Netflix in March, Bad Trip is about two best friends who go on a road trip from Florida to New York City together and, well, let's just say a lot of crazy sh*t happens.\n\n");
                                        break;
                              case (3): printf("\nThe infamous Jackass franchise is back in theaters this fall that includes new and old cast members doing hilariously stupid things.\n\n");
                                        break;
                              case (4): printf("\nThe highly-anticipated live-action/animated sports comedy featuring Lebron James in all of his basketball glory will be released this summer. In the movie, James attempts to save his son by helping the Looney Tunes win a basketball match.\n\n");
                                        break;
                              case (5): printf("\nYes, you read that cast correctly. In this dark comedy, two astronomers, played by DiCaprio and Lawrence, warn the world through a media tour about an asteroid that will destroy the earth.\n\n");
                                        break;
                              default:  printf("\n\n%d is not a valid choice.\n\a", comedyMovieChoice);
                                        printf("Try Again %s!\n", userFirstName);
                                        break;
                          }
                      }
                      while ((comedyMovieChoice < 1) || (comedyMovieChoice > 5));
                      return 0;


            // HORROR MOVIES CHOICE
            case(4): printf("\nOh, so you like Horror movies, that\'s cool!\n\n");
                      printf("Here is a list of our Recommendations for you %s:\n", userFirstName);
                      printf("\n\n\t\t\t\t\t\tTOP 5 HORROR MOVIES\n\n");
                      printf("1. Wrong Turn\n");
                      printf("2. The Vigil\n");
                      printf("3. Things Heard & Seen\n");
                      printf("4. A Quiet Place Part II\n");
                      printf("5. The Conjuring: The Devil Made Me Do It\n");

                      printf("\nWhich one would you like to see?\n");

                      do
                      {
                          printf("Enter your choice: ");
                          scanf(" %d", &horrorMovieChoice);

                          // HORROR MOVIES RESUME
                          switch(horrorMovieChoice)
                          {
                              case (1): printf("\nThis movie rebooted the Wrong Turn film franchise and focuses on a group of hikers who take a—you guessed it—wrong turn while hiking the Appalachian Trail and find themselves under attack by the mountain community who lives there.\n\n");
                                        break;
                              case (2): printf("\nA young man spends a scary night fulfilling a ritualistic vigil over a dead body.\n\n");
                                        break;
                              case (3): printf("\nAn art restorer (Seyfried) and her husband (Norton) and daughter move into a new house and begin to suspect that their neighbors are keeping some dark and twisty secrets.\n\n");
                                        break;
                              case (4): printf("\nThe Abbott family continues their fight against the noise-sensitive aliens, and are forced to venture into the unknown beyond the safety of their farm.\n\n");
                                        break;
                              case (5): printf("\nThe third film in the Conjuring franchise focuses on a murder suspect who becomes the first person to claim demonic possession as their defense in court.\n\n");
                                        break;
                              default:  printf("\n\n%d is not a valid choice.\n\a", horrorMovieChoice);
                                        printf("Try Again %s!\n", userFirstName);
                                        break;
                          }
                      }
                      while ((horrorMovieChoice < 1) || (horrorMovieChoice > 5));
                      return 0;


            // SCIENCE FICTION MOVIES CHOICE
            case(5): printf("\nOh, so you like Science Fiction movies, that\'s cool!\n\n");
                      printf("Here is a list of our Recommendations for you %s:\n", userFirstName);
                      printf("\n\n\t\t\t\t\t\tTOP 5 SCIENCE FICTION MOVIES\n\n");
                      printf("1. Chaos Walking\n");
                      printf("2. Free Guy\n");
                      printf("3. Infinite\n");
                      printf("4. Ghostbusters: Afterlife\n");
                      printf("5. Old\n");

                      printf("\nWhich one would you like to see?\n");

                      do
                      {
                          printf("Enter your choice: ");
                          scanf(" %d", &scienceFictionMovieChoice);

                          // SCIENCE FICTION MOVIES RESUME
                          switch(scienceFictionMovieChoice)
                          {
                              case (1): printf("\nDaisy Ridley and Esquire cover star Tom Holland star in this dystopian film about a distant planet colonized by humans, where all the women have died or disappeared, and all the men are afflicted by “The Noise,” a mysterious malady by which everyone can hear one another’s thoughts. When Viola (Ridley) crash lands on the planet, Todd (Holland) is astonished to encounter the first woman he’s ever met, as well as the first person not afflicted by The Noise. Based on a popular trilogy by Patrick Ness, beginning with The Knife of Letting Go, Chaos Walking promises a riveting story featuring two of Hollywood’s brightest young stars.\n\n");
                                        break;
                              case (2): printf("\nWho but Ryan Reynolds could head up this metafictive black comedy about a bank teller who discovers that he is, in fact, a non-playable character in a video game? Thanks to a program inserted into the game by developers, Guy (Reynolds) has a Truman Show-style awakening to the nature of his reality. He then plots to re-cast himself as the hero, racing against time before the developers shut down the game for good.\n\n");
                                        break;
                              case (3): printf("\nDirector Antoine Fuqua returns with a big-screen adaptation of D. Eric Maikranz’s The Reincarnationist Papers, starring Mark Wahlberg and Chiwetel Ejiofor. Wahlberg plays Evan McCauley, a troubled man who discovers that his hallucinations are actually memories from his past lives. Evan believes himself to be alone in his plight, until he encounters a secret society of fellow Reinarnationists, who will admit him to their ranks—if he can prove that he qualifies.\n\n");
                                        break;
                              case (4): printf("\nThe long-awaited latest Ghostbusters sequel arrives this summer at last, with Bill Murray, Dan Aykroyd, Ernie Hudson, Sigourney Weaver, and Annie Potts set to reprise their roles from the original film. This sequel picks up in Oklahoma, where a single mother (Carrie Coon) and her two children have inherited a farm from her late father, OG Ghostbuster Egon Spengler. When the town is rocked by a series of mysterious earthquakes, the children, along with their teacher (played by Paul Rudd) uncover their link to the Ghostbusters, who have become something of a tall tale. Directed by Jason Reitman, son of Ghostbusters director Ivan Reitman, Ghostbusters: Afterlife promises a winning return to form for the beloved franchise.\n\n");
                                        break;
                              case (5): printf("\nIn M. Night Shyamalan’s latest cinematic nightmare, a family vacationing in the tropics is shocked and horrified to discover that a secluded beach is causing them to age rapidly, reducing their entire lifetimes into a single day.\n\n");
                                        break;
                              default:  printf("\n\n%d is not a valid choice.\n\a", scienceFictionMovieChoice);
                                        printf("Try Again %s!\n", userFirstName);
                                        break;
                          }
                      }
                      while ((scienceFictionMovieChoice < 1) || (scienceFictionMovieChoice > 5));
                      return 0;



            // DRAMA FICTION MOVIES CHOICE
            case(6): printf("\nOh, so you like Drama movies, that\'s cool!\n\n");
                      printf("Here is a list of our Recommendations for you %s:\n", userFirstName);
                      printf("\n\n\t\t\t\t\t\tTOP 5 DRAMA MOVIES\n\n");
                      printf("1. One Night in Miami\n");
                      printf("2. Penguin Bloom\n");
                      printf("3. Our Friend\n");
                      printf("4. The Mauritanian\n");
                      printf("5. Music\n");

                      printf("\nWhich one would you like to see?\n");

                      do
                      {
                          printf("Enter your choice: ");
                          scanf(" %d", &dramaMovieChoice);

                          // DRAMA FICTION MOVIES RESUME
                          switch(dramaMovieChoice)
                          {
                              case (1): printf("\nThis historical fiction film takes place on the night of February 25, 1964 (in Miami, obviously) and focuses on Cassius Clay, Jim Brown, Sam Cooke, and Malcom X as they meet to discuss the responsibility of being successful Black men during the civil rights movement.\n\n");
                                        break;
                              case (2): printf("\nA photographer and his family find an injured magpie chick, which helps them adjust to the family matriarch's paralysis.\n\n");
                                        break;
                              case (3): printf("\nBased on the true story of Nicole and Matthew Teague, who had their best friend move in to help them prepare for Nicole's impending death.\n\n");
                                        break;
                              case (4): printf("\nThe movie focuses on Mohamedou Ould Salahi, a man captured by the U.S. government and held in a Guantanamo Bay detention camp without a trial, who finds help in defense attorney Nancy Hollander.\n\n");
                                        break;
                              case (5): printf("\nThis movie by singer Sia (which has had some drama and controversy IRL, too) is about a newly sober drug dealer who becomes the guardian of her teenaged, autistic half-sister, Music.\n\n");
                                        break;
                              default:  printf("\n\n%d is not a valid choice.\n\a", dramaMovieChoice);
                                        printf("Try Again %s!\n", userFirstName);
                                        break;
                          }
                      }
                      while ((dramaMovieChoice < 1) || (dramaMovieChoice > 5));
                      return 0;



            // EXITS THE PROGRAM
            case(7):  printf("\nThanks for trying our program %s!\n\n\a", userFirstName);
                      exit(1);



            default:  printf("\n\n%d is not a valid choice.\n\a", movieGenreChoice);
                      printf("Try Again %s!\n", userFirstName);
                      break;
        }
   }

   //MAIN WHILE
   while ((movieGenreChoice < 1) || (movieGenreChoice > 6));

   return 0;
}


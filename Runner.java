// k of the locations that have been guessed. You can use a `Set` data structure to store the guessed locations. Here's the complete implementation of the `Guesses` class:


import java.util.HashSet;
import java.util.Set;

import java.util.Scanner;



public class Guesses {
    private Set<Cell> guessedLocations;

    public Guesses() {
        guessedLocations = new HashSet<>();
    }

    public void addGuess(Cell location) {
        if (location.isInBounds()) {
            guessedLocations.add(location);
        }
    }

    public boolean isGuessed(Cell location) {
        return guessedLocations.contains(location);
    }

    public int getTotalGuesses() {
        return guessedLocations.size();
    }
}


public class Runner {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Guesses guesses = new Guesses();

        // Add a valid guess
        guesses.addGuess(new Cell(0, 0));

        // Add the same guess
        guesses.addGuess(Cell.fromString("A1"));

        // Add an invalid guess
        guesses.addGuess(new Cell(8, 0));

        // There should be one valid guess
        System.out.println("You have made " + guesses.getTotalGuesses() + " valid, distinct guesses");

        while (true) {
            System.out.println("Please enter a guess:");
            Cell guess = Cell.fromString(input.nextLine());

            if (guess == null) {
                System.out.println("Invalid guess");
                continue;
            }

            if (guesses.isGuessed(guess)) {
                System.out.println("You have guessed this already!");
            }

            guesses.addGuess(guess);

            System.out.println("You have made " + guesses.getTotalGuesses() + " valid, distinct guesses");
        }
    }
}


// The updated `Runner` class creates an instance of `Guesses` and performs some example test cases. It adds a valid guess, adds the same guess again, and adds an invalid guess. It then retrieves the total number of valid and distinct guesses made using the `getTotalGuesses` method. Finally, it prompts the user to enter guesses and checks if they have been previously guessed using the `isGuessed` method.

// You can run this code and interact with it by entering guesses in the console to observe the output.
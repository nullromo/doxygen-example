#ifndef UTILITY_H
#define UTILITY_H

/**
 * \brief Magic number for magical computation.
 *
 * This number is selected to be the most elite number there is. No other
 * numbers are more elite than this number.
 */
#define MAGIC_NUMBER 1337

/**
 * @{ \name Five Gods constants.
 */
/**
 * \brief Five Gods constants.
 *
 * These five constants represent the five gods.
 */
#define MEW2KING  1
#define ARMADA    2
#define HUNGRYBOX 3
#define MANGO     4
#define PPMD      5
/**
 * @}
 */

/**
 * \brief Squares a number.
 *
 * This function multiplies a given number by itself, which results in the
 * square of that number.
 *
 * \param x The number to square.
 *
 * \return The square of the number.
 */
int square(int x);

/**
 * \brief Multiplies two numbers.
 *
 * This function multiplies a number times another number and returns the
 * result of those two numbers multiplied together. The result is the product
 * of the two numbers, and that is the value that is returned by this function.
 *
 * \param x The first operand.
 *
 * \param y The second operand.
 *
 * \return The product of `x` and `y`.
 */
int multiply(int x, int y);

/**
 * \brief Function for magic math.
 *
 * This function multiplies a number by the magic number.
 *
 * \param x The number on which to perfom magic.
 *
 * \return The magic product of the number.
 */
int magic(int x);

/**
 * \brief Multiplies all the gods together.
 *
 * This function just multiplies the five god constants together.
 *
 * \return The product of the five numbers.
 */
int battleOfTheFiveGods();

#endif // UTILITY_H

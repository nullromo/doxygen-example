#ifndef DOG_HPP
#define DOG_HPP

#define MAX_ENERGY 10

/**
 * \brief Represents a dog.
 *
 * This class keeps track of the dog's energy level, and performs actions for
 * the dog based on how much energy it has. Sleeping regains energy for the dog,
 * while barking and running use energy up.
 */
class Dog {
  public:
    /**
     * \brief Creates a new Dog.
     *
     * Creates a new Dog named `_name` with half of its maximum energy.
     *
     * \param _name The dog's name.
     */
    Dog(const char* _name);

    /**
     * \brief Causes the dog to bark.
     *
     * Causes the dog to bark if it has enough energy to do so. Barking
     * costs 1 energy to do. If the dog does not have enough energy, then
     * the bark fails.
     *
     */
    void bark(void);

    /**
     * \brief Causes the dog to run.
     *
     * Causes the dog to run for an amount of time if it has enough energy
     * to run for that long. If the dog does not have enough energy, then
     * the run fails. If the dog cannot complete the full run, no running
     * takes place and no energy is expended. Running costs 3 energy per
     * minute.
     *
     * \param minutes Number of minutes for the dog to run.
     */
    void run(int minutes);

    /**
     * \brief Causes the dog to sleep.
     *
     * Sleeping replenishes the dog's energy. The dog regains an amount of
     * energy equal to twice the number of minutes slept. The dog will
     * always sleep, regardless of how much energy it has remaining.
     *
     * \param minutes Number of minutes for the dog to sleep.
     */
    void sleep(int minutes);

  protected:
    /**
     * \brief Checks the dog's energy.
     *
     * Compares an amount of energy with the dog's current available energy.
     * This function can be used to determine if the dog is able to take an
     * action that costs energy.
     *
     * \param energyToExpend An amount of energy to check.
     *
     * \return True if the dog has enough energy, and false otherwise.
     */
    bool checkEnergy(int energyToExpend);

  private:
    /**
     * \brief The dog's name.
     *
     * Represents the dog's name. This is set when the dog is created, and
     * cannot be changed afterwards.
     */
    const char* name;

    /**
     * \brief The dog's available energy.
     *
     * Represents the amount of energy the dog has available. This is set in
     * the constructor and should not be accessed externally. Taking actions
     * that cost the dog energy will cause this value to drop, and sleeping
     * will cause this value to rise.
     */
    int energy;
};

#endif // DOG_HPP

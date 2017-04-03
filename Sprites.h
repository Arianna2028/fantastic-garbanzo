// #ifndef PING_SPRITES_H
// #define PING_SPRITES_H
//
// #include <vector>
// #include "Sprite.h"
//
// namespace project
// {
//
// /**
//  * A collection of images.  The behavior includes
//  * constructing a collection of random images, and
//  * evolving the images for one time step.
//  * @author Ken Baclawski
//  */
// class Sprites
// {
// public:
//   /**
//    * Construct a collection of sprites.
//    * @throw domain_error if the arguments are not valid.
//    */
//   Sprites(/** The width of the screen. */
//           int width = 640,
//           /** The height of the screen. */
//           int height = 480);
//
//   /**
//    * Evolve a collection of sprites.
//    */
//   void evolve(/** The amount of time to evolve the sprites. */ double delta = 0.01) noexcept;
//
//   /**
//    * Get the list of sprites.
//    * @return A constant reference to the list of sprites.
//    */
//   const std::vector<Sprite>& getList() const noexcept;
//
// private:
//   /** The collection of sprites. */
//   std::vector<Sprite> spriteList_;
//
//   /** The random number generator. */
//   std::mt19937 engine_;
// };
//
// }
//
// #endif

#ifndef CIRCLE_H
#define CIRCLE _H
namespace shapes{
class Circle{
   private:
   double radius;

   public:
   Circle(double newRadius);
   ~Circle();
   void setRadius(double r);
   double getRadius() const;

};
}
#endif
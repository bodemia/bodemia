import turtle

turtle.setup(800,600)

wn = turtle.Screen()
wn.title("triangle")
wn.bgcolor("green")

tri = turtle.Turtle()
tri.color("red")
tri.shape("turtle")
tri.penup()

size = 20

for i in range(30):
    tri.stamp()
    size += 3

    tri.forward(size)
    tri.left(25)

wn.exitonclick()

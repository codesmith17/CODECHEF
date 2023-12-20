import turtle

# set up the turtle
t = turtle.Turtle()
t.speed(0)
t.hideturtle()

# draw the red ball
t.color("red")
t.begin_fill()
t.circle(100)
t.end_fill()

# draw the yellow lamp
t.penup()
t.goto(0, 100)
t.pendown()
t.color("yellow")
t.begin_fill()
t.right(90)
t.forward(50)
t.right(90)
t.forward(25)
t.right(45)
t.forward(35.4)
t.right(45)
t.forward(25)
t.right(90)
t.forward(50)
t.end_fill()

# draw the blue letters
t.penup()
t.goto(-70, 0)
t.pendown()
t.color("blue")
t.pensize(25)
t.right(90)
t.forward(40)
t.right(90)
t.forward(70)
t.right(180)
t.forward(140)
t.right(180)
t.forward(70)
t.right(90)
t.forward(40)

# keep the window open until it is clicked
turtle.Screen().exitonclick()

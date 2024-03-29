import turtle
t= turtle.Turtle()
ts = turtle.getscreen()
ts.bgcolor('aqua')
t.color('aqua')
t.penup()
t.setpos(-300,100)
t.pendown()

colors = ["red", "blue", "green", "gray", "orange", "black"]
t.speed(10)

for i in range(130):
    
    t.color(colors[i%6])    

    if i%2==0:
        t.pendown()
        t.forward(i/10)
        t.hideturtle()
    else:
        t.penup()
        t.forward(5+i/10)
        t.showturtle()

    t.left(40 - i/1.5)

t.color('aqua')
t.setpos(-100,100)
t.pendown()
t.color('pink')
t.left(120)

#H
t.pensize(3)
t.forward(50)
t.penup()
t.right(180)
t.forward(25)
t.color("red")
t.left(90)
t.pendown()
t.forward(20)
t.color('grey')
t.left(90)
t.forward(25)
t.color("blue")
t.right(180)
t.forward(50)

t.penup()
t.left(90)
t.forward(20)

#A
t.pendown()
t.color("tomato")
t.left(75)
t.forward(51)
t.right(150)
t.color("orange")
t.forward(51)
t.left(75)

t.penup()
t.forward(20)
#P
t.pendown()
t.color("yellow")
t.left(90)
t.forward(50)
t.right(90)
t.color("green")
t.forward(20)
t.right(90)
t.color("pink")
t.forward(20)
t.right(90)
t.forward(20)
t.color("purple")
t.left(90)
t.forward(30)

t.penup()
t.left(90)
t.forward(40)
#P
t.pendown()
t.left(90)
t.color("wheat")
t.forward(50)
t.right(90)
t.forward(20)
t.color("green")
t.right(90)
t.forward(20)
t.color("tomato")
t.right(90)
t.forward(20)
t.color("brown")
t.left(90)
t.forward(30)

t.penup()
t.left(90)
t.forward(50)
#Y
t.pendown()
t.left(90)
t.color("blue")
t.forward(30)
t.left(45)
t.color("red")
t.forward(28)
t.right(180)
t.color("green")
t.forward(28)
t.left(90)
t.color("blue")
t.forward(28)
t.right(135)

t.penup()
t.forward(50)
t.left(90)
t.forward(50)
#D
t.pendown()
t.color("pink")
t.forward(30)
t.left(90)
t.color("yellow")
t.forward(50)
t.left(90)
t.color("orange")
t.forward(30)
t.right(180)
t.color("blue")
t.forward(5)
t.right(90)
t.forward(50)

t.penup()
t.left(90)
t.forward(45)
#I
t.pendown()
t.color("green")
t.forward(10)
t.right(180)
t.color("pink")
t.forward(5)
t.right(90)
t.color("blue")
t.forward(50)
t.left(90)
t.color("green")
t.forward(5)
t.right(180)
t.forward(10)


t.penup()
t.forward(20)

#W
t.pendown()
t.right(90)
t.color("orange")
t.forward(50)
t.left(150)
t.color("tomato")
t.forward(30)
t.right(120)
t.color("green")
t.forward(30)
t.left(150)
t.forward(50)

t.penup()
t.right(180)
t.forward(50)
t.left(90)
t.forward(20)

#A
t.pendown()
t.left(75)
t.color("blue")
t.forward(51)
t.right(150)
t.color("green")
t.forward(51)
t.left(75)

t.penup()
t.forward(20)
t.left(90)
t.forward(50)

#L
t.pendown()
t.color("blue")
t.right(180)
t.forward(50)
t.color("green")
t.left(90)
t.forward(30)

t.penup()
t.forward(20)

#I
t.pendown()
t.forward(10)
t.color("pink")
t.right(180)
t.forward(5)
t.color("blue")
t.right(90)
t.forward(50)
t.left(90)
t.color("wheat")
t.forward(5)
t.right(180)
t.forward(10)

t.penup()
t.setpos(-30,-50)

t.pendown()
t.left(90)
t.forward(50)
t.left(90)
t.forward(15)
t.right(180)
t.forward(30)

t.penup()
t.forward(20)

t.pendown()
t.color("blue")
t.forward(30)
t.right(90)
t.color("orange")
t.forward(50)
t.right(90)
t.color("yellow")
t.forward(30)
t.right(90)
t.color("green")
t.forward(50)

t.penup()
t.right(180)
t.forward(50)
t.left(90)
t.forward(70)

#A
t.pendown()
t.color("red")
t.left(75)
t.forward(51)
t.right(150)
t.color("orange")
t.forward(51)
t.left(75)

t.penup()
t.forward(20)
t.left(90)
t.forward(50)
t.right(180)

#L
t.pendown()
t.color("blue")
t.forward(50)
t.color("green")
t.left(90)
t.forward(30)

t.penup()
t.forward(20)
t.left(90)
t.forward(50)

#L
t.pendown()
t.color("blue")
t.right(180)
t.forward(50)
t.color("green")
t.left(90)
t.forward(30)

t.penup()
t.forward(70)

t.pendown()
t.left(120)
t.color("orange")
t.forward(60)
t.right(180)
t.color("blue")
t.forward(60)
t.left(120)
t.color("pink")
t.forward(60)

t.penup()
t.right(180)
t.forward(60)
t.left(120)
t.forward(70)
t.left(90)
t.forward(50)
t.right(90)

t.pendown()
t.color("tomato")
t.forward(40)
t.right(135)
t.color("yellow")
t.forward(58)
t.left(135)
t.color("red")
t.forward(40)

t.penup()
t.setposition(200,-300)
t.pendown()

turtle.speed(10)
colors = ['red', 'purple', 'blue', 'green', 'orange', 'yellow']
t = turtle.Pen()
t.penup()
t.setpos(200,-300)
t.pendown()
turtle.bgcolor('black')
for x in range(360):
    t.pencolor(colors[x%6])
    t.width(x//100 + 1)
    t.forward(x)
    t.left(59)

t.pensize(1)
t.color('red', 'yellow')
t.begin_fill()
while True:
    t.forward(200)
    t.left(170)
    if abs(t.pos()) < 1:
        break
t.end_fill()
t.done()


turtle.exitonclick()


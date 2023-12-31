# $15 Room Temperature Regulation 
## The problem
While moving back into my parents home, there is no internal AC in this fairly old building. I've noticed that my ability to fall asleep and sleep quality has 
worstened since. After doing my due dilligence with influential variables such as caffeine intake, time of going to bed, bed time routine, and countless others, 
I've realized that my room is uncontrollably hot due to a radiator, and no proper airlfow. Simply cracking the window open does not do the trick, as it is still 
unbearably hot. My hypothesis is that, since my window is a sliding window, nothing sticks out in order to direct the flow of air into my room, and so the cold 
winter air outside, simply glides by my window without actually making it inside. The idea is to have fans placed in my window such that they are sucking the 
air from the outside and pushing it inside. I believe that pushing the hot air OUT of my room and outside, will be unsatisfactory in this situation, as there is a
greater difference in temperature outside, which I want to bring inside. I could be wrong, but after some simple testing, this has proven more effective. 

## The vision 
- Temperature sensor checks what the temperature is in my room
- 3 CPU fans situated in my window that are turned on if the difference of temperature in my room vs. desired temperature exceedes a certain threshold
- 4-pin CPU fans are able to run either faster/ slower depending on what the temperature difference
- Fans only turn on when needed, to keep desired room temperature constant
- LCD screen to display what the current room temperature is, and what the desired temperature is
- 2 buttons to increase/ decrease desired temperature

## Requirements
- Arduino Uno
- bread board
- jumper wires
- tempertature sensors (must purchase, $15 on Amazon)
- 3 spare CPU fans (2 pin will work, 3 pin however will alow for checking the speed of the fans, and 4 pin will allow for also the control of speed also known as the PWM (Pulse-Width Modulation) Control)
- LCD screen (optional)
- 2 buttons (optional)

  
## Problems I've crossed
- Problem 1: Unlabeled CPU fan wires  
- Solution 1: There are 4 slots, I just need the power and ground to be plugged in correctly to label those to, should only take a couple tries to get the right combination... 
- Problem 2: RPM is outputting out 0 RPM / s. 
- Soloution 2: I don't really need it to control the fan speeds, as long as the PWM is working, I'm able to achieve what I need, this just would have been nice to see.  
- Problem 3: The arduino board does not have enough power for 1 fan, yet alone 3 fans. The board provides 5V, but each fan requires 12V and 0.2A... I don't feel like purchasing a $12 jack barrel
- Solution 3: so I will be going around my house to see what I can unplug, and steal a cable from to solve this issue, will need atleast 0.6A and 12V.
- Problem 4: I've burned a temp sensor while trying to feed the fans more power...
- Solution 4: Use seperate parts of the breadboard to power the temp sensor with 5V, and the other side for the power distribution of the 12V jack barrel for the fans. Also good thing the temperature sensor came with 5 sensors !
- 

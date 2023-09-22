# Auditory Oddball and Pupillometry
This project is born to measure the pupil diameter of people who are performing an Auditory Oddball. This is possible using Arduino Leonardo to generate two sounds different in pitch (named standard and target) and to trigger MEYE. 
# MEYE
MEYE is an opensource web app (https://www.pupillometry.it/) based on a convolutional neural network that performs online pupillometry in both mices and humans. 
# Stimuli
The Arduino code generates the two sounds scrolling an array made of 0 (standard sounds) and 1 (target sounds), triggering MEYE at the same time. It's necessary to add the array to the code. I wrote a Matlab script on purpose that creates arrays (length=200) in which the 5% of the elements are 1 and the rests are 0. It's avaiable inside this repository (oddballarrays.m). The administration of stimuli starts when the button is pressed. 
# Hardware 
In addition to a computer and an Arduino Leonardo board, an USB camera module and an IR light are highly recommended.
![circuitocompleto1 2 2](https://github.com/matildaercolanelli/Auditory-Oddball-Pupillometry/assets/134204071/484138f4-d8d0-4ab9-a0cd-675160679844)
![IMG_3904](https://github.com/matildaercolanelli/Auditory-Oddball-Pupillometry/assets/134204071/3fba5c70-8888-4fab-afc6-14469a81852f)
# Debounce Library
In order to obtain a precise button operation I included and used a debounce library in the Arduino code. The library is Bounce 2 by thomasfredericks and it's avaiable on GitHub (https://github.com/thomasfredericks/Bounce2).
# Results
I found a statistically significant difference in pupil diameter associated with the standard sounds and the deviant (target) ones. 
![RESULTS](https://github.com/matildaercolanelli/Auditory-Oddball-Pupillometry/assets/134204071/7c6136ff-6953-4b0b-8ab7-eb05d81af62e)

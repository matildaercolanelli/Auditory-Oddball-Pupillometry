# Auditory Oddball and Pupillometry
This project is born to measure the pupil diameter of people who are performing an Auditory Oddball. This is possible using Arduino Leonardo to generate two sounds different in pitch (named standard and target) and to trigger MEYE. 
# MEYE
MEYE is an opensource web app (https://www.pupillometry.it/) based on a convolutional neural network that performs online pupillometry in both mice and humans. 
# Stimuli
The Arduino code generates the two sounds scrolling an array made of 0 (standard sounds) and 1 (target sounds). It's necessary to add the array to the code. I wrote a Matlab script on purpose that creates arrays (length=200) in which the 5% of the elements are 1 and the rests are 0. It's avaiable inside this repository (oddballarrays.m). The administration of stimuli starts when the button is pressed. 
# Hardware 
In addition to a computer and an Arduino Leonardo board, an USB camera module and an IR light are highly recommended.
![circuitocompleto1 2](https://github.com/matildaercolanelli/AuditoryOddball/assets/134204071/b4fcdda3-ff5a-4415-97e9-dee3a9b72e96)

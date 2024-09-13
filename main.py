import cv2
import numpy as np
import matplotlib.pyplot as plt

# https://www.pinterest.com/pin/classic-characters-as-8x8-sprites-boing-boing--38702878035613264/

image = cv2.imread("resize.png")
image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
plt.imshow(image)
plt.show()

startOffset = 2
size = 8
increment = 11
for i in range(startOffset, image.shape[0], increment):
    for j in range(startOffset, image.shape[1], increment):
        plt.imshow(image[i:i+size, j:j+size])
        plt.show()


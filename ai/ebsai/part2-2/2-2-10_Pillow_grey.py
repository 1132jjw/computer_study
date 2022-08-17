# 컬러 이미지를 흑백 이미지로 만들기

import numpy as np                  # 외부 모듈   
import matplotlib.pyplot as plt
import PIL.Image as pilimg


im1 = pilimg.open("baby1.jpg")      # image file 읽어오기 
im2 = im1.convert('LA') # grey scale convert


plt.subplot(121)
plt.imshow(im1)                  # 원래 이미지 출력                       
plt.axis("off")
plt.title("Original", fontsize=9)

plt.subplot(122)
plt.imshow(im2)                  # 회색톤으로 변환한 이미지 출력
plt.axis("off")
plt.title("Gray converted", fontsize=9)

plt.show()

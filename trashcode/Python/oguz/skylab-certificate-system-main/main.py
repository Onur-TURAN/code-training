from PIL import Image,ImageDraw,ImageFont
import numpy as np
import pandas as pd
from src import get
from src import put
from src import mailling
from tqdm import tqdm
xls_file = "C:/Users/mrtur/Desktop/trashcode/Python/oguz/skylab-certificate-system-main/list.xlsx"
date = input("Enter the date that participant graduated : ")
content = input("Enter the name of course : ")
sender = "skylab.ytu@gmail.com"#the mail adress of sender
password = "yildizskylab2021"#mail password
data = pd.read_excel(xls_file,header = None)
data = data.iloc[:, :3]
img = Image.open("C:/Users/mrtur/Desktop/trashcode/Python/oguz/skylab-certificate-system-main/img_flow/template.png")
#put.qr(img)
#put.date(img,date)
#put.instructor(img)
#put.content(img,content)
#put.qr(img)
put.qr(img)
put.date(img,date)
put.instructor(img)
put.content(img,content)
put.qr(img)
subject = "SKY LAB Academy" #mail subject
img = img.save("C:/Users/mrtur/Desktop/trashcode/Python/oguz/skylab-certificate-system-main/img_flow/getready.png")

for i in tqdm(range(len(data))):
    img = Image.open("C:/Users/mrtur/Desktop/trashcode/Python/oguz/skylab-certificate-system-main/img_flow/getready.png")
    user,mail_adress = get.user(data,i)
    

    #mail content
    body = (f"Merhaba {user}, SKY LAB'e olan ilgin için teşekkür ederiz. 1. Dönem Eğitimimizi tamamladığın için ekte bulunan sertifikayı seninle paylaşıyoruz. Türkiyenin En Büyük Siber Güvenlik Zirvesi olan SKY DAYS'de görüşmek üzere :)")
    put.name(img,user)
    img.save("C:/Users/mrtur/Desktop/trashcode/Python/oguz/skylab-certificate-system-main/img_flow/ready2send.png")
    attachment = "C:/Users/mrtur/Desktop/trashcode/Python/oguz/skylab-certificate-system-main/img_flow/ready2send.png"
    mailling.mail(user,subject, body, sender, mail_adress, password, attachment = attachment)
print("succesfly end")

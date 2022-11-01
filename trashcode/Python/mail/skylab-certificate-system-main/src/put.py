from PIL import Image,ImageDraw,ImageFont
import qrcode
from src import get
from src import generate

def content(img,content): #kurs adı veya türü
    name = content
    font = ImageFont.truetype("arial.ttf", size = 100)
    d = ImageDraw.Draw(img)
    y_pix = 450
    stp = 1650
    d.text((get.start_pix_di(name,font,stp),y_pix),name, fill=(0,0,0),font = font)
def qr(img):
    qr = generate.qr()
    qr = qr.resize((200,200), Image.ANTIALIAS)
    offset = (2940,2055)
    img.paste(qr,offset)

def instructor(img): #eğitmen isimleri
    text = get.instructor()
    stp = 963 #x ekseni sağ sol
    font = ImageFont.truetype("arial.ttf", size=65)
    d = ImageDraw.Draw(img)
    y_pix = 1840 #y ekseni yukarı aşağı
    d.text((get.start_pix_di(text, font, stp), y_pix), text, fill=(0, 0, 0), font=font)

def date(img,date): #tarih
    text = date
    stp = 1770 #x ekseni sağ sol
    font = ImageFont.truetype("arial.ttf", size=65)
    d = ImageDraw.Draw(img)
    y_pix = 2085 #y ekseni yukarı aşağı
    d.text((get.start_pix_di(text, font, stp), y_pix), text, fill=(0, 0, 0), font=font)

def name(img,user):
    name = user
    font = ImageFont.truetype("arial.ttf", size = 100)
    d = ImageDraw.Draw(img)
    stp = 2130
    y_pix = 975
    d.text((get.start_pix_di(name,font,stp),y_pix),name, fill=(0,0,0,255),font = font)
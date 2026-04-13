text = "X-DSPAM-Confidence:    0.8475"
mes=text.find(':')
ato=text[mes+1:]
ato=float(ato)
print(ato)
import urllib.request, urllib.parse, json, ssl

serviceurl = 'http://py4e-data.dr-chuck.net/opengeo?'

ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

while True:
    address = input("Enter location: ")
    if len(address) < 1:
        print("--- Done ---")
        break

    params = {'q': address}
    url = serviceurl + urllib.parse.urlencode(params)
    print('Retrieving', url)

    try:
        
        uh = urllib.request.urlopen(url, context=ctx)
        data = uh.read().decode()
        print('Retrieved', len(data), 'characters')

        
        js = json.loads(data)

        
        plus_code = js['features'][0]['properties']['plus_code']
        print('Plus code:', plus_code)

    except Exception as e:
        print('--- Failure To Retrieve ---')
        print('Error details:', e)



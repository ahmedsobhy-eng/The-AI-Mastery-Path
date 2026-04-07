import urllib.request, urllib.parse, json, ssl, webbrowser

serviceurl = 'https://py4e-data.dr-chuck.net/opengeo?'

ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

while True:
    address = input("Enter location: ")
    if len(address) < 1: break

    address = address.strip()
    parms = dict()
    parms['q'] = address
    
    url = serviceurl + urllib.parse.urlencode(parms)
    print(f"Retrieving {url}")

    try:
        uh = urllib.request.urlopen(url, context=ctx)
        data = uh.read().decode()
        print(f"Retrieved {len(data)} characters")
    except:
        data = None

    try:
        js = json.loads(data)
    except:
        js = None

    if js is None or 'features' not in js or len(js['features']) == 0:
        print("--- Failure to retrieve ---")
        continue

    lat = js['features'][0]['properties']['lat']
    lon = js['features'][0]['properties']['lon']
    location = js['features'][0]['properties']['formatted']

    print(f"Location: {location}")
    print(f"Lat/Lon: {lat}, {lon}")

    map_url = f"https://www.google.com/maps/search/?api=1&query={lat},{lon}"
    webbrowser.open(map_url)
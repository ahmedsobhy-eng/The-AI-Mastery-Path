# 📍 Geo-Locator & Map Navigator

A Python-based tool that interacts with a Geolocation API to retrieve coordinates (Latitude & Longitude) for any given location and automatically opens it in Google Maps.

## 🚀 Features
- **API Integration**: Fetches real-time data from the OpenGeo API.
- **Data Parsing**: Extracts specific information from complex nested JSON responses.
- **Auto-Navigation**: Uses the `webbrowser` module to launch a browser with the exact coordinates.
- **Secure Handling**: Implements SSL context management for safe data retrieval.

## 🛠️ Built With
- Python 3.13
- `urllib` (Network requests)
- `json` (Data parsing)
- `ssl` (Security context)

## 📖 How to Use
1. Run `python main.py`.
2. Enter any city or location name (e.g., "Cairo", "Giza Pyramids").
3. View the coordinates in the terminal and watch the map open automatically!
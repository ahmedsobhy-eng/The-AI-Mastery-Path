# 🌍 Geospatial Analysis of Global Tech Giants
### Python for Everybody Specialization - Capstone Project

## 📝 Description
This project is the final Capstone for the **"Python for Everybody"** specialization by the University of Michigan. It demonstrates a complete data pipeline: from data cleaning and API interaction to database management and web visualization.

The application retrieves location data for major technology companies (like Google, Nvidia, and ASML), processes their addresses using a Geocoding API, stores the coordinates in a SQLite database, and finally visualizes them on an interactive world map.

## 🚀 Key Features
* **Data Retrieval:** Fetches geospatial data (Latitude & Longitude) for a list of tech headquarters.
* **Data Cleaning:** Implements logic to handle inconsistent address formats and API responses (Point vs. Polygon).
* **Database Management:** Uses **SQLite** to cache results, preventing redundant API calls and ensuring data persistence.
* **Interactive Visualization:** A custom **HTML/JavaScript** map (using Leaflet.js) with:
    * Dark mode UI for a modern look.
    * Custom markers with pulsing animations.
    * Live Stats Box tracking the total number of giants mapped.

## 🛠️ Technologies Used
* **Python 3:** Core logic and data processing.
* **SQLite:** Data storage and caching.
* **Google Maps/OpenGeo API:** For geocoding addresses.
* **HTML5 / CSS3:** Custom map styling and UI.
* **JavaScript (Leaflet.js):** Interactive mapping library.

## 📂 File Structure
* `tech_giants.data`: The source file containing company names and locations.
* `ex_17_01.py`: The "Fetcher" - talks to the API and populates the SQLite DB.
* `ex_17_02.py`: The "Dumper" - exports database records into `tech_giants.js`.
* `tech_giants_map.sqlite`: The database file where geodata is stored.
* `tech_giants.html`: The final web interface to view the map.
* `tech_giants.js`: The data file used by the map script.

## ⚙️ How to Run
1.  Add your list of companies to `tech_giants.data`.
2.  Run `python ex_17_01.py` to retrieve geodata.
3.  Run `python ex_17_02.py` to generate the JavaScript data file.
4.  Open `tech_giants.html` in any web browser to see the results.

## 🎓 Certification
I have successfully completed the **Python for Everybody Specialization** from the University of Michigan through Coursera.

## 🎓 Certification
[![Python for Everybody Specialization](https://img.shields.io/badge/Coursera-Certificate-blue?style=for-the-badge&logo=coursera)](https://coursera.org/share/3d6dc200e6337f18e63eec2d696b602b)
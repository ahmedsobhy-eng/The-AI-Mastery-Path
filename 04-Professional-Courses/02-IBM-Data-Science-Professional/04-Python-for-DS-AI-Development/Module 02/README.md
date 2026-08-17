# 📝 Quiz Review & Misconceptions Log

## 1. Data Science Methodology

* **Business Understanding**:
  * **Concept**: The primary goal of this stage is to clearly define the problem and the objectives from a business perspective (it is NOT determined by the Analytic Approach).

* **Error Types in Evaluation**:
  * **Type I Error**: False-Positive (false alarm).
  * **Type II Error**: False-Negative (failing to detect an actual positive case).

* **Data Preparation**:
  * **Core Task**: Addressing missing values, handling outliers, and cleaning dirty data (retaining raw formatting is incorrect).

* **Exploratory Data Analysis (EDA)**:
  * **Core Tool**: `Data Visualization` is used to explore distributions and patterns (Predictive Analytics is used in the modeling phase).

---

## 2. Python Basics & Data Structures

* **String Methods**:
  * `title()`: Capitalizes the first letter of **every** word (`"data science"` $\rightarrow$ `"Data Science"`).
  * `capitalize()`: Capitalizes only the **first** letter of the whole string.

* **String Indexing**:
  * Index positions allow direct access to individual characters at specific locations in a string.

* **List Operations**:
  * **Concatenation (`+`)**: `[1, 2, 3] + [1, 1, 1]` results in `[1, 2, 3, 1, 1, 1]` (joins lists, does not add elements mathematically).
  * **Append (`append()`)**: `A = [1]`; `A.append([2, 3, 4, 5])` appends the list as a **single nested element**, making `len(A) == 2`.

* **Dictionaries**:
  * **Key Representation**: Dictionary keys that are strings must have quotes like `["a", "b"]` (without quotes, Python treats them as undefined variables).
  * **Extracting Keys**: The correct syntax to convert dictionary keys into a list is `list(dict.keys())`.

* **List Assignment vs. Copying**:
  * **Direct Assignment (`B = A`)**: Creates an alias pointing to the same memory space. Modifying `B` mutates `A`.
  * **Proper Copying (`B = A.copy()`)**: Creates an independent copy. Changes to `B` will **not** affect `A`.
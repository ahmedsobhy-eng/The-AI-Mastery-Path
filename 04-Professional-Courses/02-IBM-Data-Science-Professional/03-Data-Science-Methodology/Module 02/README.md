# Module 2
## Stage 1: Data Understanding

In this stage, the data scientist evaluates the initial data to ensure it can address the defined questions.

### 1. Descriptive Statistics
We use statistical techniques to explore the data's characteristics:
* **Univariate Statistics:** Analyzing each variable individually to understand its properties.
* **Pairwise Correlations:** Examining the relationships between pairs of variables to see how they influence each other.
* **Histograms:** A visual tool used to understand:
    * How values or variables are distributed.
    * What data preparation might be needed to make a variable more useful in a model.

### 2. Case Study: Assessing Data Quality
In the heart failure project, initial analysis helped identify gaps or quality issues. If the data is insufficient to answer the initial questions, the data scientist must return to the **Data Collection** stage to find more resources.

### 3. Assessing Data Quality
Before moving to modeling, we must evaluate the quality of the gathered data. Data quality issues can lead to "Garbage In, Garbage Out" scenarios.

#### Key Data Quality Issues:
* **Missing Values:** Identifying gaps where data wasn't recorded.
* **Invalid or Misleading Values:** Identifying data that doesn't make sense (e.g., a negative age or a weight of 0).

#### Dimensions of Data Quality:
To ensure the data is "fit for use," we check it against several dimensions:
* **Accuracy:** Is the data correct?
* **Relevance:** Does the data actually help answer the business question?
* **Completeness:** Do we have all the parts of the data we need?
* **Timeliness:** Is the data up-to-date?
* **Clarity:** Is the data easy to interpret and understand?
* **Accessibility:** Can we actually get to and use the data?

### 4. The Iterative Nature of Data Science
Data Science is not a linear process; it is highly **iterative**. This means we often move back and forth between stages to refine our work.

* **The Loop:** We constantly cycle through Data Collection and Data Understanding.
* **Case Study Example:** In the CHF project, the team didn't get the definition of "CHF admission" right the first time. 
* **Refinement:** It took multiple cycles (Cycle 1, Cycle 2, Cycle 3) of diagnosing, planning, acting, and evaluating to reach a refined and accurate definition of what constitutes a heart failure admission.
* **Key Takeaway:** Be prepared to revisit previous stages as your understanding of the data grows.


## Stage 2: Data Preparation

Data Preparation is the most time-consuming stage of a data science project, often taking up **70% to 90%** of the total project time. Its goal is to transform raw data into a clean format that the analytical model can process.

### 1. Key Tasks in Data Preparation:
* **Cleaning:** Handling missing values, removing duplicates, and correcting invalid data.
* **Transforming:** Changing data formats or creating new variables (Feature Engineering).
* **Sorting & Filtering:** Organizing data to focus on the defined cohort.
* **Aggregating:** Combining multiple records into a single summarized format (e.g., one record per patient).

### 2. The "Chef" Analogy
Just as a chef spends most of their time washing, chopping, and preparing ingredients before the actual cooking begins, a data scientist spends the majority of their time preparing data before "cooking" it in the model.

### 3. Iterative Feedback Loop
This stage often reveals gaps in the data, requiring the data scientist to go back to the **Data Collection** or **Data Understanding** stages to gather more information or refine the requirements.
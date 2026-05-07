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
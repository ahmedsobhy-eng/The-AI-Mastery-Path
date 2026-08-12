# Module 3: Data Science Methodology — Modeling & Evaluation

## Stage 1 & 2: Understanding the Question & Analytic Approach

### 1. Key Concepts
* **Business Understanding:** Defining the core business problem or goal before collecting data or writing code.
* **Analytic Approach:** Determining the statistical or machine learning technique required based on the question (e.g., Classification, Regression, Clustering).
* **Workflow Pipeline:**
  1. Understand the question at hand.
  2. Select an analytic approach/method to solve the problem.
  3. Obtain, understand, prepare, and model the data.

---

## Data Modeling: Descriptive vs. Predictive Analytics

### 1. Analytics Spectrum (Value vs. Difficulty)
* **Descriptive Analytics (Hindsight):** Answers *"What happened?"* using historical data.
* **Diagnostic Analytics (Insight):** Answers *"Why did it happen?"* by analyzing root causes.
* **Predictive Analytics (Foresight):** Answers *"What will happen?"* by identifying trends and patterns.
* **Prescriptive Analytics (Optimization):** Answers *"How can we make it happen?"* by recommending optimal decision paths.

### 2. Predictive Analytics Feedback Loop
* Connects historical data (*What happened? / Why did it happen?*) $\rightarrow$ Real-time monitoring (*What is happening now?*) $\rightarrow$ Future predictions (*What is going to happen in the future?*).
* Includes a continuous feedback loop to refine predictions as new data becomes available.

---

## Stage 7 & 8: Modeling to Evaluation

### 1. Modeling Stage
* Focuses on building data visualizations and machine learning models to extract required answers.
* Involves selecting model algorithms, engineering features, and tuning hyper-parameters.

### 2. Evaluation Stage
* **Core Question:** *"Does the model used really answer the initial question, or does it need to be adjusted?"*
* **Iterative Process:** Evaluation acts as a feedback checkpoint. If performance is insufficient, the workflow loops back to **Data Preparation** or **Modeling** to recalibrate.

---

## Data Modeling: Using Training & Testing Sets

### 1. Train/Test Split
* **Training Set:** Used to train the algorithm and learn patterns from the dataset.
* **Test Set:** Used to evaluate model accuracy on unseen data to test generalizability.

### 2. Overfitting vs. Balanced Fit
* **Overfitting (Green Curve):** The model fits the training data too strictly, learning random noise. It performs poorly on test/unseen data.
* **Balanced Fit (Red Curve):** Captures the true underlying trend while ignoring random noise, ensuring strong predictive performance on new data.
* **Model Calibration:** Adjusting parameters to achieve the optimal trade-off between bias and variance.

## Stage 8: Evaluation — Case Study: How to Improve the Model?

### 1. Cohort Study Framework
* **Objective:** Determine whether exposure to a specific risk factor ($Exposure A$) directly causes or influences an outcome ($Disease$).
* **Defined Study Population:** Selects a baseline population initially free of the target disease.
* **Cohort Segmentation:**
  * **Exposed Group:** Cohort exposed to factor A $\rightarrow$ Resulted in a higher incidence rate ("Lots of disease").
  * **Not Exposed Group:** Cohort not exposed to factor A $\rightarrow$ Resulted in a lower incidence rate ("Not much disease").

---

### 2. Addressing Confounding Variables
* **Confounding Variables (A, B, C, D / E, F, G, H):** Unmeasured or external factors that simultaneously influence both the independent variable (exposure) and the dependent variable (outcome).
* **Risk to Model Accuracy:** Failing to account for confounding variables leads to spurious correlations, where the model incorrectly attributes causation to the exposure alone.
* **Key Steps for Model Refinement:**
  1. Identify potential confounders during the **Data Understanding** phase.
  2. Include confounders as input features during **Data Preparation**.
  3. Re-evaluate and recalibrate the model to isolate the genuine impact of the target variable.
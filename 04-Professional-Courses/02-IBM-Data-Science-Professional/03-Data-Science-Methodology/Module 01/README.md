# Module 01: From Problem to Approach

## 1. Data Science Methodology Stages
The IBM Data Science Methodology consists of 10 essential stages that guide a data scientist through any project:
1. **Business Understanding**
2. **Analytic Approach**
3. **Data Requirements**
4. **Data Collection**
5. **Data Understanding**
6. **Data Preparation**
7. **Modeling**
8. **Evaluation**
9. **Deployment**
10. **Feedback**

## 2. Case Study: Congestive Heart Failure (CHF)
In this module, we applied the methodology to a real-world medical case study involving an insurance company. The goal was to reduce hospital readmissions for patients with heart failure due to decreasing public funding.

### Business Requirements
To solve this problem, four main requirements were identified:
* **Outcome Prediction:** Predict if a patient will be readmitted (Yes or No).
* **Risk Assessment:** Predict the specific readmission risk for each patient.
* **Feature Importance:** Understand which specific events or factors led to the predicted outcome.
* **Usability:** Ensure the solution is easy for medical staff to understand and apply to new patients.

## Stage 2: Analytic Approach

In this stage, we determine the most appropriate framework to answer the business questions identified in the previous stage.

### 1. Types of Questions & Models
The choice of the model depends on the nature of the question:
* **Predictive Model:** Used to determine the probabilities of an action.
* **Descriptive Model:** Used to show relationships within the data.
* **Classification Model:** Used when the question requires a Yes/No answer.

### 2. Analytic Approaches by Analysis Type
We select the approach based on the desired insight:
* **Descriptive:** Focuses on the current status.
* **Diagnostic (Statistical Analysis):** Focuses on "What happened?" and "Why is this happening?".
* **Predictive (Forecasting):** Focuses on "What if trends continue?" and "What will happen next?".
* **Prescriptive:** Focuses on "How do we solve it?".

### 3. Machine Learning Utilization
Machine Learning is utilized to identify trends and relationships that might not be accessible through traditional programming:
* It involves learning without being explicitly programmed.
* It uses clustering and association approaches.

### 4. Case Study: Decision Tree Classification
For the heart failure readmission problem, **Decision Tree Classification** was selected:
* **Goal:** To predict a categorical outcome (Readmission: Yes or No).
* **Advantages:** It provides an explicit "decision path" showing conditions leading to high risk, making it easy for medical staff to understand and apply.
* **Structure:** It starts from a root node (Patient) and branches through split nodes (e.g., Exercise ability, Fatigue, Heart Failure status, Weight gain) to reach a leaf node (Y or N).
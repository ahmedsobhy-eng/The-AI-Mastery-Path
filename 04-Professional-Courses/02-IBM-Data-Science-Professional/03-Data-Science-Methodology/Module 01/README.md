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

## Stage 1: Business Understanding - Identifying Relevant Questions

A critical part of Business Understanding is defining the right questions that align with the business goal. 

### Case Study: E-commerce Pricing Optimization
**Goal:** Maximize revenue and profitability by identifying patterns in sales data and customer behavior.

#### Relevant Questions:
* **Promotional Impact:** How do purchase behaviors change during promotional periods?
* **Product Performance:** Which products had the highest sales volumes and what are their profit margins?
* **Customer Behavior:** How do ratings, reviews, and demographics influence price sensitivity and purchase decisions?
* **Technical Context:** What is the historical website traffic and preferred payment methods?

#### Non-Relevant Questions:
* Internal organizational structure or marketing department headcount.
* Indirect expenses like spending on office supplies.



### 5. Identifying Patterns to Address Questions (Delivery Case Study)
In this module, we explored how different analytical models address specific delivery-related questions:

#### A. Descriptive Model (Focuses on "What is happening?")
* Analyzes average delivery costs across different routes and time variations.
* Gathers insights on delivery times per vehicle type and route complexity.
* Identifies busiest delivery days and peak/off-peak route variations based on historical data.

#### B. Classification Model (Focuses on "Which category?")
* Classifies delivery schedules into specific time slots to balance workload and minimize delays.
* Groups delivery routes into categories based on average delivery time and order volume.

#### C. Clustering Model (Focuses on "Finding natural groups")
* Groups delivery regions based on customer density and order frequency to optimize planning.
* Clusters customer locations for efficient routing without explicitly making predictions from past data.
* Determines suitable delivery routes for specific goods like perishable items to ensure timely delivery.
## Stage 3: Data Requirements

Once the analytic approach is selected, we must identify the necessary data content, formats, and sources for the model.

### Case Study: Selecting the Cohort
In the CHF readmission project, we defined a **cohort** (a specific group of subjects) to ensure data quality and relevance.

#### 1. Inclusion Criteria:
* **Service Area:** Patients must be inpatients within the health insurance provider’s service area.
* **Primary Diagnosis:** Must have a primary diagnosis of CHF within a one-year period.
* **History:** Must have continuous enrollment for at least 6 months prior to the primary CHF admission (to ensure sufficient historical data).

#### 2. Exclusion Criteria:
* **Disqualifying Conditions:** Patients with certain conditions (e.g., terminal illnesses) are excluded to prevent "noise" and ensure the model focuses specifically on heart failure-related readmissions.
### 3. Defining the Data
To ensure the data is suitable for the **Decision Tree Classifier**, we focus on its structure and content:
* **Record Structure:** Data must be organized as one record per patient, with columns representing the dependent variable (outcome) and predictors (features).
* **Comprehensive History:** The content should cover all aspects of each patient's clinical history to provide a full picture.
* **Data Transformation:** Initially, data may be in a transactional format and will require transformations to be compatible with the analytical model.

## Stage 4: Data Collection

After defining the requirements, the data scientist identifies and gathers the available data resources.

### Case Study: Gathering Available Data
For the heart failure project, data was sourced from multiple corporate systems to build a comprehensive view of each patient:

* **Corporate Data Warehouse:** A centralized source containing medical claims, eligibility, provider, and member information.
* **Inpatient Record System:** Provides detailed clinical data from hospital stays.
* **Claim Payment System:** Contains financial and administrative data regarding medical services provided.
* **Disease Management Program Information:** Offers insights into specific programs patients participated in to manage their conditions.

*Note: Data collection often requires identifying gaps; if necessary data is missing, the data scientist may need to revise the requirements or find new sources.*
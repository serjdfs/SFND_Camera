Implementation of the descriptors, detectors and matchers.

1. A buffer ring was introduced by creating a new class which contains a vector and a variable with the max size. Each new element will be put at the end and will displace a position the rest of the elements.
2. A chain of if clauses was added with the corresponding code for the keypoints detection to be selected by introducing the desired method.
3. For academic purposes we are reducing the amount of keypoints to focus only on a specific car and appreciate better the performance of the methods.
4. For tasks 4,5,6 a chain of if clauses was also added to select the desired implementation accordingly.
5. A spreadsheet was filled with all the combinations to have the overview of the methods and how they perform better.

Recommended descriptor-detector pairs

Based on the processing time the recommendations for the top 3 combinations are the following:

1. FAST-ORB
2. ORB-BRIEF
3. Shitomasi-BRIEF
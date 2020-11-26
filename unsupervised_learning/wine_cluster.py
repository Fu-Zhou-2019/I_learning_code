

import matplotlib.pyplot as plt
import pandas as pd
from sklearn.cluster import AgglomerativeClustering, KMeans
from sklearn.metrics import silhouette_score

wine_data = pd.read_csv("wine_data.csv")


ac1 = KMeans( n_clusters=3)
ac2 = AgglomerativeClustering(n_clusters = 3, affinity="euclidean", linkage="average")


sklearn_clusters = ac2.fit_predict(wine_data)
kmeans_clusters = ac1.fit_predict(wine_data)

""" plt.figure(figsize=(6,4))
plt.title("Clusters from Kmeans")
plt.xlabel("OD Reading")
plt.ylabel("Proline")
plt.scatter(wine_data.values[:, 0], wine_data.values[:, 1], c =  kmeans_clusters ,s=50, cmap='tab20b')
plt.show()

plt.figure(figsize=(6,4))
plt.title("Clusters from Sci-Kit Learn Approach")
plt.xlabel("OD Reading")
plt.ylabel("Proline")
plt.scatter(wine_data.values[:, 0], wine_data.values[:, 1], c =sklearn_clusters ,s=50, cmap='tab20b')
plt.show()
 """
print("Silhouette Scores for Wine Dataset:\n")
print("K-Means Clustering: ", silhouette_score(wine_data, kmeans_clusters))
print("Agg Clustering: ", silhouette_score(wine_data, sklearn_clusters))
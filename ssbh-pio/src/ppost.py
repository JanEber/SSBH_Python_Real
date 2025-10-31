import requests


api_url = "http://10.42.24.33:8000"
data = {"userId": 1, "title": "Buy milk", "completed": False}
response = requests.post(api_url, json=data)
response.json()

print(response.status_code)
print(response.json())

response.status_code
import requests

api_url = "http://192.168.56.1:8000"  # your FastAPI server
params = {"temperature": "25"}        # query parameters

response = requests.post(api_url, params=params)

print(response.status_code)
print(response.json())

#!/usr/bin/python3
'''
A function that queries the Reddit API and returns the number of subscribers for a given subreddit
'''
import requests


def number_of_subscribers(subreddit):
    '''Return the total number of subscribers on a given subreddit.'''
    headers = {'User-Agent': 'MyRedditBot/0.0.1'}
    url = "https://www.reddit.com/r/{}/about.json".format(subreddit)
    response = requests.get(url, headers=headers, allow_redirects=False)
    if response.status_code == 200:
        data = response.json()
        subscribers = data['data']['subscribers']
        return subscribers
    else:
        return 0

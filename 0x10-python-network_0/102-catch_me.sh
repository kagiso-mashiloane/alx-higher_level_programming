#!/bin/bash
# This script makes a request to 0.0.0.0:5000/catch_me that gets the response message "You find me!".

# -s: Silent mode (don't show progress)
# -L: Follow redirects
# -X PUT: Use PUT method
# -d "user_id=98": Send data with user_id=98
# -H "Origin: School": Set Origin header to "School"
curl -s -L -X PUT -d "user_id=98" -H "Origin: School" 0.0.0.0:5000/catch_me


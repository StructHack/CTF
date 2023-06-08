# Notes
The notes application had two endpoints. One was the python server running the main app. The second was the node server which was used by the admin to visit the sent links using puppeeteer.

The `exploit.html` contains the exploit.

## Working of the exploit
There were some features in the app.
- Registering the users.
- Logging in the users.
- Creating notes.
- Viewing notes.
- Sharing notes to different users.

The goal was to somehow make admin share their notes with us. 

### Steps in solving the challenge
- Making an account with username `best123456` and password `best123456`
- Visiting `/share` endpoint to generate a CSRF token.
- Using the token as the tokens are shared between all the users given that the token array's length is less than 200.
- Making an exploit `exploit.html` and sending the exploit. 

```byuctf{1_thought_th4t_w4s_pretty_cl3v3r}```
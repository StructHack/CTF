# Steps
- The source code had flags placed inside the comments inside different routes in a flask app.
- The flask app had debug mode enabled. So, the task was to trigger an error in the route handler and dump the flag.

## urmombotnetdotnet.com 1
Registering two accounts with same email address triggers an error.<br>
```byuctf{did_you_stumble_upon_this_flag_by_accident_through_a_dup_email?}```

## urmombotnetdotnet.com 2
In `/api/tickets` endpoint, sending the descriptions's length more than the specified one generates error.<br>
```byuctf{oof_remember_to_check_length_limit}```

## urmombotnetdotnet.com 4
If the length of registered username less than 3, then flag is sent in the response. But inside of the code, there is a check that registering username less than 4 characters cannot be done. This is where unicode comes into action. Zero width joiner can be appended in the username while the python code accepts the unicode character but isnot saved in the database and while logging in the flag is sent.

```byuctf{I_used_unicode_to_make_a_username_under_4_chars_wbu?}```

## urmombotnetdotnet.com 4
Sending IPv6 address bypasses the check of lenght restriction and IP verification and flag is sent in the error.
```byuctf{IPv6_scopes_are_just_arbitrary_strings...maybe_there_are_more_vulns_worldwide?}```
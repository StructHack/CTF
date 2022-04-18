# SQL Tutor

While all of the dangerous character were blocked duirng first phase of the challenge i.e. the signature generation part. Second part when the SQL statement were getting executed, only the hash was checked. So using **debug=true** in **POST /execute HTTP/2** one could retrieve the hash of the payload and inject.

```
flag : dctf{Pump_7h3_s7r3am_h4s5_up!_353aa965}

```
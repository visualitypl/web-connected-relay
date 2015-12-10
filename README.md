# Web connected relay with Particle Photon
Web connected relay built with Particle Photon

Replacement of our Sesame implementation [http://www.visuality.pl/posts/how-we-open-our-office-door-via-slack]. When the API called it virtually presses the button with using relay circuit.

Replace `DEVICE_ID` and `DEVICE_ACCESS_TOKEN` with your values.

#### With using curl

```
curl https://api.particle.io/v1/devices/DEVICE_ID/relay \
  -d access_token=DEVICE_ACCESS_TOKEN \
  -d params=toggle
```

#### With using jQuery

```
$.post( "https://api.particle.io/v1/devices/DEVICE_ID/relay", { access_token: "DEVICE_ACCESS_TOKEN", params: "toggle" } );
```
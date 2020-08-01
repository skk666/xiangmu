/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * Additions Copyright 2016 Espressif Systems (Shanghai) PTE LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/**
 * @file aws_iot_certifcates.c
 * @brief File to store the AWS certificates in the form of arrays
 */

#ifdef __cplusplus
extern "C" {
#endif

const char aws_root_ca_pem[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n\
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n\
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n\
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n\
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n\
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n\
9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n\
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n\
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n\
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n\
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\n\
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n\
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n\
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n\
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n\
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n\
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n\
rqXRfboQnoZsG4q5WTP468SQvvG5\n\
-----END CERTIFICATE-----\n"};

const char certificate_pem_crt[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDWjCCAkKgAwIBAgIVAKsY/X/6b1KQudiczEYh1gGarDNYMA0GCSqGSIb3DQEB\n\
CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n\
IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yMDA3MjgwNzEw\n\
MTJaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n\
dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQChQPQrFQ0y6p5RxirC\n\
qQ5CqESkTxNKPdIJLfzF0WY/V/Tt69/Ur1ZPHS2jeSnrA8FhpHTbeynf+PUybaxD\n\
J9QcVPUPUXT6cMsvuW1XQYcehOnFFT9Dik9eNcAy1dud/7OcAb3giLTqvDKoJPlK\n\
cR6NPaORGaD9e59yD02gAocXQMV5lN4KRiFBu2gDEIz/RwTPAHSth7OJZKNfeOgF\n\
fPOUmGYk/ephwv45yGxh/+gJEfub0eRa9jMy4Io+RqL7olb/CBe6aqVgoo9HWbKg\n\
6V6pffH+EAPb76feLdCWMpEDg22TjNUt8Lejq9jDCW4Uml3rKzaegma5tKfLABm0\n\
QWUlAgMBAAGjYDBeMB8GA1UdIwQYMBaAFOQgKadf5Bkn32fxK012YoTQDB1RMB0G\n\
A1UdDgQWBBQVAuKNef6JnF7rYzFwIqjfeGk8ZDAMBgNVHRMBAf8EAjAAMA4GA1Ud\n\
DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAL4ZTx1JIKdOSTpSFlUWfuI2y\n\
+FV1YEBasnxprUMuI+t9HcfaS+ccbT38ImXbWQw0BuLA9yMSZBN2YLXFTg/BeSFX\n\
pwFnmY6HTVLeZ9dDVoCc6NjLOeoRg4rFTHSBGkzsIvurFHhhHA9t+6ntAV53/GhG\n\
ZUFvltT4C2G/TEfIuJwPTErK4G6/cWGPNeLbonlXKHKtizQIj8uAF9nwaK+NhshJ\n\
9t6CFmYrBkFdQ+DK+wpWBFSXeAj+GOkVjfYpPUizCgcIAL8NA+wKTPIjhyJEKCqu\n\
NUn/h/nbu+IfT1NvtIAz5Xt+VJ5tDC0lcrFoFHtUYwWGM1kI59KAzzaxt8BPZA==\n\
-----END CERTIFICATE-----\n"};

const char private_pem_key[] = {"-----BEGIN RSA PRIVATE KEY-----\n\
MIIEpQIBAAKCAQEAoUD0KxUNMuqeUcYqwqkOQqhEpE8TSj3SCS38xdFmP1f07evf\n\
1K9WTx0to3kp6wPBYaR023sp3/j1Mm2sQyfUHFT1D1F0+nDLL7ltV0GHHoTpxRU/\n\
Q4pPXjXAMtXbnf+znAG94Ii06rwyqCT5SnEejT2jkRmg/Xufcg9NoAKHF0DFeZTe\n\
CkYhQbtoAxCM/0cEzwB0rYeziWSjX3joBXzzlJhmJP3qYcL+OchsYf/oCRH7m9Hk\n\
WvYzMuCKPkai+6JW/wgXumqlYKKPR1myoOleqX3x/hAD2++n3i3QljKRA4Ntk4zV\n\
LfC3o6vYwwluFJpd6ys2noJmubSnywAZtEFlJQIDAQABAoIBAQCGDs3vEy1J6yt7\n\
qFfcRVeJqwKF5weObR60avr+Kjvq5WDGe5Y15x7F3ugWQ6DJtPGMD4DnBtmlTf/q\n\
0Kqpme8JLsgc2Ad8PVFud6WjKOMASFdgdW2G5PFezSjgGlLeY7oaNIh6pqxhidxD\n\
VZm6fZh8q4XUF45zrda8qGRMZk2Q0gJggyQjA+RJckHlUllClyHQmbMhpBs6JE07\n\
FmxHfAuycJK83dQfTUXBKR6+Mq5DRk+k5lkaJvDzgknHLKFNPVtfi9aIhxmqT51k\n\
Cr4bnIL2UeNGRVKy8JG4ijGdc9+W4O5NH/d2XqScH2Jsjhp+Svp38udQRax0xHE5\n\
7XmOKt1xAoGBANFLz2dmS1mS+5DfvhmG4Wh2VSYgyI6iGnN0d1m9o9KVbNH/p/uP\n\
MhKT96TYCXY1+iQ9gWbFa9dwNHKXHtygsFL4qtJx8+KZwEaQe3ccs3q2eqXlGU8q\n\
bRcnO7oHcK2HJtwAQcRtqUOzyiYtVRpCccbxO8CqHQ1yC6bCJjkBnUSDAoGBAMU8\n\
r+JhG84kQm1++1ONhSVg3aiY7dgseX7zpzarpT24zWTVUyWL/HUsq+LjXIjDdBIu\n\
Ha36R2EHuhHIPb5Na2zk24Dqk+HMzFVdWWbO1Mkw/kC54STbmCg2QpMqudvEYTSS\n\
CskTn3Qcq0G5WuhaIUGd35oGc+k8ANvnfzcnfA83AoGBAL8RO02E6GLkuP4AFDaP\n\
mPXZmVBOe2ki+YzPFSn64zSarxZjE0Km7iphpKF7i9+71RkCgUCGGDY8O9Ukusrl\n\
czK7yo6F8wS6IfsJaX1K2Vq8fek25c0MyTxq166znhz8lfAf1+pvxieFWZVSqy9m\n\
2yGoFkmDwzQEGjjpYyWFoMHrAoGAAu5p9sVWsnObgSEX/x/lUK7l3HGZZ1MR4y8f\n\
1xIp/IbYlp0NBUvVTrCBRXf3khjFitegnUtQ8EI7I7SEJmXkKNQl5v6VgA+ZIdOn\n\
Vn3Qb8UIolGg5PlWg5J63tENvhRnFW7uNhrSjdk3OlzU2wsr31vHTPS3mEnKAXqp\n\
S1qM33UCgYEA0TCyXJmeVxuCdGbGQ9aNYsp3sR7l70fwabiq/MGZVeNrFS3I0SgH\n\
DDNtyFZSOnsIW4sincausBM0pZsZiuVWTQhvEv58m8JdWsbdMdxg5zNQbMY3C2fY\n\
61CF6PJRf4jnAxY16IVeJ/LeshkgDfcs5LnPB7OZA3VQLiOKTLbtZBQ=\n\
-----END RSA PRIVATE KEY-----\n"};


#ifdef __cplusplus
}
#endif

$ cat encode.py

CHUNK_SIZE = 3
DELIMITER = '|'
PI_DIGITS = open("pi-digits.txt", "rb").read()

def pi_seek(value):
    return PI_DIGITS.find(value)

def encode(value):
    retval = []
    value += " " * (len(value) % CHUNK_SIZE)

    for i in xrange(0, len(value), CHUNK_SIZE):
        chunk = value[i: i + CHUNK_SIZE]
        encoded = hex(pi_seek(str(int(chunk.encode("hex"), 16))))[2:]
        if len(encoded) % 2 > 0:
            encoded = "0%s" % encoded
        retval.append(encoded.decode("hex"))

    return DELIMITER.join(retval).encode("base64")

print encode(raw_input("> ").strip())

$ python encode.py
> FLAG-<REDACTED>
F/o5fAElsZt8AQOnynwHaxp8B470fAE+Ahl8VhfRfF59mXztlJx8RiuWfApM/A==

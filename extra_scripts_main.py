sc = "/persist/pio-script/extra_script_pre.py"
with open(sc, "r") as file:
    exec(file.read())

filter_and_replace_main()
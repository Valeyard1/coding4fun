seconds = int(input())

def seconts_to_time(seconds):
    hours = seconds//3600
    seconds %= 3600
    minutes = seconds//60
    seconds %= 60
    print("{}:{}:{}" .format(hours, minutes, seconds))

def main():
    seconts_to_time(seconds)

if __name__ == "__main__":
    main()

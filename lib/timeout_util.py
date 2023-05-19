
import signal
import time

class TimeOutException(Exception):
    pass

def alarm_handler(signum, frame):
    raise TimeOutException()

signal.signal(signal.SIGALRM, alarm_handler)


# def loop(n):
#     for sec in range(n):
#         print("sec {}".format(sec))
#         time.sleep(1)
# signal.alarm(3)
# try:
#     loop(6)
# except TimeOutException as ex:
#     print(ex)
# signal.alarm(0)



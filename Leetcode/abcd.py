def processLogs(logs, threshold):
    digit_count = {}
    for log in logs:
        parts = log.split()
        digits = set([parts[0], parts[1]])
        for digit in digits:
            if digit in digit_count:
                digit_count[digit] += 1
            else:
                digit_count[digit] = 1
    return sum(1 for count in digit_count.values() if count > threshold)

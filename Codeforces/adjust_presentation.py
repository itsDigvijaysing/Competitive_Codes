def can_present(total_members, required_count, members_list, required_members):
    member_positions = {member: idx for idx, member in enumerate(members_list)}
    last_position = -1

    for member in required_members:
        current_position = member_positions[member]
        if current_position < last_position:
            return "TIDAK"
        last_position = current_position

    return "YA"

def main():
    test_cases = int(input())
    results = []

    for _ in range(test_cases):
        total_members, required_count, query_count = map(int, input().split())
        members_list = list(map(int, input().split()))
        required_members = list(map(int, input().split()))
        
        result = can_present(total_members, required_count, members_list, required_members)
        results.append(result)

    print("\n".join(results))

if __name__ == "__main__":
    main()

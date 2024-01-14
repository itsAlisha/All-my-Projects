def ConstBoard(board):  # displays current state of board
    print("Current State of Board : \n\n")
    # 0->__ , -1 -> X, 1 -> O
    # i%3 ->next line
    # edge case : 0%3==0 should be included
    for i in range(0, 9):
        if ((i > 0) and (i % 3 == 0)):
            print("\n")
        if (board[i] == 0):
            print("_", end=" ")
        if (board[i] == -1):
            print("X", end=" ")
        if (board[i] == 1):
            print("O", end=" ")
    print("\n\n")


def user1Turn(board):
    position = input("Enter X's position from [1,2,3....,9]")
    pos = int(position)
    # index: pos-1
    if (board[pos - 1] != 0):
        print("Wrong move")
        exit(0)
    board[pos - 1] = -1  # puts X there


def user2Turn(board):
    position = input("Enter O's position from [1,2,3....,9]")
    pos = int(position)
    # index: pos-1
    if (board[pos - 1] != 0):
        print("Wrong move")
        exit(0)
    board[pos - 1] = 1  # puts O there


def minmax(board, player):
    x = analyzeBoard(board)
    if (x != 0):
        return (x * player)  # so that ans remains consistent because we use -minmax
    pos = -1
    value = -2
    for i in range(0, 9):
        if (board[i] == 0):
            board[i] = player
            score = -minmax(board, player * -1)
            board[i] = 0
            if (score > value):
                value = score
                pos = i
        if (pos == -1):
            return 0
    return value


def CompTurn(board):
    # if score>value then update value and shift to that position!
    # __|___| 0
    # __| X |__
    # X|   | 0
    pos = -1
    value = -2
    for i in range(0, 9):
        if (board[i] == 0):
            board[i] = 1
            score = -minmax(board, -1)
            board[i] = 0
            if (score > value):
                value = score
                pos = i
    board[pos] = 1


def analyzeBoard(board):  # 2-D list
    cb = [[0, 1, 2], [3, 4, 5], [6, 7, 8], [0, 3, 6], [1, 4, 7], [2, 5, 8], [0, 4, 8], [2, 4, 6]]
    # access as cb[i][0]
    for i in range(0, 8):
        if (board[cb[i][0]] != 0 and
                board[cb[i][0]] == board[cb[i][1]] and
                board[cb[i][0]] == board[cb[i][2]]):
            return board[cb[i][0]]
    return 0


def main():
    choice = input("Enter 1 for Single player, 2 for Multiplayer")
    choice = int(choice)
    board = [0, 0, 0, 0, 0, 0, 0, 0, 0]
    if (choice == 1):
        print("Computer : 0 Vs You : X")
        player = input("Enter to play 1(st) or 2(nd) : ")  # 1
        # Player=1 (i+player)%2==0
        # 1 2  3  4 5  6 7  8 9
        # H AI H AI H AI H AI H
        # Player=2
        player = int(player)
        for i in range(0, 9):
            if (analyzeBoard(board) != 0):  # somebody has won
                break
            if ((i + player) % 2 == 0):  # AI's turn
                CompTurn(board)
            else:
                ConstBoard(board)
                user1Turn(board)
    else:
        for i in range(0, 9):
            if (analyzeBoard(board) != 0):  # somebody has won
                break
            if ((i) % 2 == 0):
                ConstBoard(board)
                user1Turn(board)
            else:
                ConstBoard(board)
                user2Turn(board)

    x = analyzeBoard(board)  # if any row or col or diagonal gets filled with 0 or X
    if (x == 0):
        ConstBoard(board)
        print("Draw!")
    if (x == -1):
        ConstBoard(board)
        print("Player X wins!!!! 0 Looses")
    if (x == 1):
        ConstBoard(board)
        print("Player 0 wins!!!! X Looses")

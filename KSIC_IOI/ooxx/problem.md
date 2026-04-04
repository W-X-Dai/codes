# Description
given a few gameboards of noughts and crosses (also known as tic-tac-toe), determine the status of each game.

# Input
The first line of input contains a single integer T (1 ≤ T ≤ 100), the number of test cases. Each test case consists of three lines, each containing three characters. Each character is either 'X', 'O', or '.', representing a cell occupied by player X, player O, or an empty cell, respectively.

# Output
For each test case, output a single line containing one of the following strings:
- "X wins" if player X has won the game.
- "O wins" if player O has won the game.
- "Draw" if the game is a draw (all cells are filled and neither player has won).
- "Game not finished" if there are still empty cells and neither player has won.
- "Invalid" if the game state is not possible given the rules of noughts and crosses.

# Example Input
```
3
XOX
OXO
XOX
XOX
OX.
X..
XOX
O..
X.O
```

# Example Output
```
X wins
Invalid
Game not finished
```
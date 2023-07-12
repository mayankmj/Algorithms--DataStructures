# import random

# class Player:
#     def __init__(self, name, batting, bowling, fielding, running, experience):
#         self.name = name
#         self.batting = batting
#         self.bowling = bowling
#         self.fielding = fielding
#         self.running = running
#         self.experience = experience
#         # Add more attributes as needed

# class Teams:
#     def __init__(self, name):
#         self.name = name
#         self.players = []
#         self.captain = None
#         # Add more attributes as needed

#     def select_captain(self):
#         # Select a captain from the list of players
#         self.captain = random.choice(self.players)

#     # Add more methods as needed

# class Field:
#     def __init__(self, field_size, fan_ratio, pitch_conditions, home_advantage):
#         self.field_size = field_size
#         self.fan_ratio = fan_ratio
#         self.pitch_conditions = pitch_conditions
#         self.home_advantage = home_advantage
#         # Add more attributes as needed

# class Umpire:
#     def __init__(self):
#         self.scores = 0
#         self.wickets = 0
#         self.overs = 0
#         # Add more attributes as needed

#     def predict_outcome(self, bowler, batsman):
#         # Use the stats of the bowler and batsman to predict the outcome of a ball
#         # Return the outcome (e.g., "Boundary", "Out", "No Run", etc.)
#         pass

#     # Add more methods as needed

# class Commentator:
#     def __init__(self, umpire):
#         self.umpire = umpire

#     def provide_commentary(self):
#         # Generate commentary based on the current state of the match (scores, wickets, overs, etc.)
#         pass

# class Match:
#     def __init__(self, team1, team2, field):
#         self.team1 = team1
#         self.team2 = team2
#         self.field = field
#         self.innings = 1
#         self.current_batting_team = None
#         self.current_bowling_team = None
#         self.umpire = Umpire()
#         self.commentator = Commentator(self.umpire)
#         # Add more attributes as needed

#     def start_match(self):
#         # Initialize the match by selecting captains, batting orders, etc.
#         # Simulate the match by running innings and switching teams
#         # Provide commentary for each ball
#         pass

#     def switch_innings(self):
#         # Switch the current batting and bowling teams
#         # Update innings count
#         pass

#     def end_match(self):
#         # Print the final result of the match
#         pass

# # Example usage of the classes
# player1 = Player("MS Dhoni", 0.8, 0.2, 0.99, 0.8, 0.9)
# player2 = Player("Sachin Tendulkar", 0.9, 0.1, 0.95, 0.7, 0.95)

# team1 = Teams("Team 1")
# team1.players = [player1, player2]

# team2 = Teams("Team 2")
# team2.players = [player1, player2]

# field = Field("Large", 0.8, "Dry", 0.1)

# match = Match(team1, team2, field)
# match.start_match()

# import module
import sports

# setting sport
sports.get_match(sports.CRICKET, 'KINGS XI PUNJAB' , 'ROYAL CHALLENGERS BANGALORE')

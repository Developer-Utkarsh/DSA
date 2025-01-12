# LeetCode Solutions & Notes 📝

This directory contains solutions to LeetCode problems, organized by difficulty and topics.

## Directory Structure 📂

```
leetcode/
├── easy/           # Easy difficulty problems
├── medium/         # Medium difficulty problems
├── hard/           # Hard difficulty problems
└── by-topic/       # Problems organized by topic
    ├── arrays/
    ├── strings/
    ├── linked-lists/
    └── ...
```

## Problem Solution Structure 📋

Each problem should be organized as follows:

```
[difficulty]/[problem-number]-[problem-name]/
├── README.md        # Problem description & approach
├── diagrams/        # Visual explanations
│   ├── approach1.drawio
│   └── approach1.png
├── pseudocode.md    # Algorithm steps
└── solution.cpp     # Implementation
```

### README.md Template
```markdown
# [Problem Title] - [Problem Number]

## Problem Link
[LeetCode Problem Link]

## Difficulty
[Easy/Medium/Hard]

## Tags
- [Tag1]
- [Tag2]

## Problem Statement
[Copy the problem statement here]

## Visual Explanation
![Approach 1](./diagrams/approach1.png)

## Approach
1. [Step-by-step explanation]
2. [Key insights]
3. [Why this approach works]

## Complexity Analysis
- Time: O(?)
- Space: O(?)

## Related Problems
- [Link to similar problem 1]
- [Link to similar problem 2]
```

### Pseudocode Template
```markdown
# Approach 1: [Name]

## High-level Idea
[Brief explanation]

## Pseudocode
```algorithm
function solve(input):
    // Step 1: Initialize
    ...
    // Step 2: Process
    ...
    // Step 3: Return result
    return result
```

## Best Practices 💡

1. **Before Solving**
   - Draw out examples
   - Create visual diagrams
   - Write pseudocode

2. **While Solving**
   - Document approach clearly
   - Add visual explanations
   - Include step-by-step breakdown

3. **After Solving**
   - Add complexity analysis
   - Link related problems
   - Note key learnings

## Using Draw.io in VS Code 🎨

1. Create diagrams in `diagrams/` folder
2. Use consistent styling
3. Export as PNG for README
4. Include both .drawio and .png files

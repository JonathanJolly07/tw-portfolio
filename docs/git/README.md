# Git and GitHub Technical Reference

## Core Concepts
- **Working Directory:** Untracked or modified local files.
- **Staging Area (Index):** Selected changes queued for the next commit.
- **Local Repository:** Permanent history stored locally in `.git/`.
- **Remote Repository:** Shared codebase hosted on GitHub.

## Essential Git Workflow

    git status              # Check state of working directory
    git add <filename>      # Stage modifications
    git commit -m "Message" # Snapshot staged changes
    git push origin main    # Publish commits to GitHub

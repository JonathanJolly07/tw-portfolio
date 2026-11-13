# Git and GitHub Technical Reference

## Core Architecture
- **Working Directory:** Local folder containing untracked or modified project files.
- **Staging Area (Index):** Selected changes queued for the next snapshot.
- **Local Repository:** Permanent commit history stored locally inside `.git/`.
- **Remote Repository:** Cloud-hosted codebase on GitHub (`origin`) enabling collaboration and backup.

## Essential Git Workflow
- `git init`: Initialize a new local repository.
- `git status`: Inspect modified, staged, and untracked files.
- `git add <file>`: Stage changes for commit (`git add .` stages all changes).
- `git commit -m "Message"`: Save a permanent snapshot with a descriptive message.
- `git branch -M main`: Rename the primary branch to `main`.
- `git remote add origin <URL>`: Link local repository to GitHub.
- `git push -u origin main`: Upload local commits to GitHub.

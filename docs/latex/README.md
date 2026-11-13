# LaTeX & Beamer: Scientific Typesetting

## Core Concepts
- **Separation of Content and Layout:** Focuses on logical document structure (`\section`, `\subsection`) while the engine handles typography, spacing, and pagination.
- **Mathematical Typesetting:** Supports inline math (`$...$`) and numbered display equations (`\begin{equation}...\end{equation}`) with native symbols, fractions, and integrals.
- **Automated Referencing:** Dynamically generates Tables of Contents (`\tableofcontents`), cross-references (`\label`, `\ref`), and BibTeX citations.
- **Beamer Presentations:** Creates structured slide decks using modular `\begin{frame}...\end{frame}` blocks and themes (`Madrid`, `Berlin`).

## Compilation Workflow
- **Standard Report (1 Pass):** `pdflatex report.tex`
- **Slides with Table of Contents (2 Passes):** `pdflatex slides.tex && pdflatex slides.tex`

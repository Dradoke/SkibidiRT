# 🌌 miniRT

## Description

**miniRT** is a project aimed at building your **first ray tracer** using C and miniLibX.
It’s an introduction to the world of **Computer-Generated Imagery (CGI)** through the **Ray Tracing** method.

This project will make you comfortable with:

* Mathematical formulas (geometry, vectors, lighting).
* Image rendering with miniLibX.
* Handling window events and memory management.
* Collaboration in a team environment.

---

## ✅ Team Development Best Practices

> As this is a group project, we follow strict guidelines to ensure smooth collaboration and maintainable code.

---

### 🧱 Project Structure

* Respect the repository structure defined at the beginning.
* Do not add files or folders without team approval.
* Never merge code that is broken or untested.

---

### 🔁 Git & GitHub

#### Branches

* `main` and `dev` are protected (no direct pushes).
* Each feature/fix must be developed in its own branch:

```bash
git checkout -b feat/lighting
git checkout -b fix/memory-leak
```

---

### 📆 Daily Routine (Rebase & Sync)

#### 🔄 Start of the Day

```bash
git fetch origin
git rebase origin/main
```

#### 🛑 End of the Day

```bash
git pull --rebase origin main
```

➡️ **Goal:** keep history clean, avoid conflicts.
⚠️ Never `git push -f` without making sure no one else is impacted.

---

### ✅ Pull Requests

* One PR = one clear feature/fix (no mixing).
* Provide a clear description.
* Require at least **1 team review** before merging.
* Delete the branch after merge.

---

### ✍️ Commit Conventions

Use **clear commit messages**:

```bash
git commit -m "feat: add plane intersection"
git commit -m "fix: fix shadow calculation"
```

Prefixes:

* `feat`: new feature
* `fix`: bug fix
* `refactor`: improvements without behavior change
* `test`: add or update tests
* `docs`: documentation

---

### 🧹 Code Hygiene

* Code must be clean, indented, and free of debug prints.
* No unused functions or dead code.
* Follow the **Norminette** rules (42 standard).

---

### 🛠 Useful Tools

* `valgrind` → check memory leaks.
* `make re` → always build clean before push.
* `scenes/` → store .rt files for testing.

---

### 🤝 Team Communication

* Use the team’s platform (Discord, Slack, etc.) for coordination.
* Announce when you work on a feature.
* Ask for help instead of blocking progress.

---

### 🧨 Absolutely Avoid

* Working directly on `main`.
* Merging without review.
* Pushing untested code.
* Commit messages like `wip`, `debug`, or `test`.

---

### 🚀 Project Goals

* Render **basic objects**: sphere, plane, cylinder.
* Support **camera and lighting** (ambient & diffuse).
* Handle **translation & rotation** transformations.
* Ensure proper **window events** (ESC key, red cross).

---

### ✨ Bonus Ideas

* Specular reflection (Phong model).
* Checkerboard textures.
* Extra objects (cone, paraboloid...).
* Multiple lights with colors.
* Bump mapping.

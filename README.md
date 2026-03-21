# ✈️ Adelaide Airport Air Traffic Control System (C++)

## 📌 Overview

This project is an early-stage simulation of an **Air Traffic Control (ATC) system** built in C++ using Object-Oriented Programming principles.

Developed in 2019 as one of my first OOP projects, it explores how aircraft, pilots, and airport infrastructure interact to coordinate **safe departures and landings**.

While not fully completed due to scope complexity, the project demonstrates foundational thinking in **system design, constraints, and coordination logic** within a safety-critical domain.

---

## 🎯 Objectives

* Model interactions between **planes, pilots, and airport infrastructure**
* Simulate basic **air traffic control decisions**
* Apply **OOP concepts** such as inheritance, encapsulation, and class relationships
* Explore constraints such as **resource availability (pilots, gates, runways)**

---

## 🧱 System Design

### Core Entities

#### 🏢 Adelaide_Airport (Base Class)

Represents the airport infrastructure and control system.

**State:**

* Gates (6 total)
* Runways (2 total)
* Plane registry (max 6 planes)
* Pilot registry (max 12 pilots)

**Key Responsibilities:**

* Manage landing and departure permissions
* Track resource availability (gates, runways, pilots)
* Store and manage active planes

**Key Methods:**

* `Allow_landing()` → whether landing is possible based on gate availability
* `Allow_departure()` → checks requirements (pilot, co-pilot, fuel, passengers)
* `Check_gate_availability()`
* `Add_plane()` → handles plane entry into system
* `Get_plane_detail()`

---

#### ✈️ Plane (Derived Class)

Represents an aircraft in the system.

**State:**

* Name
* Fuel level
* Origin and destination
* Assigned pilot and co-pilot
* Number of passengers

**Behaviour:**

* `Landing()`
* `Departure()`
* `Standby()`
* `Get_Pilot()`
* `Get_CoPilot()`

---

#### 👨‍✈️ Pilot (Derived Class)

Represents pilots assigned to aircraft.

**State:**

* Name
* Age
* Flight time (experience)
* Gender

**Behaviour:**

* `Get_detail()`
* `Request_landing()`
* `Request_departure()`

---

## ⚙️ Core Logic

The simulation revolves around **resource-constrained decision making**:

### ✈️ Departure Conditions

A plane can only depart if:

* A **pilot and co-pilot** are assigned
* Sufficient **fuel** is available
* Passenger requirements are met
* Runway availability is confirmed

---

### 🛬 Landing Conditions

A plane can only land if:

* A **gate is available**
* Runway access is granted
* The airport system approves the request

---

### 🚦 System Constraints

* Limited gates (6) → controls landing capacity
* Limited runways (2) → controls traffic flow
* Limited pilots (12) → critical dependency for operations

These constraints simulate real-world bottlenecks in airport systems.

---

## 🛠️ Tech Stack

* Language: C++
* Paradigm: Object-Oriented Programming (OOP)

---

## 🚧 Limitations & Learnings

* Project scope became more complex than initially anticipated
* Highlighted challenges in **modelling interconnected systems**
* Exposed gaps in early understanding of **class relationships and architecture design**
* Sparked interest in **system-level thinking and real-world simulation problems**

---

## 💡 Future Improvements

* Refactor class hierarchy (reduce tight coupling between Pilot, Plane, and Airport)
* Introduce better **separation of concerns** (controller vs entities)
* Add scheduling logic for runway and gate allocation
* Implement event-driven simulation (queue-based requests)
* Improve realism with time-based simulation and prioritisation rules

---

## 🧠 Takeaway

This project sparked my interest in airspace systems and large-scale coordination problems, especially how infrastructure constraints impact system behaviour

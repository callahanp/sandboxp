# sandboxp
A sandbox for Multi-Threaded, Multi-Process, Multiple Processor, Cluster and Networked Cluster Parallell Processing

#### Todo:  

- Review videos on OpenMP by Tim Mattson. https://www.youtube.com/watch?v=nE-xN4Bf8XI&list=PLLX-Q6B8xqZ8n8bwjGdzBJ25X2utwnoEG&index=2
- Consider reading https://www.amazon.com/OpenMP-Common-Core-Engineering-Computation/dp/0262538865
- Find and code exercises from Tim's videos
- Find slides from Tim's videos
  - https://www.openmp.org/wp-content/uploads/Intro_To_OpenMP_Mattson.pdf
- Add object dump method to every class
- Add logging for object instantiation

#### DesignStatus:

- Application is still single threaded and does not communicate between processes
- All classes create simple objects with members for names and native type data items.
- No object composition yet.
- Added Apache log4cxx to the project

#### Questions: 

- Can logging be done in a separate thread without blocking?

#### Overview

Sandboxp is intended to be an exploratory work area for various scenarios that may benefit from the application of paralellism in multiple processes.  The primary motivation is to explore design principles in such a way that they can be applied to various parts of a flight simulation program.

The core idea is a Component class that manages an update process whose inputs include data sourced from other instances of the Component class.  Each instance may be run in different execution contexts such as a different, thread, process on the same or another cpu, even a separate network node.   The class is designed so that the process is guaranteed to run within a given time slice window using a full set of updated data that is guaranteed to be consistent, regardless of it's source and the asynchronous nature of communication mechanisms.

#### Speculative Design Ideas

So what does it mean for a Component to manage it's process and data.  

Every process does in some sense manage itself as a process and manage its data, whether we give much thought to it or not.  For example, When we write code, we think about data management for the variables of a program in various ways.  We consider the process of assigning a data value to a variable having a particular "native type".  We think about it's scope, the assignment and recovery of data storage.  We think in terms of instantiation, initialization, and persistence.   Our focus is usually on the behaviour and implementation details of individual variables and data structures .

When we do object oriented or functional programming, there is some focus on the meaning of the data, but this is mainly about naming things and their relationships within the problem domain.  

If time is a consideration at all, it's that the program's overall behaviour should appear to the user to be smooth, consistently quick and free of jitter.  That's usually pretty easy to do using modern operating sytems and event based asynchronous programming.

There's more to it when you are writing a simulation program.  There's so much activity required that a single threaded process may saturate a single CPU, leaving little leeway for increased complexity without slowing the frame rate to accomodate additional processing. Such delays can be annoying, and if severe enough prevent the simulation from being useful.

One approach that seems promising is to assign portions of the processing to separate threads.  Here though is where difficulties arise.  Programs written as single threaded processes cannot easily be makde multithreaded by fiat.  Considerations of blocking calls, locking and deadlocks come into play.  In additiona, Multi threaded programs are notoriously difficult to test and errors in programming become difficult to observe.  If there is any lag time involved, it could affect simulation calculations by introducing spurious harmonic oscillations that would not be present in the system being simulated.  For example a simulated aircraft might pitch up and down repeatedly, and possiby with increasing pitch changes in each cycle of the oscillation.

I hope that this project will address these issues in a way that gives some insight into what changes might be reasonable to make in Flightgear.

#### Possible features (currently vaporware)

Note that this is a very preliminary take on an infrastructure and is likely to be totally rewritten several times.

- Components are represented by c++ classes
- Components do some kind of work
- Components communicate with other components via
  - Broadcast Channels
  - Point to Point Channels
  - Publication/Subscription
  - Request/Response

- Communication between components is a message. Messages can be 
  - recorded by a Component
  - queued for processing 
  - prioritized or unproritized
  
 - Statistics
  -  Count of Objects of each Component Class
  -  Time since last object modification
  -  Time since last component modification

- Gotchas
  - Anything that turns out to be in-determinate.
  - Cyclic nature of communication with latency can cause oscillation in some circumstances
  - Missed or delayed communication
  - 
  
#### Possible classes:
  - Component
  - Message
  - MessageQueue
  - Channel
  - Publication
  - Subscription
  - Request
  - Response
  - Event - Arrival of a message maybe?
 

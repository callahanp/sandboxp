# sandboxp
A sandbox for Multi-Threaded, Multi-Process, Multiple Processor, Cluster and Networked Cluster Parallell Processing

Sandboxp is intended to be an exploratory work area for various scenarios that may benefit from the application of paralellism in multiple processes.  The primary motivation is to explore design principles in such a way that they can be applied to various parts of a flight simulation program.

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
 

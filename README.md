# MapFreeMemoryHandles
Find all type of handles free in Windows Memory

This technique basically map all the memory searching Handles or Objects created and used by others processes but totally perfect to use in your process, but what objects you can capture?

The most relevant are the following ones:

    File Handles
    Windows Registry Handles
    Process Handles
    User Tokens
    Threads Handles

Why is useful for malware developers?

The security solutions like Antivirus or EDR are always searching for new process creation, file manipulation, creation of remote threads, registry values or key modification. And with this free objects created by another legit process we don’t need to do this considered malicious activities never.

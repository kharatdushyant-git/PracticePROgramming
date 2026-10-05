/*
Assignment 65 - Question 2

Customers submit support requests:

R101
R102
R103
R104

Requests must normally be handled in the same order in which they arrive.

Implement:

addRequest()
processRequest()
showPendingRequests()
*/

import java.util.ArrayDeque;

class SupportQueue
{
    ArrayDeque<String> requests = new ArrayDeque<String>();

    void addRequest(String str)
    {
        requests.addLast(str);
    }

    void processRequest()
    {
        if(requests.isEmpty())
        {
            System.out.println("No pending requests");
        }
        else
        {
            System.out.println("Processing request : " +
                               requests.removeFirst());
        }
    }

    void showPendingRequests()
    {
        System.out.println("Pending requests:");

        for(String str : requests)
        {
            System.out.println(str);
        }
    }
}

class PROgram0324
{
    public static void main(String A[])
    {
        SupportQueue sobj = new SupportQueue();

        sobj.addRequest("R101");
        sobj.addRequest("R102");
        sobj.addRequest("R103");
        sobj.addRequest("R104");

        sobj.processRequest();

        sobj.showPendingRequests();
    }
}
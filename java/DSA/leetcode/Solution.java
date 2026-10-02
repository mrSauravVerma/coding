public class Solution {

    class ListNode {
        int val;
        ListNode next;

        ListNode(int val) {
            this.val = val;
            this.next = null;
        }
    }

    public ListNode reverseKGroup(ListNode head, int k) {

        if (head == null || k == 1) {
            return head;
        }

        ListNode dummy = new ListNode(-1);
        dummy.next = head;

        ListNode prevGroup = dummy;

        while (true) {

            // Find kth node
            ListNode kth = prevGroup;

            for (int i = 0; i < k; i++) {
                kth = kth.next;

                if (kth == null) {
                    return dummy.next;
                }
            }

            // Node after current group
            ListNode nextGroup = kth.next;

            // Reverse current group
            ListNode prev = nextGroup;
            ListNode curr = prevGroup.next;

            while (curr != nextGroup) {
                ListNode next = curr.next;

                curr.next = prev;
                prev = curr;
                curr = next;
            }

            // Connect previous group with reversed group
            ListNode oldHead = prevGroup.next;

            prevGroup.next = kth;

            // old head is now the last node of reversed group
            prevGroup = oldHead;
        }
    }

    ListNode createList(int[] values) {

        if (values.length == 0) {
            return null;
        }

        ListNode head = new ListNode(values[0]);
        ListNode current = head;

        for (int i = 1; i < values.length; i++) {
            current.next = new ListNode(values[i]);

            // FIX
            current = current.next;
        }

        return head;
    }

    void printList(ListNode head) {

        ListNode current = head;

        while (current != null) {

            System.out.print(current.val);

            if (current.next != null) {
                System.out.print(" -> ");
            }

            current = current.next;
        }

        System.out.println();
    }

    public static void main(String[] args) {

        Solution sol = new Solution();

        int[] values = { 1, 2, 3, 4, 5 };
        int k = 2;

        ListNode head = sol.createList(values);

        System.out.println("Original list:");
        sol.printList(head);

        head = sol.reverseKGroup(head, k);

        System.out.println("After reversing in groups of " + k + ":");
        sol.printList(head);
    }
}